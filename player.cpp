#include "player.h"
#include <iostream>
player::~player(){
    cout << "player memory deallocated"<< endl;
}

Inventory player::getInventory(){
    return this->playerInventory;
}

Item player::getItem(Item im){
    // traverses through array until it finds the item it needs, otherwise it returns an empty item
    for (int i = 0; i < 5; i++){
        if (playerInventory.inven[i].getName() == im.getName()){
            return playerInventory.inven[i];
        }
    }
    Item temp;
    return temp;
}

Item* player::getInventoryList(){
    // first: traverse through array to find out how many items you actually have
    int counter = 0;
    for (int i = 0; i < 5; i++){
        if (playerInventory.inven[i].getName() != ""){
            counter ++;
        }
    }
    // second: create an array of the number of actual items in inventory

    Item currentInventory[counter];
    int cI = 0;

    // third: traverse through the array a second time to add the actual item to your current inventory list

    for (int i = 0; i < 5; i++){
        if (playerInventory.inven[i].getName() != ""){
            playerInventory.inven[i] = currentInventory[cI];
            cI++;
        }
    }
    // return

    return currentInventory;
}
