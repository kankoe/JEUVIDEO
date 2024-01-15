//
// Created by agbek on 22/12/2023.
//

#ifndef UNTITLED_SALLES_H
#define UNTITLED_SALLES_H


#include "position.h"

class salles: public position{
public:
    //constructeur par defaut
    salles();
    //construire avec paramètre
    salles(int x,int y,int height,int width);
    //accesseur de hauteur de la salle
    int height() const;
    //accesseur de largeure de la salle
    int width() const;

private:
    //variable pour la hauteur
    int d_height;
    //variable pour la largeur
    int d_width;
    //variable
    position centre;
};


#endif //UNTITLED_SALLES_H
