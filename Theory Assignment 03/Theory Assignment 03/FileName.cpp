#include <iOStream>
#include <fstream>
#include <string>
using namespace std;

int i = 0;
string loginID, loginPassword, bookSearch;
char menuChoice, loopChoice;
ifstream bookin;
ofstream bookout;

//Book
struct book {
	int bookID;
	string bookTitle, authorName;

}bookObj[100];

//Student
struct student {
	int studentID, studentAge, bookISBN, duration;
	string studentName, bookTitle;
}studentObj[100];

void newbookRecord() {
	cout << "============================================" << endl
		<< "          Enter a new book record" << endl
		<< "============================================" << endl;

	//taking book record
	cout << "Enter the Book ID" << endl;
	cin >> bookObj[i].bookID;
	cout << "Enter the title of the book" << endl;
	cin.ignore();
	getline(cin, bookObj[i].bookTitle);
	cout << "Enter the Name of the author" << endl;
	getline(cin, bookObj[i].authorName);

	//storing book record in file


	bookin.open("book record.txt");
	bookout.open("book record.txt", ios::app);
	bookout << endl << "============================================" << endl
		<< "Book ID: " << bookObj[i].bookID << endl
		<< "Title: " << bookObj[i].bookTitle << endl
		<< "Author: " << bookObj[i].authorName << endl;

	cout << "Book record has been succesfully added to file" << endl;
	bookin.close();
	i = i + 1;
}

void bookrecordSearch() {
	cout << "============================================" << endl
		<< "          Search for a Book record" << endl
		<< "============================================" << endl;
	cout << "Enter the ID of the book you want to search for" << endl;
	cin.ignore();
	getline(cin, bookSearch);

	bookin.open("book record.txt");
	string line, data;
	int lineNo = 0;
	bool found = false;

	//searching for the book by id
	while (getline(bookin, line)) {
		if (line.find(bookSearch) != string::npos) {
			cout << "book found!" << endl;
			for (int j = 0; j < 2; j++) {
				getline(bookin, data);
				cout << data << endl;
			}
			found = true;
		}
		lineNo++;
	}
	if (found = false) {
		cout << "Can't find the book you searched for :(" << endl;
	}
	bookin.close();
}

void allbookRecord() {
	cout << "============================================" << endl
		<< "              All Books record";

	string line;
	bookin.open("book record.txt");
	while (getline(bookin, line)) {
		cout << line << endl;
	}
	bookin.close();
}

void studentData() {
	cout << "============================================" << endl
		<< "           Issue book to a student" << endl
		<< "============================================" << endl;

	//taking students data
	cout << "Enter Student ID" << endl;
	cin >> studentObj[i].studentID;
	cout << "Enter the Student Name" << endl;
	cin.ignore();
	getline(cin,studentObj[i].studentName);
	cout << "Enter the age of the student" << endl;
	cin >> studentObj[i].studentAge;
	if (studentObj[i].studentAge >= 16) {
		cout << "Enter the title of the book" << endl;
		cin.ignore();
		getline(cin,studentObj[i].bookTitle);
		cout << "Enter the ISBN of the book" << endl;
		cin >> studentObj[i].bookISBN;
		cout << "Enter the duartion period of renting " << endl
			<< "(you can rent a book for 30 days at most)" << endl;
		cin >> studentObj[i].duration;
		if (studentObj[i].duration >= 30) {
			cout << "Error: you can only rent a book for 30 days at most!" << endl;
		}

		//storing student data in file
		ifstream studentin;
		ofstream studentout;

		studentin.open("Student data.txt");
		studentout.open("Student data.txt", ios::app);

		studentout << endl << "============================================" << endl
			<< "Student ID: " << studentObj[i].studentID
			<< endl << "Student Name: " << studentObj[i].studentName
			<< endl << "age of the student: " << studentObj[i].studentAge
			<< endl << "title of the book: " << studentObj[i].bookTitle
			<< endl << "ISBN of the book: " << studentObj[i].bookISBN
			<< endl << "duartion period of renting: " << studentObj[i].duration << endl;

		cout << "Student data stored successfully" << endl;
		i = i + 1;
	}
	else {
		cout << "You can't proceed further as your age is less than 16" << endl;
	}
}
int main() {
	

	cout << "============================================" << endl
		<< "          Welcome To The Library" << endl
		<< "============================================" << endl;
	cout << "Enter your login id" << endl;
	cin >> loginID;
	cout << "Enter your login password" << endl;
	cin >> loginPassword;

	do {
		

		if (loginID == "admin" && loginPassword == "admin123") {
			cout << "1. Enter a book record" << endl
				<< "2. Display particular book information" << endl
				<< "3. Display all books information" << endl
				<< "4. Issue a book to a student" << endl;
			cin >> menuChoice;

			if (menuChoice == '1') {
				newbookRecord();
			}

			else if (menuChoice == '2') {
				bookrecordSearch();
			}

			else if (menuChoice == '3') {
				allbookRecord();
			}

			else if (menuChoice == '4') {

				studentData();

			}
		}
		else if (loginID == "admin" && loginPassword != "admin123") {
			cout << "The password you entered is not correct" << endl;
		}
		else if (loginID != "admin" && loginPassword == "admin123") {
			cout << "The login ID you entered is not correct" << endl;
		}
		else {

			cout << "You entered wrong credentials" << endl;
		}
		cout << "Press Y if you want to continue or any other key to exit" << endl;
		cin >> loopChoice;
	} while (loopChoice == 'y' || loopChoice == 'Y');

	return 0;
}