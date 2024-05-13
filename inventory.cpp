#include "inventory.h"


void Inventory::operator+=(Item im){
    // finds the first empty spot available and assigns it to the new item
    for (int i = 0; i < 5; i++){
        if (inven[i].getName() == ""){
            inven[i] = im;
            return;
        }
    }

}
void Inventory::operator -=(Item im){
    // finds the item to remove and replaces it with an empty placeholder item
    Item temp;
    for (int i = 0; i < 5 ; i++){
        if (inven[i].getName() == im.getName()){
            inven[i] = temp;
        }
    }
}
