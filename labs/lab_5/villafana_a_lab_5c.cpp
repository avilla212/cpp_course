//Lab 5c - vectors

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function Prototypes
void userInput(vector<int>& numbers);
void sortVector(vector<int>& numbers);

// Const reference since we are not modifying the vector
void printVector(const vector<int>& numbers);   

int main()
{
    vector<int> numbers;
    userInput(numbers);
    sortVector(numbers);
    printVector(numbers);
}

void userInput(vector<int>& numbers)
{
    int input;

    cout << "Type numbers between 10 and 100: ";
    cin >> input;

    while (input != -1)
    {
        if (input >= 10 && input <= 100)
        {  
            // If the vector is empty, add the number
            if (numbers.size() == 0)
            {
                numbers.push_back(input);
            }
            else
            {
                // Check if the number is already in the vector
                bool found = false; // boolean to check if the number is already in the vector

                // Loop through the vector to check if the number is already in the vector
                for (int i = 0; i < numbers.size(); i++)
                {
                    if (numbers[i] == input)
                    {
                        found = true;
                        break;
                    }
                }
                // If not found in the vector, add the number
                if (!found)
                {
                    numbers.push_back(input);
                }
            }

            cout << "Type numbers between 10 and 100: ";
            cin >> input;
            
        } else 
        // Invalid number
        {
            cout << "Invalid number, try again: ";
            cin >> input;
        }
        

    }

}

// Function to sort the vector
void sortVector(vector<int>& numbers)
{
    // Pointers to the beginning and end of the vector
    sort(numbers.begin(),numbers.end());
}

// Function to print the vector
void printVector(const vector<int>& numbers)
{
    cout << "\nThe numbers in the vector are: ";
    // Loop through the vector and print the numbers
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

