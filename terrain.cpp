//
// Created by agbek on 19/12/2023.
//

#include "terrain.h"
//definition des paramètre du jeu
void terrain::gamesetup() {
    /*les 3 methodes qui suit sont des methodes de la bibliothèque pdcurses*/
    initscr();
    noecho();
    curs_set(0);
    //charger les configuration de la carte sur le terrain
    d_card.setupCard();
}

void terrain::gameloop()  {
    //variable pour recuperer les entrer du clavier
    int ch;
    //recuperer la personnage actuelle de l'aventurier
    position posactue{player.posX(), player.posY()};
    //dire à l'afficheur d'afficher la carte et l'aventurier
    d_draw.drawEverything(d_card,player);

    while (ch=getch())
    {
        //condition d'arret du jeu
        if(ch=='e'){
            break;
        }
        //recuperation de la personnage saisite c'etais sa le bugs a revoire toute la partie
        position posactuel{player.posX(), player.posY()};
        player.seDeplace(ch,posactuel);
        player.movePlayer(posactuel,d_card);
        //effacer et reafficher le terrain après chaque action
        d_draw.drawEverything(d_card,player);
    }
}

//constructeur de terrain
terrain::terrain(int x,int y,char c,int width,int height,char ch) :
        player{x,y,c}, d_card(width,height,ch), d_draw()
{}

//destructeur de terrain qui détruit la carte
terrain::~terrain() {
    for (int i = 0; i < d_card.largeur(); i++)
        {delete[] d_card.carte()[i];}
    delete[] d_card.carte();
    endwin();
}
