#include "phone.h"
#include <iostream>

phone::phone(Character c1, Character c2, Character c3, Character c4, Character c5) {
    contacts[0] = c1;
    contacts[1] = c2;
    contacts[2] = c3;
    contacts[3] = c4;
    contacts[4] = c5;
    this->interact = 1;
}
bool phone::getInnocenceStatus(string charName){
    Character c = getCharacter(charName);
    return c.getInnocence();

}
Character phone::getCharacter(string charName ){
    for (int i = 0; i < 5; i++){
        if (contacts[i].getName().compare(charName)){
            return contacts[i];
        }
    }
    Character def;
    return def;
}

string phone::getMurderer(){
    for (int i = 0; i < 5; i++){
        if (contacts[i].getInnocence() == 0){
            return contacts[i].getName();
        }
    }
    return "couldn't find it lol";
}

string phone::displayObjectDescription(){
    return "Guess the murderer here";
}
