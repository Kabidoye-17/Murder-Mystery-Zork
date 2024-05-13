#include "mathpuzzle.h"

MathPuzzle::MathPuzzle(string q, string ca, string a, string b, string c){
    this->question = q;
    this->correctAnswer = ca;
    this->answers[0] = a;
    this->answers[1] = b;
    this->answers[2] = c;
    this->interact = true;
}
string MathPuzzle::displayGameOverview() {
    return "Solve this math question to unlock a clue";
}

string MathPuzzle::displayObjectDescription(){
    return "Maths game object";
}
