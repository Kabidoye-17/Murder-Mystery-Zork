#ifndef GAMEINFORMATION_H
#define GAMEINFORMATION_H

extern int guessesLeft; // Declaration of guessesLeft as a global variable

namespace gameInformation {
int checkGuessesLeft();
void decreaseGuesses();
}

#endif // GAMEINFORMATION_H
