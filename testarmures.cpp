/*
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "armures.h"

TEST_CASE("Test de la classe Armure") {
    SUBCASE("Test du constructeur") {

        armure armure(10,false,20,15);  // Crée une armure avec une solidité initiale de 10
        REQUIRE_EQ(armure.getSolidite(), 10);
        REQUIRE_EQ(armure.estDetruit(),false);
        REQUIRE_EQ(armure.posX(),20);
        REQUIRE_EQ(armure.posY(),15);
    }

    SUBCASE("Test de la méthode utiliser") {
        armure armure(10,false,20,15);
        */
/*armure.utiliser();
        REQUIRE_EQ(armure.getSolidite(), 9);
        REQUIRE_FALSE(armure.estDetruit());*//*

    }

    SUBCASE("Test de la méthode recupererSolidite") {
        armure armure(10,false,20,15);
        armure.recupererSolidite(5);
        REQUIRE_EQ(armure.getSolidite(), 15);
        REQUIRE_FALSE(armure.estDetruit());
    }

    SUBCASE("Test de la destruction de l'armure") {
        armure armure(1,false,20,15);
        armure.utiliser(1); // L'armure devrait être détruite après cela
        REQUIRE(armure.estDetruit());// Vérification que l'armure est détruite après avoir utilisé
    }
}
*/
