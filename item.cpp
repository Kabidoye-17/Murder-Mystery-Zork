#include "item.h"

Item::Item(){

}
Item::Item(string n){
    this->name = n;
}
string Item::getName(){
    return this->name;
}

bool Item::operator==(Item other) {
    return (name == other.name);
}
