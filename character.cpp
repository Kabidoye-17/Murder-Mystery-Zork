#include "character.h"
#include <iostream>

Character::Character(string name, string clue, bool innocence, string want){
    this->clue = clue;
    this->name = name;
    this->innocence = innocence;
    this->interact = false;
    this->hasItem = false;
    this->want = want;
}
string Character::getDialogue(){
    cout <<"a" << endl;
    if (this->interact == false){
        cout <<"b" << endl;
        return displayObjectDescription();
    }else{
        cout <<"c" << endl;
        return this->clue;
    }

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

void Character::setHasItem(bool b){
    this->hasItem = b;
}
bool Character::getHasItem(){
    return this->hasItem;
}
