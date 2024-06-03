#ifndef INVENTORY_H
#define INVENTORY_H
#include "item.h"
using namespace std;
template <typename T>
class Inventory
{
private:
    T inven[5];

public:
    void operator+=(T im);
    void operator -=(T i);
    friend class player;
    ~Inventory();
};

#endif // INVENTORY_H
