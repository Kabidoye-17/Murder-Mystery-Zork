#ifndef PHONE_H
#define PHONE_H
#include "object.h"
#include "character.h"
#include <string>
using namespace std;

class phone : public object
{
    Character contacts[5];
public:
    phone(Character c1, Character c2, Character c3, Character c4, Character c5);
    bool getInnocenceStatus(string charName);
    Character getCharacter(string charName );
    string displayObjectDescription() override;
};

#endif // PHONE_H
