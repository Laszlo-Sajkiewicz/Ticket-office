/* 
 * File:   Billet.cpp
 * Author: sajkiewl
 * 
 * 
 */

#include "Billet.h"

Billet::Billet(Trajet & unTrajet, Tarif & unTarif)
    : m_trajet(unTrajet), m_tarif(unTarif){    
}

const Trajet & Billet::getTrajet() const{
    return this->m_trajet;
}

const Tarif & Billet::getTarif() const{
    return this->m_tarif;
}

float Billet::getPrix() const{
    return getTarif().GetPrixAuKm().getVal() * getTrajet().GetDistance().getVal();
}

void Billet::afficher(ostream & cout) const{
    cout << getTrajet() << " " << getTarif() << " €/Km " << getPrix() << "€";
}

ostream & operator << (ostream & cout, const Billet & e){
    e.afficher(cout);
    return cout;
}