#include "roomController.h"
#include "room.h"
#include <iostream>
using namespace std;
roomController::roomController(){
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
    mainHall = new room();
    kitchen = new room();
    garden = new room();
    bedroom = new room();
    sittingRoom = new room();
    attic = new room();

    //setting the exits
    mainHall->setExits(attic, NULL, garden, sittingRoom);
    kitchen->setExits(NULL, garden, NULL, attic);
    garden->setExits(kitchen, NULL, NULL, mainHall);
    bedroom->setExits(NULL, sittingRoom, attic, NULL);
    sittingRoom->setExits(bedroom, NULL, mainHall, NULL);
    attic->setExits(NULL, mainHall, kitchen, bedroom);

    // storing the stacked widget page number
    mainHall->setPageNumber(2);
    kitchen->setPageNumber(6);
    garden->setPageNumber(7);
    bedroom->setPageNumber(4);
    sittingRoom->setPageNumber(3);
    attic->setPageNumber(5);

    // creating the room puzzles and adding them to the rooms
    MathPuzzle* atticPuzzle = new MathPuzzle("what is my name", "Kelly", "Jenna", "Kelly", "Portia");
    attic->setPuzzle(atticPuzzle);
    MathPuzzle* bedroomPuzzle = new MathPuzzle("Beep?", "Boop", "Boop", "Buup", "Biip");
    bedroom->setPuzzle(bedroomPuzzle);
    MathPuzzle* kitchenPuzzle = new MathPuzzle("placeholder?", "yeah", "yes", "no", "yeah");
    kitchen->setPuzzle(kitchenPuzzle);
    RiddlePuzzle* sittingRoomPuzzle = new RiddlePuzzle("RIDDLE ME THIS", "an", "an", "bn", "cn");
    sittingRoom->setPuzzle(sittingRoomPuzzle);
    RiddlePuzzle* gardenPuzzle =  new RiddlePuzzle("RIDDLE ME THIS", "an", "an", "bn", "cn");
    garden->setPuzzle(gardenPuzzle);

    // creating the room Characters and adding them to the rooms
    Character* theWife = new Character("the wife", "wife clue", true, "lipstick");
    bedroom->setCharacter(theWife);
    Character* theDog = new Character("the dog", "dog clue", false, "bone");
    sittingRoom->setCharacter(theDog);
    Character* theGardener = new Character("the gardener", "gardener clue", true, "shovel");
    garden->setCharacter(theGardener);
    Character* theChef = new Character("the chef", "chef clue", true, "cheese");
    kitchen->setCharacter(theChef);
    Character* ellasGhost = new Character("Ella's ghost", "ella's ghost clue", true, "potion");
    attic->setCharacter(ellasGhost);

    // create room items and add them to the room
    Item lipstick("lipstick");
    bedroom->setRoomItem(lipstick);
    Item bone("bone");
    sittingRoom->setRoomItem(bone);
    Item cheese("cheese");
    kitchen->setRoomItem(cheese);
    Item shovel("shovel");
    garden->setRoomItem(shovel);
    Item potion("potion");
    attic->setRoomItem(potion);


    currentRoom = mainHall;
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
