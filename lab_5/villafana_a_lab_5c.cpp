//Lab 5c - vectors

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function Prototypes
void userInput(vector<int>& numbers);
void sortVector(vector<int>& numbers);
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
            if (numbers.size() == 0)
            {
                numbers.push_back(input);
            }
            else
            {
                bool found = false;
                for (int i = 0; i < numbers.size(); i++)
                {
                    if (numbers[i] == input)
                    {
                        found = true;
                        break;
                    }
                }
                if (!found)
                {
                    numbers.push_back(input);
                }
            }

            cout << "Type numbers between 10 and 100: ";
            cin >> input;
            
        } else 
        {
            cout << "Invalid number, try again: ";
            cin >> input;
        }
        

    }

}

void sortVector(vector<int>& numbers)
{
    sort(numbers.begin(),numbers.end());
}

void printVector(const vector<int>& numbers)
{
    cout << "\nThe numbers in the vector are: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

