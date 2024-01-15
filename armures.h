#ifndef ARMURES_H
#define ARMURES_H

#include "equipements.h"

class armure : public equipement {

public:
    armure(int solidite, bool etat,int x ,int y);

    void utiliser(int pointDeForce) override;
    void recupererSolidite(int pointsRecuperation) override;
};

#endif // ARMURES_H
