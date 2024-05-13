#ifndef RIDDLEPUZZLE_H
#define RIDDLEPUZZLE_H
#include "puzzle.h"
#include "object.h"

class RiddlePuzzle : public puzzle, public object
{
public:
    RiddlePuzzle(string q, string ca, string a, string b, string c);
    string displayGameOverview() override; // from puzzle base class
    string displayObjectDescription() override; // from object base class
};

#endif // RIDDLEPUZZLE_H
