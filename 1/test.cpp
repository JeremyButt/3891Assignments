#include <iostream>
#include <string>
#include "hangman.h"

using namespace std;


int main(int argc, char *argv[]){

        unsigned int length;
	string word;

        cout << "Type a word." << endl;
        cin >> word;
	
	cout << string(150, '\n');

        playHangman(word, 8);

        return 0;

}



char getNextGuess(const char letters[], unsigned int length){

        char guess;

        for (int i=0; i<length; i++){
		cout << letters[i];
	}

        cout << " Pick a letter" << endl;
        cin >> guess;

        return guess;

}
