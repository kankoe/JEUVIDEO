/*
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "epees.h"

TEST_CASE("Epee - Tests") {
    SUBCASE("Initialisation") {
        epee epee{10,false,20,15};
        REQUIRE_EQ(epee.getSolidite(), 10);
        REQUIRE_FALSE(epee.estDetruit());
    }
d
    SUBCASE("Utilisation") {
        SUBCASE("Utilisation normale") {
            epee epee{10,false,20,15};
            */
/*epee.utiliser();
            REQUIRE_EQ(epee.getSolidite(), 2);
            REQUIRE_FALSE(epee.estDetruit());*//*

        }

        SUBCASE("Utilisation jusqu'à destruction") {
            Epee epee{1};
            epee.utiliser();
            REQUIRE(epee.estDetruit());
        }
    }

    SUBCASE("Récupération de solidité") {
        Epee epee{5};
        epee.utiliser();
        epee.recupererSolidite(3);
        REQUIRE_EQ(epee.getSolidite(), 7);
        REQUIRE_FALSE(epee.estDetruit());
    }
}
*/
