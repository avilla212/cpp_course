/*
Write a program in pseudocode that calculates the average of any number of positive numbers. Here are the requirements:
The program runs as long as the number entered by the user is not 0.
When a 0 is entered, the program terminates and displays the average of all the numbers entered.
When each number is entered, you must validate it to make sure the number not negative. We only allow averaging positive numbers.

*/

#include <iostream>
using namespace std;

int main()
{

    int number;
    int sum = 0;
    int count = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number != 0)
    {
        if (number < 0)
        {
            cout << "Invalid number. Please enter a positive number: ";
            cin >> number;
        }
        else
        {
            sum += number;
            count++;
            cout << "Enter a number: ";
            cin >> number;
        }
    }

    if (count > 0)
    {
        cout << "The average of the numbers is: " << (double)sum / count << endl;
    }
    else
    {
        cout << "No numbers were entered." << endl;
    }

    return 0;
}