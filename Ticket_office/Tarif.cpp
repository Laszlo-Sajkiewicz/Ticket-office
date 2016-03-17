/* 
 * File:   Tarif.cpp
 * Author: sajkiewl
 * 
 *
 */

#include "Tarif.h"

const float Tarif::PRIXMAX = 10.0;
const float Tarif::PRIXMIN = 0.01;

Tarif::Tarif(string unLibelle, float unPrixKilo) 
    : m_libelle(unLibelle), m_prixAuKm(NombreContraint<float>(unPrixKilo, PRIXMIN, PRIXMAX)){    
}

NombreContraint<float> Tarif::GetPrixAuKm() const{
    return this->m_prixAuKm;
}

void Tarif::SetLibelle(string libelle){
    this -> m_libelle = libelle;
}

string Tarif::GetLibelle() const{
    return this->m_libelle;
}

void Tarif::afficher(ostream & cout) const{
    cout << GetLibelle() << " -> " << GetPrixAuKm();
}

ostream & operator << (ostream & cout, const Tarif & e){
    e.afficher(cout);
    return cout;
}

void Tarif::saisir(istream & cin){
    string libelle;
    float prixAuKm;
    cin >> libelle >> prixAuKm;
    SetLibelle(libelle);
    m_prixAuKm.setVal(prixAuKm);
}

istream & operator >> (istream & cin, Tarif & e){
    e.saisir(cin);
    return cin;
}