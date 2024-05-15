#include "gameInformation.h"

guessStatus gs;

namespace gameInformation {
int checkGuessesLeft() {
    if (gs.guesses > 0) {
        return gs.guesses;
    } else {
        return -1;
    }
}

void decreaseGuesses() {
    --gs.guesses;
}

void incrementClues(){
    gs.clues ++;
}
bool checkClues(){
    if (gs.clues < 5){
        return false;
    }else{
        return true;
    }
}

}
