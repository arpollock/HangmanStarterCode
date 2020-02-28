//
// Created by Alex Pollock on 2020-02-27.
//

#ifndef HANGMAN_HANGMAN_H
#define HANGMAN_HANGMAN_H

#include <string>
#include <vector>
#include <map>

using namespace std;

class Hangman {

public: // public data members and functions are accessible by anyone

    // this is the constructor, it is called when an object of the hangman class is created
    Hangman(string fileName);

    // this function starts a hangman game with the given parameters
    void startGame(int numGuesses, int wordLength);

    // this function takes a guesses letter and determines if it's in the secret word or not
    // if the guessed letter is in the word then all occurrences of the letter are replaced and the function returns true
    // if the guessed letter is not in the word then guessesRemaining is decremented and the function returns false
    bool processGuess(char letter);

    // this function returns true if the game is won and false otherwise
    bool isWon();

    // this function returns true if the game is lost and false otherwise
    bool isLost();

    // this function returns true if the parameter, letter, if the letter has not been guessed before
    bool isNewGuess(char letter);

    // this function plays the end of the game, displaying the secret word and congratulating the winner
    void endGame();

    // this function is called a getter, it returns the display word with the correct number of letters and only showing correctly guessed letters
    string getDisplayWord();

    // this function is called a getter, it returns letters that have already been guessed
    string getGuessedLetters();

    // this function is called a getter, it returns number of guesses remaining
    int getGuessesRemaining();

private: // private data members and functions are only accessible from within the hangman class

    // this helper function reads the fileName.txt file and saves it in the dictionary map
    bool loadDictionary(string fileName);

    // this helper function determines if the guesses letter is in the secret word
    bool isInSecretWord(char letter);

    // this variable holds the number of guesses the player has remaining
    int guessesRemaining;

    // this holds the dictionary, grouping the words by their length
    // a map is a data structure that maps keys to values
    // in this case the key is the length of the word, and the value is the set of words of that length
    map<int, vector<string>> dictionary;

    // this variable holds the letters the user has guessed so far
    string guessedLetters;

    // the word the player is trying to guess
    string secretWord;

    // this variable displays '-' characters for letters that have not been guessed,
    // and displays the actual characters for letters that have
    string displayWord;
};


#endif //HANGMAN_HANGMAN_H
