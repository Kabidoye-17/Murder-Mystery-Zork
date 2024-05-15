#include "item.h"
#include <iostream>

Item::Item(std::string n) : name(n) {}

string Item::getName() {
    return name;
}

bool Item::operator==(Item other) {
    return (name == other.name);
}
Item::~Item(){

}




