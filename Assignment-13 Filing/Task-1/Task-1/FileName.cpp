#include <iOStream>
#include <string>
#include <fstream>
using namespace std;

struct input {
	int id,number;
	string fullName, email, department;
}obj;

void student() {
	
	char choice;
	do {
		//Details input
		cout << "Enter the details of the student" << endl
			<< "=====================================" << endl;
		cout << "Enter Student ID" << endl;
		cin >> obj.id;
		cout << "Enter Fullname of the student" << endl;
		cin.ignore();
		getline(cin, obj.fullName);
		cout << "Enter the email of the student " << endl;
		cin >> obj.email;
		cout << "Enter the Deparment of the student" << endl;
		cin >> obj.department;
		cout << "Enter the phone number of the student" << endl;
		cin >> obj.number;

		//storing data in file
		ofstream studentData;
		studentData.open("Student Data.txt");
		studentData <<"====================================="<<endl
			<<"Details of the student" << endl
			<<"====================================="<<endl
			<< "ID: " << obj.id<<endl
			<< "Full name: " << obj.fullName<<endl
			<< "E-mail: " << obj.email<<endl
			<< "Department: " << obj.department<<endl
			<< "Phone number: " << obj.number<<endl
			<< "====================================="<<endl;
		studentData.close();

		//Printing the details on console
		cout << "=====================================" << endl
			<< "Details of the student" << endl
			<< "=====================================" << endl
			<< "ID: " << obj.id << endl
			<< "Full name: " << obj.fullName << endl
			<< "E-mail: " << obj.email << endl
			<< "Department: " << obj.department << endl
			<< "Phone number: " << obj.number << endl
			<< "=====================================" << endl;

		cout << "Do you want to enter a new record? " << endl
			<<"Press Y for yes and N for no"<<endl;


		cin >> choice;
	} while (choice == 'y' || choice == 'Y');


}

int main() {
	
	student();

	return 0;
}