#include "phone.h"
#include <iostream>

phone::phone(Character const& c1, Character const& c2, Character const& c3, Character const& c4, Character const& c5) {
    contacts[0] = c1;
    contacts[1] = c2;
    contacts[2] = c3;
    contacts[3] = c4;
    contacts[4] = c5;
    this->interact = 0;
}
bool phone::getInnocenceStatus(string charName){
    Character* c= getCharacter(charName);
    return c->getInnocence();

}
Character* phone::getCharacter(string charName) {
    Character* ptr = contacts; // pointer to the start of the array
    for (int i = 0; i < 5; i++) {
        if ((ptr + i)->getName() == charName) {
            cout << "character gotten " << (ptr + i)->getName() << endl;
            return (ptr + i);
        }
    }
    return nullptr;
}

string phone::getMurderer() {
    Character* ptr = contacts; // pointer to the start of the array
    for (int i = 0; i < 5; i++) {
        if ((ptr + i)->getInnocence() == 0) {
            return (ptr + i)->getName();
        }
    }
    return "couldn't find it lol";
}

string phone::displayObjectDescription(){
    return "Guess the murderer here";
}

