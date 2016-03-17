/* 
 * File:   NombreContraint.h
 * Author: sajkiewl
 */

#ifndef NOMBRECONTRAINT_H
#define	NOMBRECONTRAINT_H

#include <iostream>

template <class T>
class NombreContraint {
public:
    NombreContraint(T val = 0, T min = 0, T max = 100);
    inline T getMin() const;
    inline T getMax() const;
    inline T getVal() const;
    void setVal(T val);
    void saisir(std::istream & cin = std::cin);
    void afficher(std::ostream & cout = std::cout) const;
    operator T();

private:
    T m_min,
    m_max,
    m_val;
};

template <class T>
std::istream & operator >>(std::istream & cin, NombreContraint<T> & e);
template <class T>
std::ostream & operator <<(std::ostream & cout, const NombreContraint<T> & e);
#include "NombreContraint.cpp"
#endif	/* NOMBRECONTRAINT_H */

