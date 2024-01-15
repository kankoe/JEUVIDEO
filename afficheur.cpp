/*ceci est une classe de teste pour gerer temporairement les affichage*/
#include "afficheur.h"


void afficheur::affichecarte(card &mycarte) const {

    for (int y = 0; y < mycarte.largeur(); y++)
    {
        for (int x = 0; x < mycarte.longeur(); x++)
        {
            mvaddch(y, x, mycarte.carte()[y][x].caractere());
        }
    }
}

void afficheur::afficheuraventurier(aventurier &myplayer) const {
    mvaddch(myplayer.posX(),myplayer.posY(),myplayer.caracter());

}

void afficheur::drawEverything(card &mycarte, aventurier &myplayer) const {
    clear();
    affichecarte(mycarte);
    afficheuraventurier(myplayer);
}
