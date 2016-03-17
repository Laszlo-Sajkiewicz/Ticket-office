/* 
 * File:   Trajet.h
 * Author: sajkiewl
 */

#ifndef TRAJET_H
#define	TRAJET_H

#include <iostream>
#include "NombreContraint.h"

class Trajet {
public:
    Trajet(string villeDep, string villeArr, unsigned int distance);
    void SetDistance(NombreContraint<unsigned int> distance);
    NombreContraint<unsigned int> GetDistance() const;
    void SetVilleArr(string villeArr);
    string GetVilleArr() const;
    void SetVilleDep(string villeDep);
    string GetVilleDep() const;
    void afficher(std::ostream & cout = std::cout) const;
    friend std::ostream & operator <<(std::ostream & cout, const Trajet & e);
    void saisir(std::istream & cin = std::cin);
    friend std::istream & operator >>(std::istream & cin, Trajet & e);
private:
    string m_villeDep,
    m_villeArr;
    NombreContraint<unsigned int> m_distance;
    static const unsigned int DISTANCEMAX;
};

#endif	/* TRAJET_H */

