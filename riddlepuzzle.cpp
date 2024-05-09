#include "riddlepuzzle.h"

RiddlePuzzle::RiddlePuzzle(string q, string ca, string a, string b, string c){
    this->question = q;
    this->correctAnswer = ca;
    this->answers[0] = a;
    this->answers[1] = b;
    this->answers[2] = c;
    this->interact = true;
}
string RiddlePuzzle::displayGameOverview() {
    return "Solve this riddle to unlock a clue";
}

string RiddlePuzzle::displayObjectDescription(){
    return "Riddle game object";
}
