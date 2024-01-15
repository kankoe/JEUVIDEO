/*
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "position.h"

TEST_CASE("Test de la classe Position") {
    SUBCASE("Test du constructeur par défaut") {
        position pos;
        REQUIRE_EQ(pos.abcisse(), 0);
        REQUIRE_EQ(pos.ordonner(), 0);
        REQUIRE_EQ(pos.walkable(), true);
        REQUIRE_EQ(pos.caractere(), '\0');
    }

    SUBCASE("Test du constructeur avec des valeurs spécifiées") {
        position pos(5, 10);
        REQUIRE_EQ(pos.abcisse(), 5);
        REQUIRE_EQ(pos.ordonner(), 10);
        REQUIRE_EQ(pos.walkable(), true);
        REQUIRE_EQ(pos.caractere(), '\0');
    }

    SUBCASE("Test des setters") {
        position pos;
        pos.setabcisse(3);
        pos.setordonner(7);
        pos.setwalkable(false);
        pos.setcaractere('X');

        REQUIRE_EQ(pos.abcisse(), 3);
        REQUIRE_EQ(pos.ordonner(), 7);
        REQUIRE_EQ(pos.walkable(), false);
        REQUIRE_EQ(pos.caractere(), 'X');
    }
}
*/
