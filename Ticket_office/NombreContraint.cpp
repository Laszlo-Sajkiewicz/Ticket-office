/* 
 * File:   NombreContraint.cpp
 * Author: sajkiewl
 */
#ifdef NOMBRECONTRAINT_H
#include <iostream>

using namespace std;

template <class T>
NombreContraint<T>::NombreContraint(T val, T min, T max) : m_min(min), m_max(max) {
    if (getMin() > getMax()){
        throw "Minimum supérieur au maximum";
    }
    setVal(val);
}

template <class T>
void NombreContraint<T>::afficher(std::ostream& cout) const {
    cout << getVal();
}

template <class T>
T NombreContraint<T>::getMax() const {
    return this -> m_max;
}

template <class T>
T NombreContraint<T>::getMin() const {
    return this -> m_min;
}

template <class T>
T NombreContraint<T>::getVal() const {
    return this -> m_val;
}

template <class T>
void NombreContraint<T>::saisir(istream& cin) {
    T v;
    cin >> v;
    setVal(v);
}

template <class T>
void NombreContraint<T>::setVal(T val) {
    if (val >= getMin() && val <= getMax()) {
        this -> m_val = val;
    } else {
        throw "La valeur n'est pas dans l'intervalle !";
    }
}

template <class T>
NombreContraint<T>::operator T() {
    return getVal();
}

template <class T>
istream & operator >> (istream & cin, NombreContraint<T> & e){
    e.saisir(cin);
    return cin;
}

template <class T>
ostream & operator << (ostream & cout, const NombreContraint<T> & e){
    e.afficher(cout);
    return cout;
}
#endif