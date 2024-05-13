#include "gameInformation.h"

int guessesLeft = 3; // Definition and initialization of guessesLeft

namespace gameInformation {
int checkGuessesLeft() {
    if (guessesLeft > 0) {
        return guessesLeft;
    } else {
        return -1;
    }
}

void decreaseGuesses() {
    guessesLeft--;
}
}
