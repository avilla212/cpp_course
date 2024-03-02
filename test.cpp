#include <iostream>
using namespace std;

// Function declarations
int StartGame();
bool PlayAgain();

int main() {
    bool keepPlaying = true;
    while (keepPlaying) {
        int largestNumber = StartGame();
        if (largestNumber >= 0) {
            cout << "The largest number entered was: " << largestNumber << endl;
        }
        keepPlaying = PlayAgain();
    }
    cout << "Thank you for playing!" << endl;
    return 0;
}

// Function to start the game and return the largest number
int StartGame() {
    int maxNumber = -1;
    int number;
    while (true) {
        cout << "Enter a nonnegative number (or a negative number to finish): ";
        cin >> number;
        if (number < 0) {
            break;
        }
        if (number > maxNumber) {
            maxNumber = number;
        }
    }
    return maxNumber;
}

// Function to ask the user if they want to play another game
bool PlayAgain() {
    int playAgain;
    cout << "Do you want to play another game? Enter 1 to play again or 0 to exit: ";
    cin >> playAgain;
    return playAgain == 1;
}

