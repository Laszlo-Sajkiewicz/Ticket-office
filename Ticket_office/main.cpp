/* 
 * File:   main.cpp
 * Author: sajkiewl
 *
 * 
 */

#include <cstdlib>

#include "BilletReduit.h"
#include "Billet.h"
#include "Promotion.h"
#include "Tarif.h"
#include "Trajet.h"
#include "Client.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Trajet tr("Lyon", "Grenoble", 100);
    Tarif tar("Plein tarif", 0.22);
    Promotion pro("Etudiant", 0.2);
    Billet bi(tr, tar);
    BilletReduit bir(tr, tar, pro);
    
    cout << bi << endl;
    cout << bir << endl;
    
    Client cli("Toto");
    cli.addBillet(bi);
    cli.addBillet(bir);
    
    cout << cli;
    
    return EXIT_SUCCESS;
}

