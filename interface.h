#ifndef TP_INTERFACE
#define TP_INTERFACE

#include <cstdio>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cmath>
#include <windows.h>
/**------------------------------------------------------------------------------------------------**/
/**                                     declaration des structures                                 **/
/**------------------------------------------------------------------------------------------------**/

enum
{
    BLACK,          /// noir
    BLUE,           /// bleu
    GREEN,          /// vert
    CYAN,           /// cyan
    RED,            /// rouge
    MAGENTA,        /// magenta
    BROWN,          /// marron
    LIGHTGRAY,      /// gris clair
    DARKGRAY,       /// gris fonc�
    LIGHTBLUE,      /// bleu clair
    LIGHTGREEN,     /// vert clair
    LIGHTCYAN,      /// cyan clair
    LIGHTRED,       /// rouge clair
    LIGHTMAGENTA,   /// magenta clair
    YELLOW,         /// jaune
    WHITE           /// blanc
} ;

/**------------------------------------------------------------------------------------------------**/
/**                                    d�claration des fonctions                                   **/
/**------------------------------------------------------------------------------------------------**/
void textbackground(int color);
void textcolor(int color);
void gotoxy(int x, int y);
void CurseurVisible(BOOL booleen);
void assistanteVocal(char* chaine);
void ecranChargement();
void cardreChargement();
void cardreMenu();
void LancerJeux();
int menuPrincipal();
void lancerActionSelonChoix();
void jeuAventurier();
/**------------------------------------------------------------------------------------------------**/
#endif
