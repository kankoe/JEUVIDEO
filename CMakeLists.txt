cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 17)
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(untitled main.cpp
        aventurier.h
        aventurier.cpp
        terrain.h
        terrain.cpp
        card.h
        card.cpp
        afficheur.h
        afficheur.cpp
        personnage.h
        personnage.cpp
        salles.cpp
        salles.h
        salles.h
        position.cpp
        equipements.h
        equipements.cpp
        epees.h
        epees.cpp
        armures.cpp
        monstres.h
        monstres.cpp
        monstresaveugles.cpp
        monstresvoyants.cpp
        testarmures.cpp
        testaventuriers.cpp
        TestEpee.cpp
        TestPosition.cpp
        TestSalles.cpp
        interface.cpp
        interface.h
)

target_link_libraries(untitled ${CURSES_LIBRARIES})