#include "room.h"
#include <iostream>


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

void room::setPuzzle(MathPuzzle &obj){
    this->roomPuzzle = &obj;
}

MathPuzzle* room::getPuzzle() {
    return this->roomPuzzle;
}

Character* room::getCharacter(){
    return this->roomCharacter;
}

void room::setCharacter(Character &c){
    this->roomCharacter = &c;
}

void room::setRoomItem(Item i){
    this->roomItem = i;
}

Item room::getRoomItem(){
    return this->roomItem;
}

room::~room(){
     // Check if roomPuzzle is not a null pointer before deleting
    if (roomPuzzle != nullptr) {
        delete roomPuzzle;
        roomPuzzle = nullptr;
    }

    // Check if roomCharacter is not a null pointer before deleting
    if (roomCharacter != nullptr) {
        delete roomCharacter;
        roomCharacter = nullptr;

    // Delete each room pointer in the exits map after checking for null pointer
    for (auto& exit : exits) {
        if (exit.second != nullptr) {
            delete exit.second;
            exit.second = nullptr;
        }
    }
    }}
