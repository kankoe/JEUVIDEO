//
// Created by agbek on 02/12/2023.
//

#ifndef APP_AVENTURIER_JEU_EPEES_H
#define APP_AVENTURIER_JEU_EPEES_H

#include "equipements.h"

/*
 * une epee est un equipement des personnage du jeu elle herite donc de la class equipement
 * */

class epee : public equipement {
public:
    epee(int solidite, bool etat,int x ,int y);

    void utiliser(int pointDeForce) override;
    void recupererSolidite(int pointsRecuperation) override;

};




#endif //APP_AVENTURIER_JEU_EPEES_H
