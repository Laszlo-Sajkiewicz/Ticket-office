/* 
 * File:   Conteneur.h
 * Author: sajkiewl
 */

#ifndef CONTENEUR_H
#define	CONTENEUR_H

#include <vector>

template<class T> class Conteneur {
    
public:    
    Conteneur();
    void ajouter(T & element);
    void afficher();
    T & choisirElement();
private:
    std::vector<T*> contenu;
    
}; 

#endif	/* CONTENEUR_H */

