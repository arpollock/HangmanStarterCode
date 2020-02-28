//
// Created by Alex Pollock on 2020-02-27.
//

#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <fstream>
#include <cstdlib>

#include "hangman.h"

using namespace std;

// this is the constructor, it is called when an object of the hangman class is created
Hangman::Hangman(string fileName) {
    bool loadDictionarySuccess = loadDictionary(fileName);
    if (!loadDictionarySuccess) {
        cout << "Error could not load dictionary file: " << fileName << "." << endl;
    }
    guessedLetters = "";
    guessesRemaining = 10;
}

// this function reads the fileName.txt file and saves it in the dictionary map
bool Hangman::loadDictionary(string fileName) {
    ifstream words( fileName ); // this is a stream that reads the file named fileName
    if( words.fail() ){
        cout<<"Error accessing dictionary."<<endl;
        return false; // return false because the file reading failed
    }else{
        while( !words.eof() ){ // while the end of the file is not reached
            string word;
            int wordLen;
            getline(words, word);
            wordLen = word.length();
            dictionary[wordLen].push_back( word ); // add the word to the dictionary at its length grouping
        }
    }
    words.close(); // close the file stream
    return true; // return true because the file reading was successful
}

// this function starts a hangman game with the given parameters
void Hangman::startGame(int numGuesses, int wordLength) {
    // make sure the number of guesses asked for is valid
    // if not, print a message and leave guessesRemaining at 10

    while (false /* TODO */) {
        // make sure there are words of the asked length
        // hint use the count function on dictionary
        // if there are no words of the needed length print this message:
        cout << "Sorry, I don't have any words of length " << wordLength << ". Please try another word length." << endl;
        cin >> wordLength;
    }
    // get the words of that length
    int randIdx = rand() % 10 /* get the total number of words of length wordLength: hint use size() */; // get a random place (index) within all of the words of the given length
    // chose that random word and set it to the secretWord
    // to debug with a known secretWord uncomment the following line:
    // secretWord = "testword";

    
    // fill the display word with hyphens to the right length
    // hint use a for loop    
}

// this function takes a guesses letter and determines if it's in the secret word or not
// if the guessed letter is in the word then all occurrences of the letter are replaced and the function returns true
// if the guessed letter is not in the word then guessesRemaining is decremented and the function returns false
bool Hangman::processGuess(char letter) {
    // add the letter to the guessed letters string; hint use push_back
    // determine if the letter is in the secret word
        // if the letter is in the word
            // change all occurrences of the letter in the word (another for loop)
            // return true because the letter was in the word
        // else the letter is not in the word
            // decrement the number of guesses
            // return false because the letter was not in the word
    return false; // remove this line once completed
}

// this helper function determines if the guesses letter is in the secret word
bool Hangman::isInSecretWord(char letter) {
    // iterate (aka for loop) through each character of the secret word
        // return true if the letter in question is found
    // return false if never returned true
    return false; // remove this line once completed
}

// this function returns true if the game is won and false otherwise
bool Hangman::isWon() {
    // if there are no hyphens left in the display word the secret word is guessed
    // iterate through each letter of the display word
        // if a hyphen is false return false
    // return true if false was never returned above
    return false; // remove this line once completed
}

// this function returns true if the game is lost and false otherwise
bool Hangman::isLost() {
    // the game is lost if the user has run out of guesses and they did not win
    return false; // remove this line once completed
}

// this function returns true if the parameter, letter, has not been guessed before
bool Hangman::isNewGuess(char letter) {
    for (char c: guessedLetters) { // iterate through all of the letters in guessedLetters
        // if the letter is found return false
    // return true if false is never returned above
    }
    return false; // remove this line once 
}

// this function plays the end of the game, displaying the secret word and congratulating the winner
void Hangman::endGame() {
    // TODO
}

// this function is called a getter, it returns the display word with the correct number of letters and only showing correctly guessed letters
string Hangman::getDisplayWord() {
    return displayWord;
}

// this function is called a getter, it returns letters that have already been guessed
string Hangman::getGuessedLetters() {
    // TODO
    return "TODO";
}

// this function is called a getter, it returns letters that have already been guessed
int Hangman::getGuessesRemaining() {
    // TODO
    return "TODO";
}