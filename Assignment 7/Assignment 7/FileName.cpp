#include <iOStream>
using namespace std;

int main() {
	char choice, option, teachingAssistant, sportsCode;
	string studentName[5],sportsName[5],searchName, sportsFound, changeSport, delStudent;
	int i=0;
	int studentAge;
	bool flag1 = false;
	
	do{
		
		cout << "Press 1 to register a student " << endl
			<< "Press 2 to view a specific student's record" << endl
			<< "Press 3 to view all students records" << endl
			<< "Press 4 to change the sport of a student" << endl
			<< "Press 5 to delete the record of a student" << endl
			<< "Press 6 to search for a student" << endl;
		cin >> choice;

		if (choice == '1') {
			cout << "----------------------- Register for a sport -----------------------" << endl;
			
				cout << "Enter your age" << endl;
				cin >> studentAge;
				
				cout << "Are you working as a Teaching assistant?" << endl
					<< "Press 'y' for yes and press 'n' for no" << endl;

				cin >> teachingAssistant;
				if (teachingAssistant == 'n' && studentAge >= 18) {
					cout << "Age requirement met :)" << endl;
					cout << "Enter the name of the student" << endl;
					cin >> studentName[i];
					cout << "Enter the sports you want to register for" << endl
						<< "Press 'c' for cricket" << endl << "Press 'f' for football"<<endl
						<< "Press 'h' for hockey" << endl;
					cin >> sportsCode;
					if (sportsCode == 'c') {
						sportsName[i] = "Crickcet";
					}
					else if (sportsCode == 'f') {
						sportsName[i] = "Football";
					}
					else if (sportsCode == 'h') {
						sportsName[i] = "Hockey";
					}
					else {
						cout << "Invalid choice!!" << endl;
					}
					i = i + 1;
				}
				else {
					cout << "You are not eligible for sports registration :(" << endl;
				}
		}

		else if (choice == '2') {
			cout << "----------------------- Student's Record -----------------------" << endl;
			cout << "Enter the name of the student " << endl;
			cin >> searchName;

			for (int j = 0; j < 5; j++) {
				if (searchName == studentName[j]) {
					flag1 = true;
					cout << "Student Name : " << searchName << endl;
					cout << "Sports : " << sportsName[j] << endl;
					break;
				}
			}
			if (flag1 == false) {
				cout << "No record found :(" << endl;

			}
		}

		else if (choice == '3') {
			cout << "----------------------- Student's Record -----------------------" << endl;
			for (int j = 0; j < 5; j++) {
				cout << "Student name : " << studentName[j]<<"            Sports : "<<sportsName[j]<<endl;
			}
		}

		else if (choice == '4') {
			bool flag2 = false;
			cout << "----------------------- Change Student's Sport -----------------------" << endl;
			cout << "Enter the student name whose sport you want to change" << endl;
			cin >> changeSport;
			for (int j = 0; j < 5; j++) {
				if (changeSport == studentName[j]) {
					cout << changeSport << " found! Enter the new sport of this student " << endl
						<< "Press 'c' for cricket" << endl << "Press 'f' for football" << endl
						<< "Press 'h' for hockey" << endl;
					cin >> sportsCode;
					if (sportsCode == 'c') {
						sportsName[j] = "Cricket";
					}
					else if (sportsCode == 'f') {
						sportsName[j] = "Football";
					}
					else if (sportsCode == 'h') {
						sportsName[j] = "Hockey";
					}
					else {
						cout << "Invalid choice!!" << endl;
					}
					flag2 = true;

				}
				break;
			}
			if (flag2 == true) {
				cout << "Sport updated succesfully :) " << endl;
			}
			else if(flag2 == false) {
				cout << "Student not found :/" << endl;
			}
		}

		else if (choice == '5') {
			cout << "Enter the name of the student you want to delete" << endl;
			cin >> delStudent;
			for (int j = 0; j < 5; j++) {
				if (delStudent == studentName[j]) {

				}
			}
		}


		cout << "Press 'y' if you want to continue or any other key to cancel" << endl;
		cin >> option;
	} while (option == 'y');

	return 0;
}