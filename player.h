#ifndef PLAYER_H
#define PLAYER_H
#include "inventory.h"
#include "character.h"
#include "item.h"

using namespace std;
class player
{
private:
    Inventory<Item> playerInventory;

public:
    player();
    Item* getItem(string n);
    Inventory<Item> getInventory();
    ~player();
};

#endif // PLAYER_H
