#include<iostream>
#include<fstream>
#include<string>
using namespace std;

const int ROWS = 10, COLUMNS = 5;

struct Customer
{
	int C_id;
	int C_ph;
	int C_age;
	int card_no;
	string card_date;
	int cvc;
	int t_price = 0;
	string address;
	string C_name;
	string C_email;
};
Customer c[10];

struct Plays
{
	string plays;
	string time;
	string date;
};
Plays obj[10];

void Input_Plays(Plays obj[10])
{
	//Recorded Plays;
	obj[0].plays = "Hamlet By William Shakespeare";
	obj[1].plays = "The Mouse Trap By Agatha Christie";
	obj[2].plays = "Look Back In Anger";
	obj[3].plays = "The Glass Menagerie By Tennessee Williams";
	obj[4].plays = "The Crucible By Arthur Miller";
	//Recorded Play_Timings;
	obj[0].time = "(06:45 - 07:30) ";
	obj[1].time = "(07:30 - 08:15) ";
	obj[2].time = "(08:30 - 09:15) ";
	obj[3].time = "(10:00 - 10:45) ";
	obj[4].time = "(11:00 - 11:45) ";
	//Recorded Play_Dates:
	obj[0].date = "23/December/2022 ";
	obj[1].date = "23/December/2022 ";
	obj[2].date = "23/December/2022 ";
	obj[3].date = "23/December/2022 ";
	obj[4].date = "23/December/2022 ";
	//Storing data in file:
	ofstream file("Adm_record.txt");
	if (file.is_open())
	{
		file << "Plays: " << obj[0].plays << endl;
		file << "Dates: " << obj[0].date << endl;
		file << "Time: " << obj[0].time << endl;
		file << "-----------------------" << endl;
		file << "Plays: " << obj[1].plays << endl;
		file << "Dates: " << obj[1].date << endl;
		file << "Time: " << obj[1].time << endl;
		file << "-----------------------" << endl;
		file << "Plays: " << obj[2].plays << endl;
		file << "Dates: " << obj[2].date << endl;
		file << "Time: " << obj[2].time << endl;
		file << "-----------------------" << endl;
		file << "Plays: " << obj[3].plays << endl;
		file << "Dates: " << obj[3].date << endl;
		file << "Time: " << obj[3].time << endl;
		file << "-----------------------" << endl;
		file << "Plays: " << obj[4].plays << endl;
		file << "Dates: " << obj[4].date << endl;
		file << "Time: " << obj[4].time << endl;
		file.close();
	}
	else {
		cout << "Cannot open file" << endl;
	}
}
//Adding Plays;
void Add_plays(Plays obj[10])
{
	int i = 0;
	string n_play, n_date, n_time;

	cout << ":: Enter new play: ";
	cin.ignore();
	getline(cin, obj[i].plays);
	cout << ":: Enter new date: ";
	getline(cin, obj[i].date);
	cout << ":: Enter new time: ";
	getline(cin, obj[i].time);

	ofstream file("Adm_record.txt", ios::app);
	if (file.is_open())
	{
		file << "-----------------------" << endl;
		file << "Plays: " << obj[i].plays << endl;
		file << "Dates: " << obj[i].date << endl;
		file << "Time: " << obj[i].time << endl;
		i = i + 1;
		file.close();
	}
	else {
		cout << "Cannot open file " << endl;
	}
}
//Reading data from file;
void Output_plays()
{
	ifstream file("Adm_record.txt");
	{
		if (file.is_open())
		{
			string text;
			while (getline(file, text))
			{
				cout << text << endl;
			}
			file.close();
		}
	}
}

//o_name = previous play name & n_name = new play name;
void update(Plays obj[10], string o_data, string n_data)
{
	bool search = false;
	for (int i = 0; i < 5; i++)
	{
		if (obj[i].plays == o_data)
		{
			search = true;
			cout << "Entered data found :) " << endl;
			obj[i].plays = n_data;
		}
	}
	cout << "--- The updated records are --- " << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Play: " << obj[i].plays << " || Happening on: " << obj[i].date << " || At: " << obj[i].time << endl;
	}

	if (search == false)
	{
		cout << "Entered data doesn't exist :( " << endl;
	}
}
void record_delete(Plays obj[10], string e_data)
{
	bool found = false;
	for (int i = 0; i < 5; i++)
	{
		if (obj[i].plays == e_data)
		{
			found = true;
			obj[i].plays = "--- This play has been cancelled ---";
			obj[i].time = "--- This time slot is no longer available ---";
			obj[i].date = "--- No play available ---";
		}
	}
	for (int k = 0; k < 5; k++)
	{
		cout << "Plays: " << obj[k].plays << endl;
		cout << "Date: " << obj[k].date << endl;
		cout << "Time: " << obj[k].time << endl;
		cout << endl;
	}
	if (found == false)
	{
		cout << "Entered data doesnot exist :( " << endl;
	}
}
//Taking Customer Info And Storing It Into File;
void Customer_details(Customer c[10])
{
	int i = 0;
	cout << ":: Enter your ID: ";
	cin >> c[i].C_id;
	cout << ":: Enter your name: ";
	cin.ignore();
	getline(cin, c[i].C_name);
	cout << ":: Enter your phone number: ";
	cin >> c[i].C_ph;
	cout << ":: Enter your e_mail: ";
	cin.ignore();
	getline(cin, c[i].C_email);

	ofstream file("Customer_record.txt", ios::app);
	if (file.is_open())
	{
		file << "Customer ID: " << c[i].C_id << endl;
		file << "Customer Name: " << c[i].C_name << endl;
		file << "Customer Phone Number: " << c[i].C_ph << endl;
		file << "Customer E-mail: " << c[i].C_email << endl;
		file << "-----------------------------------" << endl;
		i = i + 1;
		file.close();
	}
	else {
		cout << "This file cannot be open :( " << endl;
	}
}
//Reading Customer Data From File;
void ReadCustomerDetails()
{
	ifstream file("Customer_record.txt");
	if (file.is_open())
	{
		string data;
		while (getline(file, data))
		{
			cout << data << endl;
		}
		file.close();
	}
	else {
		cout << "This file cannot be open :( ";
	}
}
//Ticket Booking;
void BookTicket(Customer c[10])
{
	int i = 0;
	char ans;
	int choice;
	cout << "Enter your age: ";
	cin >> c[i].C_age;
	if (c[i].C_age >= 6 && c[i].C_age <= 14) {
		cout << "Do you want to buy ticket?Reply with Y/N:" << endl;
		cin >> ans;
		if (ans == 'Y') {
			cout << "=== Tickets price for child are as follows ===" << endl;
			cout << "* Press 1 to buy ticket for play 1(Hall 1).Price is 700:" << endl;
			cout << "* Press 2 to buy ticket for play 2(Hall 1).Price is 800:" << endl;
			cout << "* Press 3 to buy ticket for play 3(Hall 1).Price is 900:" << endl;
			cout << "* Press 4 to buy ticket for play 4(Hall 2).Price is 1000:" << endl;
			cout << "* Press 5 to buy ticket for play 5(Hall 2).Price is 1100:" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1:
				c[i].t_price = 700;
				cout << "=== Ticket confirmed ====" << endl;
				break;
			case 2:
				c[i].t_price = 800;
				cout << "=== Ticket confirmed ====" << endl;
				break;
			case 3:
				c[i].t_price = 900;
				cout << "=== Ticket confirmed ====" << endl;
				break;
			case 4:
				c[i].t_price = 1000;
				cout << "=== Ticket confirmed ====" << endl;
				break;
			case 5:
				c[i].t_price = 1100;
				cout << "=== Ticket confirmed ====" << endl;
				break;
			}
		}if (ans == 'N') {
			cout << "=== No Ticket generated ===" << endl;
		}
	}
	else if (c[i].C_age >= 11 && c[i].C_age <= 24) {
		cout << "Do you want to buy ticket?Reply with Y/N:" << endl;
		cin >> ans;
		if (ans == 'Y') {
			cout << "=== Tickets price for teenager are as follows ===" << endl;
			cout << "* Press 1 to buy ticket for play 1(Hall 1).Price is 1200:" << endl;
			cout << "* Press 2 to buy ticket for play 2(Hall 1).Price is 1300:" << endl;
			cout << "* Press 3 to buy ticket for play 3(Hall 1).Price is 1400:" << endl;
			cout << "* Press 4 to buy ticket for play 4(Hall 2).Price is 1500:" << endl;
			cout << "* Press 5 to buy ticket for play 5(Hall 2).Price is 1600:" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1:
				c[i].t_price = 1200;
				cout << "=== Ticket confirmed ====" << endl;
				break;
			case 2:
				c[i].t_price = 1300;
				cout << "=== Ticket confirmed ====" << endl;
				break;
			case 3:
				c[i].t_price = 1400;
				cout << "=== Ticket confirmed ====" << endl;
				break;
			case 4:
				c[i].t_price = 1500;
				cout << "=== Ticket confirmed ====" << endl;
				break;
			case 5:
				c[i].t_price = 1600;
				cout << "=== Ticket confirmed ====" << endl;
				break;
			}
		}if (ans == 'N') {
			cout << "=== No Ticket generated ===" << endl;
		}
	}
	else if (c[i].C_age >= 25 && c[i].C_age <= 60) {
		cout << "Do you want to buy ticket?Reply with Y/N:" << endl;
		cin >> ans;
		if (ans == 'Y') {
			cout << "=== Tickets price for adults are === " << endl;
			cout << "* Press 1 to buy ticket for play 1(Hall 1).Price is 1700:" << endl;
			cout << "* Press 2 to buy ticket for play 2(Hall 1).Price is 1800:" << endl;
			cout << "* Press 3 to buy ticket for play 3(Hall 1).Price is 1900:" << endl;
			cout << "* Press 4 to buy ticket for play 4(Hall 2).Price is 2000:" << endl;
			cout << "* Press 5 to buy ticket for play 5(Hall 2).Price is 2100:" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1:
				c[i].t_price = 1700;
				cout << "=== Ticket confirmed ====" << endl;
				break;
			case 2:
				c[i].t_price = 1800;
				cout << "=== Ticket confirmed ====" << endl;
				break;
			case 3:
				c[i].t_price = 1900;
				cout << "=== Ticket confirmed ====" << endl;
				break;
			case 4:
				c[i].t_price = 2000;
				cout << "=== Ticket confirmed ====" << endl;
				break;
			case 5:
				c[i].t_price = 2100;
				cout << "=== Ticket confirmed ====" << endl;
				break;
			}
		}if (ans == 'N') {
			cout << "=== No Ticket generated ===" << endl;
		}
	}
	i = i + 1;
}
//To Make Payment;
void Payment(Customer c[10])
{
	int i = 0;
	int c_option, ID;
	cout << "Enter Customer ID: ";
	cin >> ID;
	cout << "*       Payment        * " << endl;
	cout << "   Select Payment Method " << endl;
	cout << "1) Credit Card " << endl;
	cout << "2) Debit Card " << endl;
	cin >> c_option;
	if (c_option == 1 && c[i].C_id == ID)
	{
		cout << "Enter your card number: ";
		cin >> c[i].card_no;
		cin.ignore();
		cout << "Enter your card empiration date: ";
		getline(cin, c[i].card_date);
		cout << "Enter CVC(3-digit code written on backside of your card: ";
		cin >> c[i].cvc;
		cin.ignore();
		cout << "Enter you address: ";
		getline(cin, c[i].address);
		cout << "Enter the amount you want to pay: ";
		cout << c[i].t_price;
		cout << endl;
		cout << "--- Payment made successfully --- " << endl;

		ofstream file("Payment_record.txt", ios::app);
		if (file.is_open())
		{
			file << "Customer ID: " << c[i].C_id << endl;
			file << "Customer Card Number: " << c[i].card_no << endl;
			file << "Customer Card Expiration Date: " << c[i].card_date << endl;
			file << "Customer CVC: " << c[i].cvc << endl;
			file << "Customer Address:  " << c[i].address << endl;
			file << "Payment of: " << c[i].t_price << endl;
			file << "-----------------------------------" << endl;
			i = i + 1;
			file.close();
		}
		else {
			cout << "This file cannot be open :( " << endl;
		}
	}
	else if (c_option == 2 && c[i].C_id == ID)
	{
		cout << "Enter your card number: ";
		cin >> c[i].card_no;
		cout << "Enter your card empiration date: ";
		cin >> c[i].card_date;
		cout << "Enter CVC(3-digit code written on backside of your card: ";
		cin >> c[i].cvc;
		cin.ignore();
		cout << "Enter you address: ";
		getline(cin, c[i].address);
		cout << "Enter the amount you want to pay: ";
		cout << c[i].t_price;
		cout << "--- Payment made successfully --- " << endl;

		ofstream file("Payment_record.txt", ios::app);
		if (file.is_open())
		{
			file << "Customer ID: " << c[i].C_id << endl;
			file << "Customer Card Number: " << c[i].card_no << endl;
			file << "Customer Card Expiration Date: " << c[i].card_date << endl;
			file << "Customer CVC: " << c[i].cvc << endl;
			file << "Customer Address:  " << c[i].address << endl;
			file << "Payment of: " << c[i].t_price << endl;
			file << "-----------------------------------" << endl;
			i = i + 1;
			file.close();
		}
		else {
			cout << "This file cannot be open :( " << endl;
		}
	}
}
//Displaying Payment Confirmation
void payment_record()
{
	ifstream file("Payment_record.txt");
	if (file.is_open())
	{
		string text;
		while (getline(file, text))
		{
			cout << text << endl;
		}
	}
}
//Displaying Hall;
void display_hall()
{
	char choice = '0';
	cout << "Press 1 to display HALL 1" << endl << "Press 2 to display HALL 2: ";
	cin >> choice;
	while (choice != '1' && choice != '2')
	{
		cout << "Invalid choice. Please enter 1 or 2: ";
		cin >> choice;
	}
	if (choice == '1')
	{
		cout << "(1) THE ORCHID" << endl;
		cout << "1. HAMLET by Shakespeare = (6:45-7:30)." << endl;
		cout << "2. THE MOUSE TRAP by Agatha Christie = (7:30-8:15)." << endl;
		cout << "3. LOOK BACK IN ANGER by John Osborne = (8:30-9:15)." << endl;
	}
	else if (choice == '2')
	{
		cout << "(2) THE MIRACLE" << endl;
		cout << "1. THE GLASS MENAGERIE by Tennessee Williams = (10:00-10:45)." << endl;
		cout << "2. THE CRUCIBLE by Arthur Miller = (11:00-11:45)." << endl;
	}
}
//Displaying price for individual seats;
void seating_prices(const int arr[])
{
	for (int i = 0; i < ROWS; i++)
	{
		cout << "Row #" << (i + 1) << " = Rs." << arr[i] << endl;
	}
}
//Reserving Seats;
void book_seat()
{
	int seat_prices[10] = { 500,500,500,500,500,400,400,400,400,400 };
	char seating_chart[ROWS][COLUMNS];
	char user_choice = '0';
	int total_ticket = 0;
	int seats_sold = 0;
	int row_number = 0;
	int seat_number = 0;

	// Initialize seating_chart with '#'
	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			seating_chart[row][column] = '#';
		}
	}
	cout << "Choose a seat" << endl;
	cout << "-------------" << endl;
	cout << "Enter a row #: ";
	cin >> row_number;
	cout << "Enter a seat #: ";
	cin >> seat_number;

	if (seating_chart[row_number - 1][seat_number - 1] == '#')
	{
		cout << "The seat is available." << endl;
		cout << "The price of Row #" << row_number << " Seat #" << seat_number << " is Rs." << seat_prices[row_number - 1] << "." << endl;
		cout << "Would you like to buy Row #" << row_number << " Seat #" << seat_number << "?(Y/N) ";
		cin >> user_choice;

		if (user_choice == 'y' || user_choice == 'Y')
		{
			seating_chart[row_number - 1][seat_number - 1] = '*';
			total_ticket += seat_prices[row_number - 1];

			cout << "Total charges: Rs." << total_ticket << endl;
			seats_sold++;
		}
		else if (user_choice == 'N' || user_choice == 'n')
		{
			cout << "OK" << endl;
		}
	}
	else
	{
		cout << "That seat is NOT available." << endl;
	}
}

void main()
{
	int choice, option_1, log_id, Input;
	string o_data, n_data, e_data, pass;
	char user_input;
	Input_Plays(obj);
	do {
		cout << "       WELCOME TO CINEMA BOOKING SYSTEM " << endl;
		cout << " ---- Press 1: If you are from administration ----- " << endl;
		cout << " ---- Press 2: For booking                    ----- " << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "--- LOGIN TO YOUR ACCOUNT --- " << endl;
			cout << "Login ID: ";
			cin >> log_id;
			cout << "Password: ";
			cin >> pass;
			if (log_id == 247 && pass == "admin123")
			{
				cout << "LOGIN SUCCEESSFULL" << endl;
				do {
					cout << "---- Press 1:  To Update Any Play                      ---- " << endl;
					cout << "---- Press 2:  To Cancel Any Play                      ---- " << endl;
					cout << "---- Press 3:  To Add Plays                            ---- " << endl;
					cout << "---- Press 4:  To view details of Customer             ---- " << endl;
					cin >> option_1;
					switch (option_1)
					{
					case 1:
						cout << "Enter Play you want to update: ";
						cin.ignore();
						getline(cin, o_data);
						cout << "Enter new Play: ";
						getline(cin, n_data);
						update(obj, o_data, n_data);
						cout << "Update Successfull :) " << endl;
						break;
					case 2:
						cout << "Enter any Play to remove: ";
						cin.ignore();
						getline(cin, e_data);
						record_delete(obj, e_data);
						cout << "Data Removed Successfully :) " << endl;
						break;
					case 3:
						Add_plays(obj);
						cout << "--> Plays added successfully " << endl;
						break;
					case 4:
						cout << " << Registered customer details >> " << endl;
						ReadCustomerDetails();
						break;
					}
					cout << "Press any key from 1 to 9 to continue: ";
					cin >> Input;
				} while (Input != 0);
			}
			else {
				cout << "Invalid credentials entered " << endl;
			}
		}
		else if (choice == 2)
		{
			int seat_prices[ROWS] = { 500, 500, 500, 500, 500, 400, 400, 400, 400, 400 };
			int opt; //opt = option;
			int input, get;
			char choice_main;
			do {
				cout << "---- Press 1:   To Register Your Information           ---- " << endl;
				cout << "---- Press 2:   To View Plays At Theatre               ---- " << endl;
				cout << "---- Press 3:   To Book Ticket                         ---- " << endl;
				cout << "---- Press 4:   To Reserve Seat                        ---- " << endl;
				cout << "---- Press 5:   To Make Payment                        ---- " << endl;
				cout << "---- Press 6:   To View Payment Details                ---- " << endl;
				cin >> input;
				switch (input)
				{
				case 1:
					Customer_details(c);
					break;
				case 2:
					cout << "---LISTED PLAYS ARE AVAILABLE AT THE THEATRE---" << endl;
					Output_plays();
					break;
				case 3:
					BookTicket(c);
					break;
				case 4:
					do {
						cout << "SEATS RESERVATION" << endl;
						cout << "=================" << endl;
						cout << "1. DISPLAY HALLS." << endl;
						cout << "2. DISPLAY SEATING PRICE." << endl;
						cout << "3. BOOK A SEAT." << endl;
						cin >> choice_main;
						if (choice_main == '1')
						{
							display_hall();
						}
						else if (choice_main == '2')
						{
							seating_prices(seat_prices);
						}
						else if (choice_main == '3')
						{
							book_seat();
						}
						else {
							cout << "Invalid choice" << endl;
						}
						cout << "See further information by pressing keys from 1 to 9 ";
						cin >> get;
					} while (get != 0);
					break;
				case 5:
					Payment(c);
					break;
				case 6:
					payment_record();
					break;
				}
				cout << "Press any key from 1 to 9 to continue: ";
				cin >> opt;
			} while (opt != 0);
		}
		cout << "Continue Running Program ? ";
		cin >> user_input;
	} while (user_input != 0);
}