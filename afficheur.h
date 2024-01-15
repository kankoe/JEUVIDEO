#ifndef UNTITLED_AFFICHEUR_H
#define UNTITLED_AFFICHEUR_H


#include "card.h"
#include "aventurier.h"
#include "curses.h"

class afficheur {
public:
    void affichecarte(card &mycarte)const;
    void afficheuraventurier(aventurier &myplayer)const;
    void drawEverything(card &mycarte, aventurier &myplayer)const;
private:

};


#endif //UNTITLED_AFFICHEUR_H
