#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

struct Student {
    std::string name;
    int grade;
    float marks;
};

void updateGrades(const std::string& filename, int increment) {
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cout << "Unable to open file: " << filename << std::endl;
        return;
    }

    std::ofstream outFile("updated_" + filename);
    if (!outFile) {
        std::cout << "Unable to create output file: updated_" << filename << std::endl;
        inFile.close();
        return;
    }

    std::string line;
    while (std::getline(inFile, line)) {
        Student student;
        std::stringstream ss(line);
        std::getline(ss, student.name, ',');
        ss >> student.grade;
        ss.ignore();
        ss >> student.marks;

        // Increment the grade
        student.grade += increment;

        // Write the updated student to the output file
        outFile << student.name << "," << student.grade << "," << student.marks << std::endl;
    }

    inFile.close();
    outFile.close();

    std::cout << "Grades updated successfully." << std::endl;
}

int main() {
    std::string filename;
    std::cout << "Enter the filename: ";
    std::cin >> filename;

    int increment;
    std::cout << "Enter the increment value (0 to 50): ";
    std::cin >> increment;

    if (increment < 0 || increment > 50) {
        std::cout << "Invalid increment value. Please enter a value between 0 and 50." << std::endl;
        return 0;
    }

    updateGrades(filename, increment);

    return 0;
}
