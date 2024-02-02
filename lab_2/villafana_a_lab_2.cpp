#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void guessGame(); // function prototype
bool isCorrect(int, int); // function prototype

int main() {
    guessGame();
    return 0; // indicate successful termination
} // end main

// guessGame generates numbers between 1 and 90
// and checks user's guess
void guessGame() {
    int answer; // randomly generated number
    int guess; // user's guess
    char response; // 'y' or 'n' response to continue game

    cout << "Mr. Villafana's Number Game\n"; // Game title

    // loop until user types 'n' to quit game
    do {
        // generate random number between 1 and 90
        // 1 is shift, 90 is scaling factor
        answer = 1 + rand() % 90;

        // prompt for guess
        cout << "I have a number between 1 and 90.\n"
             << "Can you guess my number? (Type 0 to exit)\n"
             << "Please type your first guess." << endl << "? ";
        cin >> guess;

        // Exit game if guess is 0
        if (guess == 0) break;

        // loop until correct number
        while (!isCorrect(guess, answer)) {
            cin >> guess;
            // Exit game if guess is 0
            if (guess == 0) return;
        }

        // prompt for another game
        cout << "\nExcellent! You guessed the number!\n"
             << "Would you like to play again (y or n)? ";
        cin >> response;

        cout << endl;
    } while (response == 'y');
} // end function guessGame

// isCorrect returns true if g equals a
// if g does not equal a, displays hint with how far off the guess is
bool isCorrect(int g, int a) {
    // guess is correct
    if (g == a)
        return true;

    int difference = abs(a - g); // Calculate the difference

    if (g < a)
        cout << "Too low, you are " << difference << " off. Try again.\n? ";
    else
        cout << "Too high, you are " << difference << " off. Try again.\n? ";
    
    return false;
} // end function isCorrect
