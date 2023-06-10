#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student {
	string name;
	string grade;
	int marks;
};

string GetGrade(int marks) {
	if (marks >= 90)
		return "A";
	else if (marks >= 80)
		return "B";
	else if (marks >= 70)
		return "C";
	else if (marks >= 60)
		return "D";
	else if (marks >= 50)
		return "E";
	else
		return "F";
}

void PromptStudentData(Student& student) {
	cout << "Enter Name: ";
	getline(cin, student.name);

	cout << "Enter Marks: ";
	cin >> student.marks;
	cin.ignore();

	student.grade = GetGrade(student.marks);
}

void StoreStudentData(const Student& student) {
	ofstream file("students.txt", ios::app);
	if (file.is_open()) {
		file << "Name: " << student.name << endl;
		file << "Marks: " << student.marks << endl;
		file << "Grade: " << student.grade << endl;
		file << endl;
		file.close();
	}
	else {
		cout << "Unable to open the file." << endl;
	}
}

void UpdateGrades(int increment) {
	ifstream inputFile("students.txt");
	ofstream outputFile("updated_students.txt");
	if (inputFile.is_open() && outputFile.is_open()) {
		string line;
		while (getline(inputFile, line)) {
			if (line.find("Marks: ") != string::npos) {
				int marks = stoi(line.substr(7));
				marks += increment;
				outputFile << "Marks: " << marks << endl;
				outputFile << "Grade: " << GetGrade(marks) << endl;
			}
			else {
				outputFile << line << endl;
			}
		}
		inputFile.close();
		outputFile.close();



		remove("students.txt");
		rename("updated_students.txt", "students.txt");
	}
	else {
		cout << "Unable to open the file." << endl;
	}
}

void DisplayStudentData() {
	ifstream file("students.txt");
	if (file.is_open()) {
		string line;
		while (getline(file, line)) {
			cout << line << endl;
		}
		file.close();
	}
	else {
		cout << "Unable to open the file." << endl;
	}
}

int main() {
	char choice;
	do {
		Student student;

		PromptStudentData(student);
		StoreStudentData(student);

		cout << "Do you want to enter another student? (Y/N): ";
		cin >> choice;
		cin.ignore();

		cout << endl;
	} while (choice == 'Y' || choice == 'y');

	int increment;
	cout << "Enter the number to increment the grades by (0 to 50): ";
	cin >> increment;

	UpdateGrades(increment);

	cout << "Updated Student Data:" << endl;
	DisplayStudentData();
	system("pause");
	return 0;
}
