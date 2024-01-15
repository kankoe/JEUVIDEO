//
// Created by agbek on 19/12/2023.
//

#ifndef UNTITLED_CARD_H
#define UNTITLED_CARD_H
#include "iostream"
#include "vector"
#include "personnage.h"
#include "salles.h"
#include "position.h"

#define MAX_HEIGHT 30
#define MAX_WIDTH 100

class card {
public:
    //constructeur avec paramètre de carte
    card(int width,int height,char ch);
    //accesseur de caratère
    char caractere()const;
    //accesseur du tableau a double dimension
    position** carte() const;
    //accesseur de hauteur
    int largeur() const;
    //accesseur de longueur
    int longeur() const;
    //methode pour mettre configurer la carte
    void setupCard() ;
    //destructeur de carte a cause des pointeurs
    ~card();

private:
    void createcard() ;
    //methode d'ajout des salles à la carte
    void ajoutsalles(salles &room);
    //caractère pour représenter l'exterieur du chateaux
    char d_ch;
    //la hauteur de la carte
    int d_largeur;
    //la largeur de la carte
    int d_longueur;
    //pointeur de salle pour enregistrer l'adresse de toutes les salles généré
    salles* salle;
    /*double pointeur d'elements correspondant a un tableau a double dimension pour
    pouvoir gerer facilement la carte et placé les autres elements facilement
    et pouvoir donner la taille que l'on veut*/
    position** d_carte ;
};


#endif //UNTITLED_CARD_H
