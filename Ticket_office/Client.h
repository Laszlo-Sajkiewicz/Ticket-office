/* 
 * File:   Client.h
 * Author: sajkiewl
 */

#ifndef CLIENT_H
#define	CLIENT_H

#include "Billet.h"
#include "BilletReduit.h"

#include <vector>

class Client {
public:
    Client(string nom);
    void addBillet(Billet & billet);
    vector<const Billet*> getBillets() const;
    string getNom() const;
    void afficher(std::ostream & cout = std::cout) const;
    friend std::ostream & operator << (std::ostream & cout, const Client & e);
private:
    vector<const Billet*> m_billets;
    string m_nom;
};

#endif	/* CLIENT_H */

