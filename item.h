#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item
{
private:
    string name;
public:
    Item(string n);
    string getName();
    bool operator==(Item other);
    Item();
};

#endif // ITEM_H
