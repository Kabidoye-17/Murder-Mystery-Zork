#include "room.h"

room::room(int pn){
    this->rbs.pageNumber = pn;
}

void room::setExits(room *north, room *south, room *east, room *west){
    this->exits["North"] = north;
    this->exits["South"] = south;
    this->exits["East"] = east;
    this->exits["West"] = west;
}

int room::getPageNumber(){
    return this->rbs.pageNumber;
}

map<string, room *> room::getExits(){
    return this->exits;
}

void room::setPuzzle(MathPuzzle* obj){
    this->roomPuzzle = obj;
}

MathPuzzle* room::getPuzzle() {
    return this->roomPuzzle;
}

Character* room::getCharacter(){
    return this->roomCharacter;
}

void room::setCharacter(Character *c){
    this->roomCharacter = c;
}

void room::setRoomItem(Item i){
    this->roomItem = i;
}

Item room::getRoomItem(){
    return this->roomItem;
}

