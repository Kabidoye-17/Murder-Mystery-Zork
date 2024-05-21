#ifndef ROOMCONTROLLER_H
#define ROOMCONTROLLER_H
#include "phone.h"
#include "room.h"
#include "object.h"
#include"mathpuzzle.h"
#include "character.h"
#include "player.h"
#include "gameInformation.h"
#include "inventory.h"

using namespace std;
using namespace gameInformation;

class roomController{
private:
    room* currentRoom;
    player* currentPlayer;
    phone* guessPhone;

public:
    roomController();
    room* getCurrentRoom();
    player* getPlayer();
    phone* getGuessPhone();
    void setGuessPhone(phone* p);
    void setCurrentRoom(room *r);
    int switchRoom(string *direction);
    void createRooms();
    void addToCharacterInventory(Item i);
    void removeFromCharacterInventory(Item i);


};

#endif // ROOMCONTROLLER_H
