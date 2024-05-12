#ifndef CHARACTER_H
#define CHARACTER_H

#include "object.h"
#include <string>
using namespace std;

class Character : public object{
private:
    string clue;
    string name;
    string want;
    bool innocence;
public:
    Character(string name, string clue, bool innocence, string want);
    string getDialogue();
    string getWant();
    bool getInnocence();
    string getName();
    string displayObjectDescription() override;

};

#endif // CHARACTER_H
