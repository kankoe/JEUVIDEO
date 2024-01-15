//
// Created by agbek on 02/12/2023.
//

#include "equipements.h"

equipement::equipement(int solidite, bool etat,int x ,int y): d_solidite{solidite},
d_detruit{etat}, d_position_equipement(x,y){}

int equipement::getSolidite() const {
    return d_solidite;
}

void equipement::setEstDetruit(bool etat) {
    d_detruit=etat;
}

bool equipement::estDetruit() const {
    return d_detruit;
}

void equipement::setSolidite(int solidite) {
    d_solidite=solidite;
}
int equipement::posX() const {
    return d_position_equipement.abcisse();
}

int equipement::posY() const {
    return d_position_equipement.ordonner();
}

void equipement::setPosX(int x) {
    d_position_equipement.setabcisse(x);
}

void equipement::setPosY(int y) {
    d_position_equipement.setordonner(y);
}
