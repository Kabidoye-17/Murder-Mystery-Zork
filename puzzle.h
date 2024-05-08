#ifndef PUZZLE_H
#define PUZZLE_H
#include <string>
using namespace std;
class puzzle

{
protected:
    string answers[3];
    string question;
    string correctAnswer;
public:
    string getQuestion();
    string getCorrectAnswer();
    string* getAnswers();
    void setQuestion(string q);
    void setCorrectAnswer(string a);
    void setAnswers(string a, string b, string c);
    virtual string displayGameOverview() = 0;

};

#endif // PUZZLE_H
