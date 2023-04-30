#include <iOStream>
using namespace std;

int main() {
	char choiceMain, choiceOfTasks, choice1,choice2,choice3,choice4,choice5;
	do {
		

		cout << "Press 1 to perform Task 1" << endl <<
			"Press 2 to perform Task 2" << endl <<
			"Press 3 to perform Task 3" << endl <<
			"Press 4 to perform Task 4" << endl <<
			"Press 5 to perform Task 5" <<endl;
		cin >> choiceOfTasks;

		if (choiceOfTasks == '1') {
			cout << "***************************** Task-01 *****************************" << endl;
			do {
				int age;
				char choice;

				cout << "Enter your age: ";
				cin >> age;

				cout << "Press d if you want to convert your age into days" << endl;
				cout << "Press h if you want to convert your age into hours" << endl;
				cin >> choice;

				if (choice == 'd') {
					age = age * 365;
					cout << "Age in days = " << age << " days"<<endl;
				}
				else if (choice == 'h') {
					age = age * 365 * 24;
					cout << "Age in hours = " << age << " hours"<<endl;
				}
				else {
					cout << "Invalid input!";
				}
				cout << "Press y if you want to perform Task 1 again or any other key to exit"<<endl;
				cin >> choice1;
			} while (choice1 == 'y');
		}
		else if (choiceOfTasks == '2') {
			cout << "***************************** Task-02 *****************************" << endl;
			do {
				int number;

				cout << "Enter a number to find weekday: ";
				cin >> number;

				switch (number)
				{
				case 1:
					cout << "Today is Monday" << endl;
					break;
				case 2:
					cout << "Today is Tuesday" << endl;
					break;
				case 3:
					cout << "Today is Wednesday" << endl;
					break;
				case 4:
					cout << "Today is Thursday" << endl;
					break;
				case 5:
					cout << "Today is Friday" << endl;
					break;
				case 6:
					cout << "Today is Saturday" << endl;
					break;
				case 7:
					cout << "Today is Sunday" << endl;
					break;
				default:
					cout << "Invalid input!"<<endl;
					break;
				}
				cout << "Press y if you want to perform Task 2 again or any other key to exit" << endl;
				cin >> choice2;
			} while (choice2 == 'y');
		}
		else if (choiceOfTasks == '3') {
			cout << "***************************** Task-03 *****************************" << endl;
			do {
				int input;

				cout << "Enter a number: "<<endl;
				cin >> input;

				if (input % 2 == 0) {
					cout <<
						"Input is Even"<<endl;
				}
				else {
					cout <<
						"Input is Odd"<<endl;
				}
				cout << "Press y if you want to perform Task 3 again or any other key to exit" << endl;
				cin >> choice3;
			} while (choice3 == 'y');
		}
		else if (choiceOfTasks == '4') {
			cout << "***************************** Task-04 *****************************" << endl;
			do {


				float num1, num2, num3, sum, average;
				char choice;

				cout << "Enter first number: ";
				cin >> num1;

				cout << "Enter second number: ";
				cin >> num2;

				cout << "Enter third number: ";
				cin >> num3;

				cout << "Press 1 to find the smallest number" << endl;
				cout << "Press 2 to find the largest number" << endl;
				cout << "Press 3 to calculate the sum of the numbers" << endl;
				cout << "Press 4 to calculate the average of the numbers" << endl;
				cin >> choice;

				if (choice == '1')
				{
					if (num1 < num2 && num1 < num3) {
						cout << "Smallest number is " << num1<<endl;
					}
					else if (num2 < num1 && num2 < num3) {
						cout << "Smallest number is " << num2<<endl;

					}
					else if (num3 < num1 && num3 < num2) {
						cout << "Smallest number is " << num3<<endl;
					}
				}
				else if (choice == '2') {
					if (num1 > num2 && num1 > num3) {
						cout << "largest number is " << num1<<endl;
					}
					else if (num2 > num1 && num2 > num3) {
						cout << "largest number is " << num2<<endl;

					}
					else if (num3 > num1 && num3 > num2) {
						cout << "largest number is " << num3<<endl;
					}

				}
				else if (choice == '3') {
					sum = num1 + num2 + num3;
					cout << "Sum of the three numbers = " << sum<<endl;
				}
				else if (choice == '4') {
					average = (num1 + num2 + num3) / 3;
					cout << "Average of the three numbers = " << average<<endl;
				}
				else {
					cout << "Invalid input!"<<endl;
				}

				cout << "Press y if you want to perform Task 5 again or any other key to exit ";
				cin >> choice5;
			} while (choice5 == 'y');
		}
		else if (choiceOfTasks == '5') {
			cout << "***************************** Task-05 *****************************" << endl;
			do {
				int input;

				cout << "Enter a number:" << endl;
				cin >> input;

				if (input != 0) {
					if (input > 0) {
						cout << "Your input is a positive number!" << endl;

					}
					else {
						cout << "Your input is a negative number!" << endl;
					}
				}
				else {
					cout << "Your input is zero!" << endl;
				}

				cout << "Press y if you want to perform Task 4 again or any other key to exit" << endl;
				cin >> choice4;
			} while (choice4 == 'y');
		
		}


		cout << "Press y if you want to see the main menu"<<endl;
		cin >> choiceMain;
	} while (choiceMain == 'y');


	return 0;
}
