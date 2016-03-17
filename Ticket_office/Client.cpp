/* 
 * File:   Client.cpp
 * Author: sajkiewl
 */

#include "Client.h"
#include <vector>
#include <iostream>

using namespace std;

Client::Client(string nom)
    : m_nom(nom), m_billets(){    
}

void Client::addBillet(Billet & billet){
    m_billets.push_back(&billet);
}

vector<const Billet*> Client::getBillets() const{
    return this->m_billets;
}

string Client::getNom() const{
    return this->m_nom;
}

void Client::afficher(ostream & cout) const{
    for (auto bil : m_billets){
        cout << *bil << endl;
    }
}

ostream & operator << (ostream & cout, const Client & e){
    e.afficher(cout);
    return cout;
}
