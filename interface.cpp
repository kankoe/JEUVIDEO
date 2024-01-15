#include <cstdio>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cmath>
#include <iostream>
#include <windows.h>
#include "interface.h"
#include <conio.h>
#include "terrain.h"

///re essayer later avec include conio h
/**------------------------------------------------------------------------------------------------**/
/**                                    declaration des fonctions                                   **/
/**------------------------------------------------------------------------------------------------**/

void textbackground(int color)
{
    // Obtient des informations sur le tampon d'écran de la console
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);

    // Modifie l'attribut de texte de la console pour définir la couleur d'arrière-plan
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color * 16 + info.wAttributes % 16);
}

void textcolor(int color)
{
    // Obtient des informations sur le tampon d'écran de la console
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);

    // Modifie l'attribut de texte de la console pour définir la couleur du texte
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color + info.wAttributes - info.wAttributes % 16);
}

void gotoxy(int x, int y)
{
    // Déplace le curseur à la position spécifiée sur la console
    COORD Pos = {x - 1, y - 1};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void CurseurVisible(BOOL booleen)
{
    // Configure la visibilité du curseur de la console
    CONSOLE_CURSOR_INFO Info;
    Info.bVisible = booleen;
    Info.dwSize = TRUE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}

// Fonction permettant de produire un discours vocal en utilisant le moteur SAPI
void assistanteVocal(char *chaine)
{
    // Crée un fichier VBS avec la chaîne à synthétiser
    char temp1[256];
    sprintf(temp1, "echo m=\"%s\" > file.vbs", chaine);
    system(temp1);

    // Utilise le moteur SAPI pour faire parler la chaîne
    sprintf(temp1, "echo CreateObject(\"SAPI.SpVoice\").Speak m >> file.vbs");
    system(temp1);

    // Exécute le fichier VBS et le supprime ensuite
    sprintf(temp1, "file.vbs");
    system(temp1);
    remove("file.vbs");
}

///Proc�dure de chargement pour attendre entre deux pages
void ecranChargement()
{

    int l;
    textcolor(11);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n *");
    textcolor(14);
    printf("\t\t\t\t\tChargement ");
    for(l=0; l<14; l++)
    {
        textcolor(15);
        Sleep(100);
        printf(". ");
    }
    textcolor(14);
    printf("100 %%");
    Sleep(400);
    textcolor(15);
    system("cls");
}

//Former un cadre qui entoure la page de chargement
void cardreChargement()

{
    int i ;
    system("cls");
    for (i=3; i<=28; i++)
    {
        gotoxy(2,i) ;
        textcolor (11);
        printf("*") ;
        gotoxy(119,i);
        textcolor (11);
        printf("*") ;
    }
    gotoxy(2,29);
    textcolor(11);
    for (i=30; i<148; i++)
    {
        printf("*");
    }
    gotoxy(2,2) ;
    for (i=30; i<148; i++)
    {
        printf("*");
    }
    textcolor(15);

}

//Former un cadre qui entoure les menus
void cardreMenu()

{
    int i;
    gotoxy(5,3) ;
    for (i=0; i<=110; i++)
    {
        textcolor (11);
        printf("*");
    }
    gotoxy(5,29) ;
    for (i=0; i<=110; i++)
    {
        textcolor (11);
        printf("*");
    }

    for (i=3; i<=29; i++)
    {
        gotoxy(5,i) ;
        textcolor (11);
        printf("*") ;
        gotoxy(115,i);
        textcolor (11);
        printf("*") ;
    }
    textcolor (15);

}


void LancerJeux ()
{
    assistanteVocal("Projet de qualitet de programmation, raialiset par Bennour, ABGPEKPONOU, BARRY, BALDET");
    cardreChargement();
    ecranChargement();
    CurseurVisible (0);
}

int menuPrincipal() {
    int cpt = 1, selected = 14, not_selected = 15, select_back = 12;
    char select;

    do {
        system("cls");
        textcolor(15);
        gotoxy(53, 2);
        textbackground(9);
        textcolor(15);
        std::cout << " Menu principal ";
        textbackground(0);

        for (int i = 1; i <= 3; ++i) {
            gotoxy(15, 5 + (i - 1) * 3);
            if (cpt == i) {
                textbackground(select_back);
                textcolor(selected);
            } else {
                textbackground(0);
                textcolor(not_selected);
            }

            std::cout << "0" << i << "\\- ";
            if (i == 1)
                std::cout << "Generez d'un terrain, Jouez !";
            else if (i == 2)
                std::cout << "Gestion de Terrains";
            else if (i == 3)
                std::cout << "Quitter le programme";
        }

        textcolor(15);
        textbackground(0);

        do {
            select = _getch();
        } while (select != 72 && select != 80 && select != 13);

        if (select == 72 && cpt > 1)
            cpt = cpt - 1;
        else if (select == 80 && cpt < 3)
            cpt = cpt + 1;

    } while (select != 13);

    return cpt;
}



void lancerActionSelonChoix()


{
    int c1,sortir=0;

    srand(time(NULL));

   while (sortir!=1)
    {
        c1=menuPrincipal();
        switch(c1)
        {
        case 1 :
        {
            system("cls");
            textbackground(0);
            cardreMenu();
            gotoxy(15,12);
            textcolor((rand()% 14)+1);
            terrain mape{10,40,'@',100,50,'#'};
            mape.gamesetup();
            mape.gameloop();
            textcolor(15);
            printf("\n\n\t\t\t\t");
            system("pause");
            break;
        }
        case 2 :
        {
            system("cls");
            textbackground(0);
            cardreMenu();
            system("pause");
            break;
        }
        case 3 :
        {
            sortir=1;
            assistanteVocal("C'est ainsi que le tour de notre projet se termine, Merci !!");
            break;
        }
        }
        system("cls");
    }
}


///C'est la procedure qui contient tout le jeux, le debut, le menu et la fin
void jeuAventurier()
{
    LancerJeux ();
    CurseurVisible (0);
   lancerActionSelonChoix();
   CurseurVisible (1);
    system("cls");
    gotoxy(50,25);
    system("pause");
}
/**------------------------------------------------------------------------------------------------**/

