#include "player.h"
#include <iostream>

player::player(){

}

player::~player(){
    cout << "player memory deallocated"<< endl;
}

Inventory<Item>& player::getInventory() {
    return this->playerInventory;
}

Item* player::getItem(string n) {
    // Traverses through array until it finds the item it needs, otherwise it returns nullptr
    Item* invenAddressPtr = this->playerInventory.inven;
    for (int i = 0; i < 5; i++) {
        if ((invenAddressPtr + i)->getName() == n) {
            cout << "Item found" << (invenAddressPtr + i)->getName() <<endl;
            return (invenAddressPtr + i); // Return address of the found item
        }
        cout << (invenAddressPtr + i)->getName() << endl;
    }
    cout << "Item not found" << endl;
    return nullptr; // Return nullptr if item not found
}
