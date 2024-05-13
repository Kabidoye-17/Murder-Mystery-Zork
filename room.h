#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>
#include <map>
#include "puzzle.h"
#include "object.h"
#include "character.h"
#include "item.h"
using namespace std;
class room {
    private:
        int pageNumber;
        map<string, room*> exits;
        Character* roomCharacter;
        puzzle* roomPuzzle;
        Item roomItem;
    public:
        void setExits(room *north, room *south, room *east, room *west);
        void setPageNumber(int pn);
        int getPageNumber() const;
        void setRoomItem(Item i);
        Item getRoomItem();
        map<string, room*> getExits();
        void setPuzzle(puzzle* obj);
        puzzle* getPuzzle();
        void setCharacter(Character* c);
        Character* getCharacter();
        room();
};

#endif // ROOM_H
