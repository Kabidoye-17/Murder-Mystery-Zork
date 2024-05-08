#include "roomController.h"
#include "room.h"
#include <iostream>
using namespace std;
roomController::roomController(){
    createRooms();
}

room roomController::getCurrentRoom(){
    return this->currentRoom;
}

void roomController::setCurrentRoom(room *r){
    currentRoom = *r;
}

void roomController::createRooms(){
    room *mainHall, *kitchen, *garden, *bedroom, *sittingRoom, *attic;
    mainHall = new room();
    kitchen = new room();
    garden = new room();
    bedroom = new room();
    sittingRoom = new room();
    attic = new room();

    mainHall->setExits(attic, NULL, garden, sittingRoom);
    kitchen->setExits(NULL, garden, NULL, attic);
    garden->setExits(kitchen, NULL, NULL, mainHall);
    bedroom->setExits(NULL, sittingRoom, attic, NULL);
    sittingRoom->setExits(bedroom, NULL, mainHall, NULL);
    attic->setExits(NULL, mainHall, kitchen, bedroom);

    mainHall->setPageNumber(2);
    kitchen->setPageNumber(6);
    garden->setPageNumber(7);
    bedroom->setPageNumber(4);
    sittingRoom->setPageNumber(3);
    attic->setPageNumber(5);

    MathPuzzle* atticPuzzle = new MathPuzzle("what is my name?", "Kelly", "Jenna", "Kelly", "Portia");
    attic->setPuzzle(atticPuzzle);


    currentRoom = *mainHall;
}

int roomController::switchRoom(string *direction){
    // Get the map of exits
    map<string, room*> exits = currentRoom.getExits();

    // Get the pointer to the room corresponding to the direction
    room* newRoomPtr = exits[*direction];
    if (newRoomPtr != nullptr){
        room newRoom = *newRoomPtr;
        currentRoom = newRoom;
    }
    // Return the page index of the current room
    return currentRoom.getPageNumber();
}
