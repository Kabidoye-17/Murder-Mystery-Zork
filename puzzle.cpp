#include "puzzle.h"

string puzzle::getQuestion(){
    return this->question;
}

string puzzle::getCorrectAnswer(){
    return this->correctAnswer;
}

string* puzzle::getAnswers(){
    return this->answers;
}

void puzzle::setAnswers(string a, string b, string c){
    answers[0] = a;
    answers[1] = b;
    answers[2] = c;

}
void puzzle::setCorrectAnswer(string a){
    this->correctAnswer = a;
}

void puzzle::setQuestion(string q){
    this->question = q;
}

