#include "item.h"

Item::Item(string n) : name (n){
}
string Item::getName(){
    return this->name;
}

bool Item::operator==(Item other) {
    return (name == other.name);
}
Item::~Item(){

}
