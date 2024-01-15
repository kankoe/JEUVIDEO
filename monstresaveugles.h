//
// Created by dell on 15/12/2023.
//

#ifndef APP_AVENTURIER_JEU_DEVELOP_MONSTRESAVEUGLES_H
#define APP_AVENTURIER_JEU_DEVELOP_MONSTRESAVEUGLES_H
#include "monstres.h"

class monstresaveugles: public monstres {

public:
    void seDeplace(int input,position &positionActuel) override;

private:
};


#endif //APP_AVENTURIER_JEU_DEVELOP_MONSTRESAVEUGLES_H
