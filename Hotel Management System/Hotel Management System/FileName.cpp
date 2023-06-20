#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;
struct Reservation {
	string nam;
	int res = 0;
	int day = 0, mon = 0, yr = 0;
	char typ;
	int num = 0;
	int bil = 0;
	int rid = 0;
};
Reservation res[100];
int sta = 10, exe = 20, lux = 30;
int tot = 0;
int spr = 5000, epr = 3000, lpr = 1500;
void reserve();
void record();
void check();
void display();
void bill();
void about();
void search();
int main() {
	int login;
	login = 12345;
	string password;
	password = "hotel547";
	int choice;
	char c;
	cout << ".............''Hotel Management System''............" << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "Enter login_id :" << endl;
	cin >> login;
	cout << "Enter Password : " << endl;
	cin >> password;
	if (login == 12345 && password == "hotel547") {
		cout << "You are now logged in " << endl;
		do {
			cout << "1: ABOUT" << endl;
			cout << "2: DISPLAY" << endl;
			cout << "3: RESERVE" << endl;
			cout << "4: SEARCH" << endl;
			cout << "Enter choice: ";
			cin >> choice;
			switch (choice) {
			case 1:
				about();
				break;
			case 2:
				display();
				break;
			case 3:
				reserve();
				break;
			case 4:
				search();
				break;
			}
			cout << "Run again? (y/n): ";
			cin >> c;
		} while (c == 'y');
		if (c == 'n') {
			cout << "..........Thank You.........." << endl;
		}
	}
	else {
		cout << "ERROR!!! Wrong login id or Password" << endl;
	}
	system("pause");
	return 0;
}
void about() {
	int choice = 0;
	cout << "Room Information:" << endl << endl;
	cout << "----------------------------------------" << endl;
	cout << "| Room Type | Price |" << endl;
	cout << "----------------------------------------" << endl;
	cout << "| Standard Room | $5000 |" << endl;
	cout << "| Executive Suite | $3000 |" << endl;
	cout << "| Luxury Penthouse | $1500 |" << endl;
	cout << "----------------------------------------" << endl;
	cout << "Enter room number (1-3) for more information: ";
	cin >> choice;
	cout << endl;
	if (choice == 1)
	{
		cout << "Standard Room" << endl;
		cout << "---------------" << endl;
		cout << "The Standard Room offers comfortable accommodation with basic amenities." << endl;
			cout << "It includes a cozy bed, private bathroom, TV, and Wi-Fi." << endl;
		cout << "Enjoy a pleasant stay at an affordable price." << endl;
	}
	else if (choice == 2)
	{
		cout << "Executive Suite" << endl;
		cout << "---------------" << endl;
		cout << "The Executive Suite is a spacious and luxurious room perfect for business travelers or those seeking extra comfort." << endl;
			cout << "It features a separate living area, elegant bedroom, en-suite bathroom, work desk, and high - speed internet." << endl;
			cout << "Indulge in the ultimate relaxation and convenience during your stay." << endl;
	}
	else if (choice == 3)
	{
		cout << "Luxury Penthouse" << endl;
		cout << "---------------" << endl;
		cout << "The Luxury Penthouse offers a truly lavish experience with
			breathtaking views and premium amenities." << endl;
			cout << "It includes multiple bedrooms, a spacious living area, fully
			equipped kitchen, private terrace, and personalized services." << endl;
			cout << "Experience opulence and sophistication at its finest." << endl;
	}
	else
	{
		cout << "Invalid choice. Please select a valid room number (1-3)." << endl;
	}
}
void reserve() {
	srand(time(0));
	res[tot].rid = (rand() % 1000) + 1;
	cout << "Reservation ID: " << res[tot].rid << endl;
	cout << "Enter your name: ";
	cin.ignore();
	getline(cin, res[tot].nam);
	cout << "Enter date (dd mm yyyy): ";
	cin.ignore();
	cin >> res[tot].day >> res[tot].mon >> res[tot].yr;
	cout << "How many rooms do you want to book? ";
	cin.ignore();
	cin >> res[tot].num;
	cout << "Enter room type (s/e/l): ";
	cin.ignore();
	cin >> res[tot].typ;
	cout << "Your reservation is successfully done." << endl;
	bill();
	check();
	tot++;
	record();
}
void record() {
	int i = 0;
	fstream myfile;
	myfile.open("data.txt", ios::app);
	if (tot == 0) {
		cout << "No records available" << endl;
		myfile << "No record to display" << endl;
	}
	else {
		for (i = 0; i < tot; i++) {
			myfile << "Reservation ID: " << res[i].rid << endl;
			myfile << "Name: " << res[i].nam << endl;
			myfile << "Check-in date: " << res[i].day << "-" << res[i].mon << "-" <<
				res[i].yr << endl;
			myfile << "Number of rooms: " << res[i].num << endl;
			switch (res[tot].typ) {
			case 's':
				cout << "Room type: Standard" << endl;
				break;
			case 'e':
				cout << "Room type: Executive" << endl;
				break;
			case 'l':
				cout << "Room type: Luxury" << endl;
				break;
			}
			myfile << "Number of days: " << res[i].num << endl;
		}
		myfile << endl << endl;
	}
}
void display() {
	string x;
	fstream myfile;
	myfile.open("data.txt", ios::in);
	if (!myfile) {
		cout << "File not created!" << endl;
	}
	else {
		cout << ".......Displaying Record........." << endl;
		while (getline(myfile, x)) {
			cout << x << endl;
		}
	}
}
void check() {
	switch (res[tot].typ) {
	case 's':
		sta -= res[tot].num;
		break;
	case 'e':
		exe -= res[tot].num;
		break;
	case 'l':
		lux -= res[tot].num;
		break;
	}
	cout << "-----------------------" << endl;
	cout << "REMAING ROOMS For EACH CATEGORY....." << endl;
	cout << "-----------------------" << endl;
	cout << "Standard Room: " << sta << endl;
	cout << "Executive Suite: " << exe << endl;
	cout << "Luxury Penthouse: " << lux << endl;
}
void bill() {
	switch (res[tot].typ) {
	case 's':
		res[tot].bil = spr * res[tot].num * res[tot].num;
		break;
	case 'e':
		res[tot].bil = epr * res[tot].num * res[tot].num;
		break;
	case 'l':
		res[tot].bil = lpr * res[tot].num * res[tot].num;
		break;
	}
	cout << "Reservation ID: " << res[tot].rid << endl;
	cout << "Name: " << res[tot].nam << endl;
	cout << "Bill: $" << res[tot].bil << endl;
}
void search()
{
	int id;
	cout << "Enter the id of a customer to see its details ";
	cin >> id;
	ifstream myfile;
	myfile.open("data.txt");
	if (myfile.is_open())
	{
		string line;
		bool found = false;
		while (getline(myfile, line))
		{
			if (line.find("ID: " + to_string(id)) != string::npos)
			{
				cout << line << endl;
				getline(myfile, line);
				cout << line << endl;
				getline(myfile, line);
				cout << line << endl;
				getline(myfile, line);
				cout << line << endl;
				found = true;
				break;
			}
		}
		if (!found)
		{
			cout << "Customer is not in the records" << endl;
		}
	}
	else
	{
		cout << "Could not open the file." << endl;
	}
}