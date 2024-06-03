#ifndef GAMEINFORMATION_H
#define GAMEINFORMATION_H

union guessStatus{
     int clues;
     int guesses;
};
// creates a
extern guessStatus gs;

namespace gameInformation {
int checkGuessesLeft();
void decreaseGuesses();
void incrementClues();
bool checkClues();
}

#endif // GAMEINFORMATION_H
