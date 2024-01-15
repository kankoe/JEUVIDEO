#include "aventurier.h"

aventurier::aventurier(int x, int y,char c): personnage{x,y,c}
{}



void aventurier::seDeplace(int input,position &positionActuel) {
    switch(input)
    {
        //move up
        case 'z':
            deplaceHaut(positionActuel);
            break;
            //move down
        case 's':
            deplaceBas(positionActuel);
            break;
            //move left
        case 'q':
            deplaceGauche(positionActuel);
            break;
            //move right
        case 'd':
            deplaceDroite(positionActuel);
            break;
        default:
            break;
    }
}

void aventurier::movePlayer(position &posactuel,card &map)
{
    if(map.carte()[posactuel.abcisse()][posactuel.ordonner()].walkable()){
        setPosX(posactuel.abcisse()) ;
        setPosY(posactuel.ordonner());
    }
}
void aventurier::attaquer(personnage &monstreAttaquer) {
    int probabilite = rand()%100;
    //calcule de l'attaque
    int attaque = (*this).pointForce()+d_epee->getSolidite();
    if (probabilite<80){
        attaque *= 0.9;
    }
    monstreAttaquer.estAttaque(attaque);
    d_epee->utiliser(EPEE_TAUX_DE_PERTE);
}

void aventurier::estAttaque(int pointForce) {
    if ((*this).pointVie() > 0) {
        if ( d_armure->estDetruit() != true) {
            d_armure->utiliser(pointForce*ARMUR_TAUX_DE_PERTE);
            (*this).setVie(pointVie()-pointForce * VIE_TAUX_DE_PERTE);
        }else{
            (*this).setVie(pointVie()-pointForce);
        }
    }
    else{
        //kill();
    }
}