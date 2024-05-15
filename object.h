#ifndef OBJECT_H
#define OBJECT_H

#include <string>
using namespace std;
class object{
protected:
    bool interact;

public:
    void setInteract(bool b);
    bool getInteract();
    virtual string displayObjectDescription() = 0;
};

#endif // OBJECT_H
