#include "player.h"


player::player(){
}

void player::operator+=(Item im){
    this->inventory.push_back(im);
}
void player::operator -=(Item i){
    auto it = std::find(inventory.begin(), inventory.end(), i);
    if (it != inventory.end()) {
        inventory.erase(it);
    }
}
