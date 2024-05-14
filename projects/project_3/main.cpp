#include <iostream>
#include <array>

using namespace std;

// Const's for the board size
const int ROWS = 3;
const int COLS = 3;

// Function prototypes
void printBoard(const array<array<char, COLS>, ROWS> &board);
bool isCellEmpty(const array<array<char, COLS>, ROWS> &board, int row, int col);
bool isBoardFull(const array<array<char, COLS>, ROWS>& board);

int main(){
    // Initialize the board
     array<array<char, COLS>, ROWS> board = {{{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}}};

    // Print the board
    printBoard(board);

    // Player 1
    int row,col;
    bool player1 = true;

    while (!isBoardFull(board)){
        // Get the row and column from the user
        if (player1){
            cout << "Player 1, enter your move (row and column): ";
        } else {
            cout << "Player 2, enter your move (row and column): ";
        }
        cin >> row >> col;

        // Check if the cell is empty
        if (isCellEmpty(board, row, col)){
            if (player1){
                board[row][col] = 'X';
            } else {
                board[row][col] = 'O';
            }
            printBoard(board);
            player1 = !player1;
        } else {
            cout << "Cell is not empty. Try again." << endl;
        }
    }

    cout << "The board is full. Game over." << endl;
    
    return 0;


}

// Print the board
void printBoard(const array<array<char, COLS>, ROWS> &board){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            cout << board[i][j] << " ";
            // Printing a vertical line
            if (j < COLS - 1){
                cout << "| ";
            }
        }
        cout << endl;
        // Printing a horizontal line
        if (i < ROWS - 1){
            cout << "---------\n" << endl;
        }
    }
}

// Check if a cell is empty 
bool isCellEmpty(const array<array<char, COLS>, ROWS> &board, int row, int col){
    return board[row][col] == ' ';
}

// Check if the board is full
bool isBoardFull(const array<array<char, COLS>, ROWS>& board){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            if (board[i][j] == ' '){
                return false;
            }
        }
    }
    return true;
}