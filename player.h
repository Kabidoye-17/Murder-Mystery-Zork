#ifndef PLAYER_H
#define PLAYER_H
#include "inventory.h"
#include "character.h"
#include "item.h"

using namespace std;
class player
{
private:
    Inventory playerInventory;

public:
    player();
    Item getItem(Item i);
    Item* getInventoryList();
    Inventory getInventory();
    ~player();
};

#endif // PLAYER_H
