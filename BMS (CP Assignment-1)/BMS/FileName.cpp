#include <iOStream>
#include <string>
using namespace std;

int main() {

	char mainChoice, tiketBooking, routeChoice, bookingChoice,loopChoice;
	string customerName, name[5], searchName, delName;
	int CNIC[5],age, customerCNIC;
	int i = 0;
	bool flag, flag2 = false;


	do
	{
		cout << "Press '1' to book a Ticket" << endl
			<< "Press '2' to Search a customer" << endl
			<< "Press '3' to Delete a customer" << endl;
		cin >> mainChoice;

		if (mainChoice == '1') {

			cout << "Enter your age" << endl;
			cin >> age;

			if (age >= 18) {
				do {
					cout << "The Routes we are offering are:" << endl
						<< "Route 1 --- Malir Halt to Gulshan-e-Iqbal (Ticket = 300rs)" << endl
						<< "Route 2 --- Gulshan-e-Hadeed to DHA (Ticket = 450rs)" << endl
						<< "Route 3 --- Stargate to Super Highway (Ticket = 200rs)" << endl;
					cout << endl;
					cout << "Press a to book ticket for Route 1" << endl
						<< "Press b to book ticket for Route 2" << endl
						<< "Press c to book ticket for Route 3" << endl;
					cin >> routeChoice;

					if (routeChoice == 'a') {
						cout << "Enter your name:" << endl;
						cin >> name[i];
						cout << "Enter your CNIC no:" << endl;
						cin >> CNIC[i];
						cout << "The Ticket price for Route 1 is 300rs, Do you want to book ticket?" << endl
							<< "Press 'y' for Yes and 'n' for No" << endl;
						cin >> tiketBooking;
						if (tiketBooking == 'y') {
							cout << "Ticket Booked succesfully :)" << endl;
						}
						else {
							cout << "No ticket booked " << endl;
						}
					}

					else if (routeChoice == 'b') {
						cout << "Enter your name:" << endl;
						cin >> name[i];
						cout << "Enter your CNIC no:" << endl;
						cin >> CNIC[i];
						cout << "The Ticket price for Route 2 is 450rs, Do you want to book ticket?" << endl
							<< "Press 'y' for Yes and 'n' for No" << endl;
						cin >> tiketBooking;
						if (tiketBooking == 'y') {
							cout << "Ticket Booked succesfully :)" << endl;
						}
						else {
							cout << "No ticket booked " << endl;
						}
					}

					else if (routeChoice == 'c') {
						cout << "Enter your name:" << endl;
						cin >> name[i];
						cout << "Enter your CNIC no:" << endl;
						cin >> CNIC[i];
						cout << "The Ticket price for Route 3 is 200rs, Do you want to book ticket?" << endl
							<< "Press 'y' for Yes and 'n' for No" << endl;
						cin >> tiketBooking;
						if (tiketBooking == 'y') {
							cout << "Ticket Booked succesfully :)" << endl;
						}
						else {
							cout << "No ticket booked " << endl;
						}
					}

					else {
						cout << "Invalid choice :(" << endl;
					}

					cout << "Press 'b' if you want to book anoter ticket (Press any other key to exit)" << endl;
					cin >> bookingChoice;
					i++;
				} while (bookingChoice == 'b');
			}
			else {
				cout << "You are not able to book a ticket as youre age is less than 18";
			}
		}

		else if (mainChoice == '2') {
			cout << "Enter the customers name you want to search for: " << endl;
			cin >> searchName;
			int j;
			for ( j = 0; j < 5; j++) {
				if (name[j] == searchName) {
					flag2 = true;
					cout << searchName << " found at index no " << j << ". The CNIC no of this " << CNIC[j] << endl;
					name[j] = searchName;
					
				}
			}
			if (flag2 == false) {
				cout << "The customer you searched for doesn't exist" << endl;
			}
		}

		else if (mainChoice == '3') {
			int j;
			cout << "Do you want to delete any customer:";
			cin >> delName;
			for (int i = 0; i < 5; i++) {
				if (delName == name[i]) {
					flag = true;

					for (j = 0; j < 5-1; j++) {
						name[j] = name[j + 1];
						break;
					}
				}
			}if (flag == false) {
				cout << "Not found:";
			}
			else {
				name[j + 1] = " ";
				cout << "Customer deleted:";
			}
		}
		cout << "Press y to return to the main menu (Press any other key to quit)" << endl;
		cin >> loopChoice;
	} while (loopChoice == 'y');
	return 0;
}