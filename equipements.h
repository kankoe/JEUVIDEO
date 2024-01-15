//
// Created by agbek on 02/12/2023.
//

#ifndef APP_AVENTURIER_JEU_EQUIPEMENTS_H
#define APP_AVENTURIER_JEU_EQUIPEMENTS_H

#include "position.h"

/*
 * les equipements qui peuvent appartenir soit a l'aventurier ou aux monstres
 * class abstraite
 * */

class equipement {
public:
    equipement(int solidite, bool etat,int x ,int y);
    virtual ~equipement() = default;
    int getSolidite() const;
    void setSolidite(int solidite);
    bool estDetruit() const;
    void setEstDetruit(bool etat);
    virtual void utiliser(int pointDeForce) = 0;
    virtual void recupererSolidite(int pointsRecuperation) = 0;
    int posX() const;
    int posY() const;
    void setPosX(int x);
    void setPosY(int y);
private:
    int d_solidite;
    bool d_detruit;
    position d_position_equipement;
};



#endif //APP_AVENTURIER_JEU_EQUIPEMENTS_H
