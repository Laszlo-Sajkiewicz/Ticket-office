/* 
 * File:   Promotion.cpp
 * Author: sajkiewl
 * 
 *
 */

#include "Promotion.h"

const float Promotion::TAUXMIN = 0.01;
const float Promotion::TAUXMAX = 0.99;

Promotion::Promotion(string unLibelle, float unTaux)
    : m_libelle(unLibelle), m_tauxReduction(NombreContraint<float>(unTaux, TAUXMIN, TAUXMAX)){    
}

string Promotion::getLibelle() const{
    return this->m_libelle;
}

void Promotion::setLibelle(string unLibelle){
    this->m_libelle = unLibelle;
}

float Promotion::calculePrixReduit(float prix) const{
    return prix * (1 - m_tauxReduction.getVal());
}

void Promotion::afficher(ostream & cout) const{
    cout << getLibelle() << " " << m_tauxReduction.getVal() * 100 << "%";
}

ostream & operator << (ostream & cout, const Promotion & e){
    e.afficher(cout);
    return cout;
}

void Promotion::saisir(istream & cin){
    string libelle;
    float tauxReduction;
    cin >> libelle >> tauxReduction;
    setLibelle(libelle);
    m_tauxReduction.setVal(tauxReduction);
}

istream & operator >> (istream & cin, Promotion & e){
    e.saisir(cin);
    return cin;
}
