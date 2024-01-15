//
// Created by dell on 20/12/2023.
//

#include "personnage.h"


personnage::personnage(int x, int y,char c) : d_position_personnage(x,y,c) //, d_pointVie{100},d_pointForce{100}
{

}
void personnage::setVie(int pointVie) {
    d_pointVie = pointVie;
}

void personnage::setForce(int pointForce) {
    d_pointForce = pointForce;
}

int personnage::pointForce() const {
    return d_pointForce;
}

int personnage::posX() const {
    return d_position_personnage.abcisse();
}

int personnage::posY() const {
    return d_position_personnage.ordonner();
}

void personnage::setPosX(int x) {
    d_position_personnage.setabcisse(x);
}

void personnage::setPosY(int y) {
    d_position_personnage.setordonner(y);
}

int personnage::pointVie() const {
    return d_pointVie;
}

char personnage::caracter() const {
    return d_position_personnage.caractere();
}
void personnage::deplaceHaut(position &positionActuel) {
    positionActuel.setabcisse(posX()-1);
}
void personnage::deplaceBas(position &positionActuel) {
    positionActuel.setabcisse(posX()+1);
}

void personnage::deplaceGauche(position &positionActuel) {
    positionActuel.setordonner(posY()-1);
}
void personnage::deplaceDroite(position &positionActuel) {
    positionActuel.setordonner(posY()+1);
}