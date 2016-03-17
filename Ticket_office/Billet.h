/* 
 * File:   Billet.h
 * Author: sajkiewl
 *
 *
 */

#ifndef BILLET_H
#define	BILLET_H

#include "Trajet.h"
#include "Tarif.h"

class Billet {
public:
    Billet(Trajet & unTrajet, Tarif & unTarif);
    const Trajet & getTrajet() const;
    const Tarif & getTarif() const;
    float getPrix() const;
    virtual void afficher(std::ostream & cout = std::cout) const;
    friend std::ostream & operator <<(std::ostream & cout, const Billet & e);
private:
    const Trajet & m_trajet;
    const Tarif & m_tarif;
};

#endif	/* BILLET_H */

