#ifndef EXAM_H
#define EXAM_H

#include <string>

// PROBLEM 1
int validate_input();

// PROBLEM 2
double multiplier(double num1, double num2 = 2.0); // Default param just incase user does not pass in a value

// PROBLEM 3
double max(double a, double b);
int max(int a, int b);
char max(char a, char b);

// PROBLEM 4
int compareStrings(const std::string& string1, const std::string& string2);

// PROBLEM 5
bool isPalindrome(const std::string& string);

// PROBLEM 6
void sumAnalysis(const int* arr, int size, int& sum, double& average);

// PROBLEM 7
void printVector(const double* vector, int size);

// PROBLEM 8
void addVectors(const double* v1, const double* v2,int size, double* result);

//PROBLEM 9
void swap(double* arr, int index1, int index2, int size);

#endif