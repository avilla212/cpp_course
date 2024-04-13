#include "exam.h"
#include <iostream>
#include <cctype>
#include <string>

// PROBLEM 1
int validate_input(){ 
  int age;
  
  do {
    std::cout << "Enter your age: ";
    std::cin >> age;
  } while (age < 0 || age > 100);

  return age;
}

// PROBLEM 2
double multiplier(double num1, double num2){
  
  return num1 * num2;
  
}

// PROBLEM 3
double max(double a, double b) {
    return (a > b) ? a : b;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

char max(char a, char b) {
    return (a > b) ? a : b;
}

// PROBLEM 4
int compareStrings(const std::string& str1, const std::string& str2){
  // Static cast since min func returns an int
  int length = std::min(str1.length(),str2.length());

  for (int i = 0; i < length; i++){
    char char1 = std::tolower(str1[i]);
    char char2 = std::tolower(str2[i]);
    if (char1 < char2) return -1;
    else if (char1 > char2) return 1;
  }
  if (str1.size() < str2.size()) return -1;
  else if (str1.size() > str2.size()) return 1;
  else return 0;
}

// PROBLEM 5
bool isPalindrome(const std::string& str) {
    // Woooooo two pointer approach
    int left = 0;                           
    int right = str.length() - 1;           

    while (left < right) {
        if (str[left] != str[right]) {
            return false;                   
        }
        left++;                             
        right--;                            
    }
    return true;                            
}

// PROBLEM 6
void sumAnalysis(const int* arr, int size, int& sum, double& average){
  sum = 0;
  for (int i = 0; i < size; i++){
    sum += arr[i];
  }
  average = static_cast<double>(sum) / size;
}

// PROBLEM 7
void printVector(const double* vector, int size){
    std::cout << "Elements in the vector: [";
    for (int i = 0; i < size; i++){
      std::cout << vector[i];
      // Conditional to remove trailing comma
      if (i < size - 1){
        std::cout << ", ";
      }
    }
  std::cout << "]";
}

// Problem 8
void addVectors(const double* v1, const double* v2,int size, double* result){
  for (int i = 0; i < size; i++){
    result[i] = v1[i] + v2[i];
  }
}

// Problem 9
void swap(double* arr, int index1, int index2, int size){
  double temp = arr[index1];
  arr[index1] = arr[index2];
  arr[index2] = temp;
}
