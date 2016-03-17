/* 
 * File:   Conteneur.cpp
 * Author: sajkiewl
 */

#include "Conteneur.h"
#include "NombreContraint.h"

#include <iostream>

using namespace std;

template<class T>
Conteneur<T>::Conteneur() {
}

template<class T>
void Conteneur<T>::ajouter(T & element) {
    contenu.push_back(&element);
}

template<class T>
void Conteneur<T>::afficher() {
    for (int i = 0; i < contenu.size(); i++) {
        cout << i + 1 << " - ";
        cout << contenu[i] << endl;
    }
}

template<class T>T & Conteneur<T>::choisirElement() {
    NombreContraint<int> n(1, 1, contenu.size());
    bool ok;
    do {
        try {
            afficher();
            cout << endl << "Votre choix : ";
            cin >> n;
            ok = true;
        } catch (const char* e) {
            cout << " Choix entre 1 et " << contenu.size() << endl;
            ok = false;
        }
    } while (!ok);
    return * contenu [ n.getVal() - 1 ];
}