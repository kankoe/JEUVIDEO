//
// Created by agbek on 20/12/2023.
//

#ifndef UNTITLED_POSITION_H
#define UNTITLED_POSITION_H


class position {
public:
    position();
    position(int x,int y);
    position(int x,int y,char c);
    int abcisse() const;
    int ordonner() const;
    void setabcisse(int x);
    void setordonner(int y);
    bool walkable() const;
    void setwalkable(bool walkable);
    char caractere() const;
    void setcaractere(char caratere);
private:
    int d_x;
    int d_y;
    bool d_walkable;
    char d_ch;
};


#endif //UNTITLED_POSITION_H
