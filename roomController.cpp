#include "roomController.h"
#include "room.h"
#include "player.h"
#include <iostream>

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
    gs.clues = 0;

    // create the player
    player* mainPlayer = new player();
    currentPlayer = mainPlayer;
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
    MathPuzzle* atticPuzzle = new MathPuzzle("What is the result of 5 × (3 + 2)?", "15", "10", "15", "25");
    MathPuzzle& atticPuzzleRef = *atticPuzzle;
    attic->setPuzzle(atticPuzzleRef);

    MathPuzzle* bedroomPuzzle = new MathPuzzle("If 3/4 of a pizza is divided equally among 6 friends, how much does each friend get?", "1/4", "1/8", "1/2", "1/4");
    MathPuzzle& bedroomPuzzleRef = *bedroomPuzzle;
    bedroom->setPuzzle(bedroomPuzzleRef);

    MathPuzzle* kitchenPuzzle = new MathPuzzle("Solve for 2x+5 = 17?", "6", "6", "8", "12");
    MathPuzzle& kitchenPuzzleRef = *kitchenPuzzle;
    kitchen->setPuzzle(kitchenPuzzleRef);

    MathPuzzle* sittingRoomPuzzle = new MathPuzzle("What is the area of a rectangle with length 8 units and width 5 units?", "40", "13", "30", "40");
    MathPuzzle& sittingRoomPuzzleRef = *sittingRoomPuzzle;
    sittingRoom->setPuzzle(sittingRoomPuzzleRef);

    MathPuzzle* gardenPuzzle = new MathPuzzle("If f(x)=2x^2−3x+1, what is f(3)?", "7", "7", "10", "13");
    MathPuzzle& gardenPuzzleRef = *gardenPuzzle;
    garden->setPuzzle(gardenPuzzleRef);

    // creating the room Characters and adding them to the rooms
    Character* theWife = new Character("the wife", "Our dog seemed uneasy that night, pacing around as if sensing danger", true, "lighter");
    Character& wifeRef = *theWife;
    bedroom->setCharacter(wifeRef);

    Character* theDog = new Character("the dog", "Woof.. Saw something bad... Woof...", false, "bone");
    Character& dogRef = *theDog;
    sittingRoom->setCharacter(dogRef);

    Character* theGardener = new Character("the gardener", "Spotted the dog digging in the garden late. Strange behavior.", true, "shovel");
    Character& gardenerRef = *theGardener;
    garden->setCharacter(gardenerRef);

    Character* theChef = new Character("the chef", "Noticed a missing knife from my kitchen that night. Unsettling.", true, "cheese");
    Character& chefRef = *theChef;
    kitchen->setCharacter(chefRef);

    Character* ellasGhost = new Character("Ella's ghost", "Felt a chilling presence near the sitting room before... well, you know.", true, "soul");
    Character& ghostRef = *ellasGhost;
    attic->setCharacter(ghostRef);

    phone* guessingPhone = new phone(wifeRef, gardenerRef, chefRef, ghostRef, dogRef);
    setGuessPhone(guessingPhone);

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

    // create and set the guessing phone




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
void roomController::removeFromCharacterInventory(Item &i){
    (this->currentPlayer->getInventory()) -= i;
}

player* roomController::getPlayer(){
    return this->currentPlayer;
}
phone* roomController::getGuessPhone(){
    return this->guessPhone;
}
void roomController::setGuessPhone(phone* p){
    this->guessPhone = p;
}
roomController::~roomController(){
    delete this->currentRoom;
    delete this->guessPhone;
    delete this->currentPlayer;
}
