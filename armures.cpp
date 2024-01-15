#include "armures.h"

armure::armure(int solidite, bool etat,int x ,int y) : equipement(solidite,etat,x,y) {}

void armure::utiliser(int pointDeForce) {
    if (getSolidite()>pointDeForce) {
        setSolidite(getSolidite() - pointDeForce);
    }
    else{
        setEstDetruit(true);
    }
}

void armure::recupererSolidite(int pointsRecuperation) {
    setSolidite(getSolidite()+pointsRecuperation);
    setEstDetruit(false);
}
