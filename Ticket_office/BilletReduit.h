/* 
 * File:   BilletReduit.h
 * Author: sajkiewl 
 *
 * 
 */

#ifndef BILLETREDUIT_H
#define	BILLETREDUIT_H

#include "Billet.h"
#include "Promotion.h"

class BilletReduit : public Billet {
public:
    BilletReduit(Trajet & unTrajet, Tarif & unTarif, Promotion & unePromo);
    float getPrix() const;
    const Promotion & getPromotion() const;
    void afficher(std::ostream & cout = std::cout) const;
    friend std::ostream & operator << (std::ostream & cout, const BilletReduit & e);
private:
    const Promotion & m_promotion;
};

#endif	/* BILLETREDUIT_H */

