/* 
 * File:   Tarif.h
 * Author: sajkiewl
 *
 *
 */

#ifndef TARIF_H
#define	TARIF_H

#include <iostream>

#include "NombreContraint.h"

class Tarif {
public:
    Tarif(string unLibelle, float unPrixKilo = PRIXMIN);
    NombreContraint<float> GetPrixAuKm() const;
    void SetLibelle(string libelle);
    string GetLibelle() const;
    void afficher(std::ostream & cout = std::cout) const;
    friend std::ostream & operator <<(std::ostream & cout, const Tarif & e);
    void saisir(std::istream & cin = std::cin);
    friend std::istream & operator >>(std::istream & cin, Tarif & e);
private:
    string m_libelle;
    NombreContraint<float> m_prixAuKm;
    static const float PRIXMIN;
    static const float PRIXMAX;
};

#endif	/* TARIF_H */

