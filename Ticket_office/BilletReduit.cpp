/* 
 * File:   BilletReduit.cpp
 * Author: sajkiewl
 * 
 * 
 */

#include "BilletReduit.h"
#include "Promotion.h"

BilletReduit::BilletReduit(Trajet & unTrajet, Tarif & unTarif, Promotion & unePromo)
    : Billet(unTrajet, unTarif), m_promotion(unePromo){    
}

float BilletReduit::getPrix() const {
    return m_promotion.calculePrixReduit(Billet::getPrix());
}

const Promotion & BilletReduit::getPromotion() const{
    return this->m_promotion;
}

void BilletReduit::afficher(ostream & cout) const{
    cout << Billet::getTrajet() << " €/Km " << getTarif() << "\nPromotion : " << getPromotion() << " " << getPrix() << "€";
}

ostream & operator << (ostream & cout, const BilletReduit & e){
    e.afficher(cout);
    return cout;
}