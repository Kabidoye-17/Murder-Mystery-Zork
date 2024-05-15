#include "player.h"
#include <iostream>
player::~player(){
    cout << "player memory deallocated"<< endl;
}

Inventory<Item> player::getInventory(){
    return this->playerInventory;
}

Item* player::getItem(string n) {
    // Traverses through array until it finds the item it needs, otherwise it returns nullptr
    for (int i = 0; i < 5; i++) {
        if (playerInventory.inven[i].getName().compare(n)) {
            cout << "Item found" << endl;
            return &playerInventory.inven[i]; // Return address of the found item
        }
        cout << playerInventory.inven[i].getName() << endl;
    }
    cout << "Item not found" << endl;
    return nullptr; // Return nullptr if item not found
}
