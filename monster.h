#ifndef MONSTER_H
#define MONSTER_H
#include "Obj.h"
#include"player.h"

class Monster :public player
{
public:
    Monster(){}
    ~Monster(){}
     void move(int direction, int steps=1);
};

#endif // MONSTER_H
