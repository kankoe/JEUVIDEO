#include "position.h"

//
// Created by agbek on 20/12/2023.
//
int position::abcisse() const {
    return d_x;
}

bool position::walkable() const {
    return d_walkable;
}

char position::caractere() const {
    return d_ch;
}

void position::setcaractere(char caratere) {
    d_ch=caratere;
}

void position::setwalkable(bool walkable) {
    d_walkable=walkable;
}

position::position() : d_y{0},d_x{0}{}

position::position(int x, int y) : d_x{x},d_y{y}{}

int position::ordonner() const {
    return d_y;
}

void position::setabcisse(int x) {
    d_x=x;
}

position::position(int x, int y, char c):d_x{x},d_y{y},d_ch{c} {

}

void position::setordonner(int y) {
    d_y=y;
}

#include "position.h"
