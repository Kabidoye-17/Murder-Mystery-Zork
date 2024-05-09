#include "character.h"
Character::Character(string name, string clue, bool innocence){
    this->clue = clue;
    this->name = name;
    this->innocence = innocence;
    this->interact = false;
}
string Character::getDialogue(){
    if (this->interact == false){
        return displayObjectDescription();
    }else{
        return this->clue;
    }
}
string Character::displayObjectDescription(){
    string chardisplay = "You must correctly answer this puzzle before you interact with " + this->getName();
    return chardisplay;
}
string Character::getName(){
    return this->name;
}
