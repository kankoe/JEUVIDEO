//
// Created by agbek on 22/12/2023.
//

#include "salles.h"
//definition du constructeur avec parametre
salles::salles(int x, int y, int height, int width): position{y, x}, centre{x / 2, y / 2},
                                                     d_height{height}, d_width{width}{}

//definition de l'accesseur de hauteur de la salle
int salles::height() const {
    return d_height;
}

//definition de l'accesseur de largeur de la salle
int salles::width() const {
    return d_width;
}
//definition du constructeur par défaut
salles::salles(): position{0, 0}, centre{0, 0},
                  d_height{0}, d_width{0}{}


