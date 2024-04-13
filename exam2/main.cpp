#include "exam.h"
#include <iostream>


int main() {
  
  std::cout << "Problem 1: Validating input" << std::endl;
  int age = validate_input();
  std::cout << "Your age is: " << age << std::endl;
  std::cout << std::endl;
  
  std::cout << "Problem 2: Multiplier function" << std::endl;
  std::cout << multiplier(2,5) << std::endl;
  std::cout << multiplier(6.0) << std::endl;
  std::cout << multiplier(5.2,2.3) << std::endl;
  std::cout << std::endl;

  std::cout << "Problem 3: Find the max" << std::endl;
  std::cout << max(5.4, 6.2) << std::endl; 
  std::cout << max(-5, -4) << std::endl; 
  std::cout << max('a', 'A') << std::endl; 
  std::cout << std::endl;

  std::cout << "Problem 4: Compare strings" << std::endl;
  std::cout << compareStrings("apple", "BANANA") << std::endl; 
  std::cout << compareStrings("water", "WATER") << std::endl; 
  std::cout << compareStrings("watermelon", "WATER") << std::endl; 
  std::cout << compareStrings("pine", "PINEAPPLE") << std::endl; 
  std::cout << compareStrings("CS1A", "cs1a") << std::endl; 
  std::cout << std::endl;

  std::cout << "Problem 5: Palindrome Checker" << std::endl;
  std::cout << isPalindrome("mom") << std::endl;
  std::cout << isPalindrome("abcabc") << std::endl;
  std::cout << isPalindrome("abcdcba") << std::endl;
  std::cout << std::endl;

  std::cout << "Problem 6: Number Analysis" << std::endl;
  
  int numbers[] {1,2,3,4,5,6,7,8,9,10};
  int sum1 {0};
  double average {0.0};
  sumAnalysis(numbers, 10, sum1, average);

  std::cout << "Sum: " << sum1 << std::endl;
  std::cout << "Average: " << average << std::endl;
  std::cout << std::endl;

  std::cout << "Problem 7: Print Vector" << std::endl;
  double vector[] {1.5, 2.6, 3.7};
  printVector(vector,3);
  std::cout << std::endl << std::endl;
  
  std::cout << "Problem: 8: Add Vectors" << std::endl;
  double v1[] = {1.0, 2.0, 3.0};
  double v2[] = {3.0, 2.0, 1.0};
  double sum[3] {};

  printVector(sum,3);
  std::cout << std::endl;

  addVectors(v1, v2, 3, sum);
  printVector(sum,3);
  std::cout << std::endl << std::endl;

  std::cout << "Problem 9: Swap" << std::endl;
  double arr[5] {1.0,2.0,3.0,4.0,5.0};
  swap(arr, 2, 4, 5);
  printVector(arr,5);

  return 0;
}