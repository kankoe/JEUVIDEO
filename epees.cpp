//
// Created by agbek on 02/12/2023.
//
#include <cstdlib>
#include "epees.h"

epee::epee(int solidite, bool etat,int x ,int y) : equipement{solidite,etat,x,y} {}

//utilisation de l'équipement.
void epee::utiliser(int pointDeForce) {
    if (estDetruit()!=true) {
        setSolidite(getSolidite()-pointDeForce);  // perd un point à chaque utilisation
        if (getSolidite() <= 0) {
            setEstDetruit(true);
        }
    }
}


//récupérer la solidité de l'équipement.
void epee::recupererSolidite(int pointsRecuperation) {
    setSolidite(getSolidite()+pointsRecuperation);
}


