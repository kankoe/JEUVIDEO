

#include "card.h"
//definition de l'accesseur du tableau
position** card::carte() const {
    return d_carte;
}
//definition de la hauteur
int card::largeur() const {
    return d_largeur;
}
//definition de la largeur
int card::longeur() const {
    return d_longueur;
}
//destructeur qui libère la mémoire allouer par les pointeurs
card::~card() {
    for (int i = 0; i < d_largeur; i++)
        {
            delete[] d_carte[i];
        }
    delete[] d_carte;
    delete[] salle;
}
//constructeur de carte avec corps pour initialiser allouer la memoire dédier et l'initialiser
card::card(int width,int height,char ch):d_largeur{height},d_longueur{width},d_ch{ch}
{createcard();}

//configuration de la carte en génerant les salles et en les ajoutant a la carte
void card:: setupCard()  {
    int y, x, height, width, n_rooms;
    //variable qui détermine le nombre de salles qui sera générer
    n_rooms =  (rand() % 11) + 9;
    //allouer la dimensions de la salles
    salle=new salles[n_rooms];

    //dois nous servire a positionner l'aventurier a un bon endroit
    //personnage depart_pos;

   /*boucle qui nous permet de générer les salles au fure a mésures et les ajouter a la
    carte imediatement */
   for (int i = 0; i < n_rooms; i++)
    {
        y = (rand() % (largeur() - 30)) + 1;
        x = (rand() % (longeur() - 25)) + 1;
        height = (rand() % 7) + 3;
        width = (rand() % 15) + 5;
        salle[i] = salles(y, x, height, width);
        //appele de la methode pour ajouter la salle
        ajoutsalles(salle[i]);
    }

}

//methode pour ajouter la salle a la carte les salles sont représenter par des '.'
void card::ajoutsalles(salles &room) {
    for (int y = room.ordonner(); y < room.ordonner()+room.height(); y++)
    {
        for (int x = room.abcisse(); x < room.abcisse()+room.width(); x++)
        {
            d_carte[y][x].setcaractere('.');
            d_carte[y][x].setwalkable(true);

        }
    }
}
//Methode pour créer la carte avec les dimension adéquat
void card::createcard()  {

    d_carte = new position * [d_largeur];
    for (int y = 0; y < d_largeur; ++y) {
        d_carte[y] = new position[d_longueur];
        for (int x = 0; x < d_longueur; ++x) {
            d_carte[y][x].setcaractere(d_ch);
            d_carte[y][x].setwalkable(false);
        }
    }
}

//methode qui retourne le caracère
char card::caractere() const {
    return d_ch;
}

