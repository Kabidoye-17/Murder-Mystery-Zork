#ifndef MATHPUZZLE_H
#define MATHPUZZLE_H

#include <string>
#include "puzzle.h"
#include "object.h"
using namespace std;


class MathPuzzle : public puzzle, public object
{
public:
    MathPuzzle(string q, string ca, string a, string b, string c);
    string displayGameOverview() override; // from puzzle base class
    string displayObjectDescription() override; // from object base class
};

#endif // MATHPUZZLE_H
