#include <iostream>
#include <vector>

template <typename T> void printGrades(const std::vector<double> &exam);

using namespace std;
using std::vector;

int main(){

    // Vector named exam 1 that holds double values
    std::vector<double> exam1;
    double examInput;

    // Prompt user to enter exam grades and store them in exam1
    cout << "Enter exam grades (enter -1 to stop): ";
    while (examInput != -1){
        cin >> examInput;
        if (examInput != -1){
            exam1.push_back(examInput);
        }
    }

    // Print exam grades
    printGrades<double>(exam1);

    return 0;
}

template <typename T> void printGrades(const std::vector<double> &exam){
    cout << "Exam grades contain: ";
    for (auto i = exam.begin(); i != exam.end(); i++){
        cout << *i << " ";
    }

    cout << endl;
}