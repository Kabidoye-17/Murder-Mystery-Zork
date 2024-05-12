#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include <algorithm>
#include "character.h"
#include "item.h"
using namespace std;
class player
{
private:
    vector<Item>* inventory;

public:
    void operator+=(Item im);
    void operator -=(Item i);
    player();
};

#endif // PLAYER_H
