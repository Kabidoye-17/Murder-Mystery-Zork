#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>
#include <map>
#include "puzzle.h"
#include "object.h"
#include "character.h"
#include "item.h"
#include "mathpuzzle.h"
using namespace std;

struct roomBitStructure{
    int pageNumber = 16;
};

class room {
    private:
        map<string, room*> exits;
        Character* roomCharacter;
        MathPuzzle* roomPuzzle;
        Item roomItem;
    public:
        void setExits(room *north, room *south, room *east, room *west);
        void setPageNumber(int pn);
        int getPageNumber();
        void setRoomItem(Item i);
        Item getRoomItem();
        map<string, room*> getExits();
        void setPuzzle(MathPuzzle* obj);
        MathPuzzle* getPuzzle();
        void setCharacter(Character* c);
        Character* getCharacter();
        room(int pn);
    protected:
        roomBitStructure rbs;
};

#endif // ROOM_H
