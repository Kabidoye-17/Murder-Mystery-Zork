#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>
#include <map>
#include "puzzle.h"
#include "object.h"
using namespace std;
class room {
    private:
        int pageNumber;
        map<string, room*> exits;
        object* roomCharacter;
        puzzle* roomPuzzle;
    public:
        void setExits(room *north, room *south, room *east, room *west);
        void setPageNumber(int pn);
        int getPageNumber() const;
        map<string, room*> getExits();
        void setPuzzle(puzzle* obj);
        puzzle* getPuzzle();
};

#endif // ROOM_H
