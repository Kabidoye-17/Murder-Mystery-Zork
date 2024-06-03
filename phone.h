#ifndef PHONE_H
#define PHONE_H
#include "object.h"
#include "character.h"
#include <string>
#include <string.h>
using namespace std;

class phone : public object
{
    Character contacts[5];
public:
    phone(Character const& c1, Character const& c2, Character const& c3, Character const& c4, Character const& c5);
    bool getInnocenceStatus(string charName);
    Character* getCharacter(string charName );
    string getMurderer();
    string displayObjectDescription() override;

};

#endif // PHONE_H
