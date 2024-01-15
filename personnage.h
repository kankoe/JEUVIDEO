//
// Created by dell on 20/12/2023.
//

#ifndef APP_AVENTURIER_JEU_PERSONNAGES_H
#define APP_AVENTURIER_JEU_PERSONNAGES_H

#include "position.h"

class personnage {
public:
    personnage(int x,int y,char c);
    virtual ~personnage() = default;

    //virtual void estAttaque()=0;//aussi ça attaque de l'adverssaire va appeler ça ????
    virtual void seDeplace(int input,position &positionActuel)=0; //je ne sais pas non plus si elle va prendre des paramètres, let's see
    virtual void attaquer(personnage &personnage1)=0;
    virtual void estAttaque(int pointForce)=0;
    // Accesseur
    void setVie(int pointVie);
    void setForce(int pointForce);
    int pointVie() const;
    int pointForce() const;
    int posX() const;
    int posY() const;
    void setPosX(int x);
    void setPosY(int y);
    char caracter() const;
    // Methodes de déplacement d'un personnage dans le jeux video
    void deplaceHaut(position &positionActuel);
    void deplaceBas(position &positionActuel) ;
    void deplaceGauche(position &positionActuel);
    void deplaceDroite(position &positionActuel) ;

private:
    int d_pointVie=100;
    int d_pointForce=100;
    position d_position_personnage;
};


#endif //APP_AVENTURIER_JEU_PERSONNAGES_H
