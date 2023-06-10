#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

void StoreStringToFile(const string& text) {
	ofstream file("input.txt");
	if (file.is_open()) {
		file << text;
		file.close();
	}
	else {
		cout << "Unable to open the file." << endl;
	}
}

void ConvertToLowercase(ifstream& file) {
	ofstream outputFile("output.txt");
	if (outputFile.is_open()) {
		string line;
		while (getline(file, line)) {
			for (char& c : line) {
				if (islower(c)) {
					c = toupper(c);
				}
			}
			outputFile << line << endl;
		}
		outputFile.close();
	}
	else {
		cout << "Unable to open the output file." << endl;
	}
}

void DisplayOutput() {
	ifstream file("output.txt");
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
	string input;
	cout << "Enter a string: ";
	getline(cin, input);

	StoreStringToFile(input);

	ifstream inputFile("input.txt");
	if (inputFile.is_open()) {
		ConvertToLowercase(inputFile);
		inputFile.close();
	}
	else {
		cout << "Unable to open the input file." << endl;
		return 1;
	}

	cout << "Resulting text in uppercase: " << endl;
	DisplayOutput();
	system("pause");
	return 0;
}
