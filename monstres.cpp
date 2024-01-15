//
// Created by agbek on 02/12/2023.
//

#include "monstres.h"

int monstres::habilite() {
    return d_habilite;
}
void monstres::estAttaque(int pointForce) {

    if (pointVie() > pointForce)
        setVie(pointVie() - pointForce);
    else { //kill();}
    }
}

void monstres::attaquer(personnage &aventurier) {
    int probabilite = rand()%100;
    int attaque = (*this).pointForce();
    if(probabilite<d_habilite){
        attaque *= 0.9;
    }
    aventurier.estAttaque(attaque);
}
//void monstres::attaque(aventuriers &a) {}
