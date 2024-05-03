#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>

// Function prototypes
std::vector<std::string> split(const std::string& str, char delimiter);
char determineGrade(double average);
int stringToInt(const std::string& str);
void processFile(const std::string& inputFileName, const std::string& outputFileName);
void writeResults(std::ofstream& outputFile, const std::vector<std::string>& names, const std::vector<std::vector<int>>& scoresList, const std::vector<double>& averages, const std::vector<char>& grades);

// Process student data from input file and write results to output file
void processFile(const std::string& inputFileName, const std::string& outputFileName) {

    // Open input and output files
    std::ifstream inputFile(inputFileName);
    std::ofstream outputFile(outputFileName);

    // Read student data from input file
    std::string line;

    // Store student data in vectors
    std::vector<std::vector<int>> scoresList;
    std::vector<std::string> names;
    std::vector<double> averages;
    std::vector<char> grades;

    // Process each student's data by reading each line from the input file
    while (getline(inputFile, line)) {

        // Split the line into tokens using ',' as the delimiter
        std::vector<std::string> tokens = split(line, ',');

        // Extract student name and scores from tokens and then calculate average score
        names.push_back(tokens[0]);
        std::vector<int> scores;

        double sum = 0;

        // Calculate sum of scores and store individual scores in a vector using stringToInt function
        for (size_t i = 1; i < tokens.size(); ++i) {
            int score = stringToInt(tokens[i]);
            scores.push_back(score);
            sum += score;
        }

        // Calculate average score and store it in averages vector
        scoresList.push_back(scores);
        double average = sum / scores.size();
        averages.push_back(average);
        grades.push_back(determineGrade(average));
    }
    
    // Write results to output file
    writeResults(outputFile, names, scoresList, averages, grades);
    inputFile.close();
    outputFile.close();
}

// Split a string into tokens using a delimiter
// Delimiter is a character that separates tokens in the string
std::vector<std::string> split(const std::string& str, char delimiter) {

    // Vector to store tokens
    std::vector<std::string> result;

    // Use stringstream to split the string into tokens
    // Stringstream is used to read from the string as if it were a stream
    std::stringstream ss(str);
    std::string token;

    // While loop to extract tokens from the string
    while (getline(ss, token, delimiter)) {
        result.push_back(token);
    }
    return result;
}

// Function to determine the letter grade based on the average score
char determineGrade(double average) {

    // Could use ternary operator here
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int stringToInt(const std::string& str) {
    int result = 0;

    for (char c : str) {
        // Check if the character is a digit before conversion
        if (isdigit(c)) {

            // Convert character to integer and add to result
            int digit = c - '0';  
            result = result * 10 + digit;  
        }
    }
    return result;
}

// Function to print the number of 
void writeResults(std::ofstream& outputFile, const std::vector<std::string>& names, const std::vector<std::vector<int>>& scoresList, const std::vector<double>& averages, const std::vector<char>& grades) {
    // Student details
    outputFile << "Student Name  Average Score  Letter Grade\n";

    // size_t is used for array indexing and loop iteration
    for (size_t i = 0; i < names.size(); ++i) {
        outputFile << std::left << std::setw(20) << names[i] 
                   << std::right << std::setw(10) << std::fixed << std::setprecision(2) << averages[i]
                   << "    " << grades[i] << "\n";
    }
    
    // Exam averages by creating a vector of zeros with the same size as the number of exams
    std::vector<double> examAverages(scoresList[0].size(), 0);
    // Iterator to loop through the scoresList vector
    for (const auto& scores : scoresList) {
        for (size_t i = 0; i < scores.size(); ++i) {
            examAverages[i] += scores[i];
        }
    }

    // Calculate average score for each exam
    for (double& avg : examAverages) {
        avg /= scoresList.size();
    }
    outputFile << "\nAverage Score for Each Exam:\n";
    for (size_t i = 0; i < examAverages.size(); ++i) {
        outputFile << "Exam " << i + 1 << ": " << std::fixed << std::setprecision(2) << examAverages[i] << "\n";
    }

    // Calculate and output grade distribution
    std::vector<int> gradeCounts(5, 0); // Index 0 for 'A', 1 for 'B', ..., 4 for 'F'
    for (char grade : grades) {
        if (grade == 'A') gradeCounts[0]++;
        else if (grade == 'B') gradeCounts[1]++;
        else if (grade == 'C') gradeCounts[2]++;
        else if (grade == 'D') gradeCounts[3]++;
        else if (grade == 'F') gradeCounts[4]++;
    }

    // Output grade distribution by grabbing the count of each grade from the gradeCounts vector
    outputFile << "\nGrade Distribution:\n";
    outputFile << "A: " << gradeCounts[0] << "\n";
    outputFile << "B: " << gradeCounts[1] << "\n";
    outputFile << "C: " << gradeCounts[2] << "\n";
    outputFile << "D: " << gradeCounts[3] << "\n";
    outputFile << "F: " << gradeCounts[4] << "\n";


    // Class average calculation
    double totalAverage = 0.0;
    for (double avg : averages) {
        totalAverage += avg;
    }
    totalAverage /= averages.size();
    outputFile << "\nClass Average: " << std::fixed << std::setprecision(2) << totalAverage << "\n";

    // Calculating students above and below class average
    int aboveAverage = 0;
    int belowAverage = 0;

    // Another range based for loop to count the number of students above and below the class average
    for (double avg : averages){
        if (avg > totalAverage) {
            aboveAverage++;
        } else {
            belowAverage++;
        }
    }

    outputFile << "Number of students above class average: " << aboveAverage << "\n";
    outputFile << "Number of students below class average: " << belowAverage << "\n";

}

#endif // STUDENT_H