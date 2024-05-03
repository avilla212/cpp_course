#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>

void processStudents(const std::string& inputFileName, const std::string& outputFileName);
std::vector<std::string> split(const std::string& str, char delimiter);
char determineGrade(double average);
int stringToInt(const std::string& str);

void processStudents(const std::string& inputFileName, const std::string& outputFileName) {
    std::ifstream inputFile(inputFileName);
    std::ofstream outputFile(outputFileName);

    std::string line;
    std::vector<std::vector<int>> allScores;
    std::vector<std::string> names;
    std::vector<double> averages;
    std::vector<char> grades;

    // Reading and processing each student
    while (getline(inputFile, line)) {
        std::vector<std::string> tokens = split(line, ',');
        names.push_back(tokens[0]);
        std::vector<int> scores;
        double sum = 0;
        for (size_t i = 1; i < tokens.size(); ++i) {
            int score = stringToInt(tokens[i]);
            scores.push_back(score);
            sum += score;
        }
        allScores.push_back(scores);
        double average = sum / scores.size();
        averages.push_back(average);
        grades.push_back(determineGrade(average));
    }

    // Calculating exam averages
    std::vector<double> examAverages(allScores[0].size(), 0);
    for (const auto& scores : allScores) {
        for (size_t i = 0; i < scores.size(); ++i) {
            examAverages[i] += scores[i];
        }
    }
    for (double& avg : examAverages) {
        avg /= allScores.size();
    }

    // Calculating overall average and grade distribution
    double totalAverage = 0;
    std::vector<int> gradeCounts(5, 0); // A, B, C, D, F
    int studentsAboveAverage = 0;
    int studentsBelowAverage = 0;
    for (double avg : averages) {
        totalAverage += avg;
    }
    totalAverage /= averages.size();
    for (double avg : averages) {
        if (avg >= totalAverage) studentsAboveAverage++;
        else studentsBelowAverage++;
        int index = (determineGrade(avg) - 'A') % 5; // Safe modulo for char to int
        gradeCounts[index]++;
    }

    // Writing to output file
    outputFile << "Student Name  Average Score  Letter Grade\n";
    for (size_t i = 0; i < names.size(); ++i) {
        outputFile << std::left << std::setw(20) << names[i] 
                   << std::right << std::setw(10) << std::fixed << std::setprecision(2) << averages[i]
                   << "   " << grades[i] << "\n";
    }

    outputFile << "\nAverage Score for Each Exam:\n";
    for (size_t i = 0; i < examAverages.size(); ++i) {
        outputFile << "Exam " << i + 1 << ": " << std::fixed << std::setprecision(2) << examAverages[i] << "\n";
    }

    outputFile << "\nGrade Distribution:\n";
    outputFile << "A: " << gradeCounts[0] << "\n";
    outputFile << "B: " << gradeCounts[1] << "\n";
    outputFile << "C: " << gradeCounts[2] << "\n";
    outputFile << "D: " << gradeCounts[3] << "\n";
    outputFile << "F: " << gradeCounts[4] << "\n";

    outputFile << "\nClass Average: " << std::fixed << std::setprecision(2) << totalAverage << "\n";
    outputFile << "Students Above Average: " << studentsAboveAverage << "\n";
    outputFile << "Students Below Average: " << studentsBelowAverage << "\n";

    inputFile.close();
    outputFile.close();
}


std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> result;
    std::stringstream ss(str);
    std::string token;
    while (getline(ss, token, delimiter)) {
        result.push_back(token);
    }
    return result;
}

char determineGrade(double average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}

int stringToInt(const std::string& str) {
    int result = 0;
    for (char c : str) {
        if (c >= '0' && c <= '9') {
            result = result * 10 + (c - '0');
        }
    }
    return result;
}


#endif