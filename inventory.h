#ifndef INVENTORY_H
#define INVENTORY_H
#include "item.h"


class Inventory
{
private:
    Item inven[5];

public:
    void operator+=(Item im);
    void operator -=(Item i);
    friend class player;


};

#endif // INVENTORY_H
