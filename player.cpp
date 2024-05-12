#include "player.h"
#include <iostream>


player::player(){
    this->inventory = new vector<Item>();
}

void player::operator+=(Item im){
    cout << 2<< endl;
    this->inventory->push_back(im);
    cout << 3 << endl;
}
void player::operator -=(Item i){
    auto it = std::find(inventory->begin(), inventory->end(), i);
    if (it != inventory->end()) {
        inventory->erase(it);
    }
}
