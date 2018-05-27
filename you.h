#ifndef YOU_H
#define YOU_H
#include"Obj.h"
#include"player.h"


class you:public player
{
public:
    you(){}
    ~you(){}
    void move(int direction, int steps=1);
};

#endif // YOU_H
