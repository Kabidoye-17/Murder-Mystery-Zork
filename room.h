#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>
#include <map>

using namespace std;
class room {
    private:
        int pageNumber;
        map<string, room*> exits;
    public:
        void setExits(room *north, room *south, room *east, room *west);
        void setPageNumber(int pn);
        int getPageNumber();
        map<string, room*> getExits();
};

#endif // ROOM_H
