//
// Created by agbek on 02/12/2023.
//

#ifndef APP_AVENTURIER_JEU_MONSTRES_H
#define APP_AVENTURIER_JEU_MONSTRES_H
#include "personnage.h"
#include <cstdlib>

/*
 * un montres est un personnages du jeu et il y a plusieurs types de monstres
 *
 * */
class monstres : public personnage {

public:
    int habilite();
    //Monstre est attaquer
    void estAttaque(int pointForce) override;
    void attaquer(personnage &aventurier) override;
private:
    int d_habilite;
};


#endif //APP_AVENTURIER_JEU_MONSTRES_H
