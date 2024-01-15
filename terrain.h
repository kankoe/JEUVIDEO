//
// Created by agbek on 19/12/2023.
//

#ifndef UNTITLED_TERRAIN_H
#define UNTITLED_TERRAIN_H
#include "aventurier.h"
#include "card.h"
#include "afficheur.h"
#include "curses.h"
#include "monstres.h"

class terrain {
public:
    //constructeur de terrain
    terrain(int x,int y,char c,int width,int height,char ch);
    //methode pour charger les configuration du jeu
    void gamesetup() ;
    //la boucle dans laquel le jeu se déroulr
    void gameloop() ;
    //la methodes pour cloture du jeu
    ~terrain();
private:
    //l'aventurier
    aventurier player;
    //la carte
    card d_card;
    monstres* d_monstres;
    //l'afficheur
    afficheur d_draw;
};


#endif //UNTITLED_TERRAIN_H
