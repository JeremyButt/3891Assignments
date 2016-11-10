#include "hangman.h"
#include <iostream>
#include <string>

using namespace std;

int guessLetter(const string& word, char letter, char letters[]){
	//Get Length of the word for for loop.
	int length = word.length();
	int count = 0;
	
	//Check if guessed letter is in the word. If so, reveal letter in letters array.
	for (int i=0; i<length; i++){
		if (word.at(i) == letter){
			letters[i] = letter;
			count++;	
		}
	}
	return count;
}

bool playHangman(string word, unsigned int maxWrong){
	//To return if the game is over.
	bool win = false;
	
	//To keep track of guessed letters.
	char previousGuesses[26];
	
	// creating array of the hidden word
	int length = word.length();
	char letters[length];
	for(int i=0; i < length; i++){
		letters[i] = '*';
	}
	
	int guessIncorrect = 0;	// To track the amount of incorrect guesses
	int guessAttempts = 0;	// To track the number of guesses.
	
	cout << "You have " <<  maxWrong << " attempts to guess the word!" << endl;
	cout << "You can guess letter by letter or guess the word fully (if you think you are that smart! ;) )." << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

	//While loop repeat the guessing and checking process.
	while (guessIncorrect != maxWrong){

		// Check if the word has been guessed
		string knownword(letters);        
	        if (knownword == word){
			cout << "Hooray!! You have guessed the word correctly!!! :) The Word is " << word << endl << endl;
			win = true;
			break;
       		 }
	
		// Get the new guess.
		char letter = getNextGuess(letters, length);
		guessAttempts++;
		
		//Checks to see if the letter was previously guessed.
		bool guessBefore = 0;
		for (int j=0; j<26; j++){
			if(previousGuesses[j]==letter){
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << "The letter " << letter << " has been guessed before!" << endl;	
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
				guessBefore = 1;
				break;
			}
		}

		//Records the guessed letter.
		previousGuesses[guessAttempts] = letter;
		int rightGuesses = 1;
		// If letter wasn't guessed before, guess the letter and check if it good.
		if (guessBefore == 0){
			rightGuesses = guessLetter(word, letter, letters);
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "There are " << rightGuesses << " " << letter << "'s" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl  << endl;
		}
		
		//If the guess was check and found to be incorrect we keep track
		if (rightGuesses == 0){
			guessIncorrect++;
			cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
			cout << "OH NOOOOOO !! You Were Wrong.... :(" << endl
			<< "You Have " << (maxWrong-guessIncorrect) << " guesses remaining!!!" << endl;
			cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl << endl;
			
		}
	}
	

	
	return win;
}
