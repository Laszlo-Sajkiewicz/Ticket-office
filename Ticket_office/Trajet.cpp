/* 
 * File:   Trajet.cpp
 * Author: sajkiewl 
 */

#include "Trajet.h"

const unsigned int Trajet::DISTANCEMAX = 1000;

Trajet::Trajet(string villeDep, string villeArr, unsigned int distance) 
    : m_villeDep(villeDep), m_villeArr(villeArr), m_distance(NombreContraint<unsigned int>(distance, 1, DISTANCEMAX)){
}

void Trajet::SetDistance(NombreContraint<unsigned int> distance) {
    this->m_distance = distance;
}

NombreContraint<unsigned int> Trajet::GetDistance() const {
    return m_distance;
}

void Trajet::SetVilleArr(string villeArr) {
    this->m_villeArr = villeArr;
}

string Trajet::GetVilleArr() const {
    return m_villeArr;
}

void Trajet::SetVilleDep(string villeDep) {
    this->m_villeDep = villeDep;
}

string Trajet::GetVilleDep() const {
    return m_villeDep;
}

void Trajet::afficher(ostream & cout) const{
    cout << GetVilleDep() << " " << GetVilleArr() << " -> " << GetDistance();
}

ostream & operator << (ostream & cout, const Trajet & e){
    e.afficher(cout);
    return cout;
}

void Trajet::saisir(std::istream& cin) {
    string villeDep,
           villeArr;
    unsigned int distance;
    cin >> villeDep >> villeArr >> distance;
    SetVilleArr(villeArr);
    SetVilleDep(villeDep);
    m_distance.setVal(distance);
}

istream & operator >> (istream & cin, Trajet & e){
    e.saisir(cin);
    return cin;
}