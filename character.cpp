    #include "character.h"
#include <iostream>

Character::Character(string name, string clue, bool innocence, string want) : name(name), clue(clue), innocence(innocence), want(want){
    this->interact = false;
}

Character::Character(const Character& other) :
    name(other.name), clue(other.clue), want(other.want), innocence(other.innocence) {}

string Character::getDialogue(){
    if (this->interact == false){
        return displayObjectDescription();
    }else{
        return this->clue;
    }

}


bool Character::getInnocence(){
    return this->innocence;
}

string Character::displayObjectDescription(){
    string chardisplay =  this->getName() + " will not speak until you give them their: " + this->getWant();
    return chardisplay;
}

string Character::getWant(){
    return this->want;
}
string Character::getName(){
    return this->name;
}

