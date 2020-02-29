#include <iostream>
#include <cstdlib>

#include "hangman.h"

using namespace std;

int main() {
    srand(time(0));
    // create an instance of the Hangman class and use the text file dictionary.txt
    Hangman game("dictionary.txt");
    // ask the user the parameters for the game
    cout << "How many guesses would you like? ";
    int numGuesses = 0;
    cin >> numGuesses;
    cout << endl;
    // TODO: ask the user for length of the word they would like
    // put it in an int variable called numLetters
    // then uncomment the next line:
    // game.startGame(numGuesses, numLetters);
    while(!game.isLost() && !game.isWon()) { // while the game is not over
        // show the user what letters they've guessed
        // show the user the display word
        // show the user how many guesses they have remaining
        // prompt the user for a letter to guess & store it in a char variable
        // if the letter has not been guessed before call processGuess
            // call processGuess and store the result in a bool variable
            // use the bool variable from above and notify the user accordingly
        // else the letter has been guessed before -> tell them and go through the process again
    }
    // end the game by calling endGame on the game object
    return 0;
}
