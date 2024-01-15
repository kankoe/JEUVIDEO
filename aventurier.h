#ifndef APP_AVENTURIER_JEU_AVENTURIERS_H
#define APP_AVENTURIER_JEU_AVENTURIERS_H

#include "personnage.h"
#include "equipements.h"
#include "armures.h"
#include "epees.h"
#include "card.h"
#include <vector>
#include <memory>
/*
 * la class aventurier représente je joueur principal du jeu video il hérite de personnage
 * */
class aventurier : public personnage{

public:
    aventurier(int x, int y,char c);
    void attaquer(personnage &monstreAttaquer) override;
    void estAttaque(int pointForce) override;
    void seDeplace(int input,position &positionActuel) override;
    void movePlayer(position &posactuel,card &map);
private:
    // Un aventurier a des equipement de defences et des equipements d'attaque
    armure *d_armure;
    epee *d_epee;
    static constexpr int ARMUR_TAUX_DE_PERTE = 3/4;
    static constexpr int EPEE_TAUX_DE_PERTE = 1;
    static constexpr int VIE_TAUX_DE_PERTE = 1/4;
};


#endif //APP_AVENTURIER_JEU_AVENTURIERS_H



