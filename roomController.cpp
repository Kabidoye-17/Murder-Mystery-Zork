#include "roomController.h"
#include "room.h"
#include <iostream>
player::player(){

}
roomController::roomController(){
    this->currentPlayer = new player();
    createRooms();
}

room* roomController::getCurrentRoom(){
    return this->currentRoom;
}

void roomController::setCurrentRoom(room *r){
    currentRoom = r;
}

void roomController::createRooms(){

    // instantiating the rooms
    room *mainHall, *kitchen, *garden, *bedroom, *sittingRoom, *attic;
    mainHall = new room(2);
    kitchen = new room(6);
    garden = new room(7);
    bedroom = new room(4);
    sittingRoom = new room(3);
    attic = new room(5);

    //setting the exits
    mainHall->setExits(attic, NULL, garden, sittingRoom);
    kitchen->setExits(NULL, garden, NULL, attic);
    garden->setExits(kitchen, NULL, NULL, mainHall);
    bedroom->setExits(NULL, sittingRoom, attic, NULL);
    sittingRoom->setExits(bedroom, NULL, mainHall, NULL);
    attic->setExits(NULL, mainHall, kitchen, bedroom);


    // creating the room puzzles and adding them to the rooms
    // on the heap cause it'll go out of scope and become null (learnt the hard way)
    MathPuzzle* atticPuzzle = new MathPuzzle("what is my name", "Kelly", "Jenna", "Kelly", "Portia");
    attic->setPuzzle(atticPuzzle);
    MathPuzzle* bedroomPuzzle = new MathPuzzle("Beep?", "Boop", "Boop", "Buup", "Biip");
    bedroom->setPuzzle(bedroomPuzzle);
    MathPuzzle* kitchenPuzzle = new MathPuzzle("placeholder?", "yeah", "yes", "no", "yeah");
    kitchen->setPuzzle(kitchenPuzzle);
    MathPuzzle* sittingRoomPuzzle = new MathPuzzle("RIDDLE ME THIS", "an", "an", "bn", "cn");
    sittingRoom->setPuzzle(sittingRoomPuzzle);
    MathPuzzle* gardenPuzzle = new MathPuzzle("RIDDLE ME THIS", "an", "an", "bn", "cn");
    garden->setPuzzle(gardenPuzzle);

    // creating the room Characters and adding them to the rooms
    Character* theWife = new Character("the wife", "wife clue", true, "lighter");
    bedroom->setCharacter(theWife);
    Character* theDog = new Character("the dog", "dog clue", false, "bone");
    sittingRoom->setCharacter(theDog);
    Character* theGardener = new Character("the gardener", "gardener clue", true, "shovel");
    garden->setCharacter(theGardener);
    Character* theChef = new Character("the chef", "chef clue", true, "cheese");
    kitchen->setCharacter(theChef);
    Character* ellasGhost = new Character("Ella's ghost", "ella's ghost clue", true, "soul");
    attic->setCharacter(ellasGhost);

    // create room items and add them to the room
    Item lighter("lighter");
    bedroom->setRoomItem(lighter);

    Item bone("bone");
    sittingRoom->setRoomItem(bone);

    Item cheese("cheese");
    kitchen->setRoomItem(cheese);

    Item shovel("shovel");
    garden->setRoomItem(shovel);

    Item soul("soul");
    attic->setRoomItem(soul);



    setCurrentRoom(mainHall);
}

int roomController::switchRoom(string *direction){
    // Get the map of exits
    map<string, room*> exits = currentRoom->getExits();

    // Get the pointer to the room corresponding to the direction
    room* newRoomPtr = exits[*direction];
    if (newRoomPtr != nullptr) {
        currentRoom = newRoomPtr;
    }
    // Return the page index of the current room
    return currentRoom->getPageNumber();
}

void roomController::addToCharacterInventory(Item i){
    cout << 1 << endl;
    (this->currentPlayer->getInventory())+= i;

}
void roomController::removeFromCharacterInventory(Item i){
    (this->currentPlayer->getInventory()) -= i;
}

player* roomController::getPlayer(){
    return this->currentPlayer;
}
