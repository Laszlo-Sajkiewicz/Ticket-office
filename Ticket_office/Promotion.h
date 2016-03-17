/* 
 * File:   Promotion.h
 * Author: sajkiewl
 *
 * 
 */

#ifndef PROMOTION_H
#define	PROMOTION_H

#include <iostream>

#include "NombreContraint.h"

class Promotion {
public:
    Promotion(string unLibelle, float unTaux);
    string getLibelle() const;
    void setLibelle(string unLibelle);
    float calculePrixReduit(float prix) const;
    void afficher(std::ostream & cout = std::cout) const;
    friend std::ostream & operator << (std::ostream & cout, const Promotion & e);
    void saisir(std::istream & cin = std::cin);
    friend std::istream & operator >> (std::istream & cin, Promotion & e);
private:
    string m_libelle;
    NombreContraint<float> m_tauxReduction;
    static const float TAUXMIN;
    static const float TAUXMAX;
};

#endif	/* PROMOTION_H */

