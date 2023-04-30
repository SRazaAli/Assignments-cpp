//#include <iOStream>
//using namespace std;
//
//int main() {
//
//	char option;
//	do
//	{
//		char mainChoice, choice1, choice2, choice3, choice4, choice5, choice6;
//		cout << "Press 1 if you want to perform Task 1" << endl
//			<< "Press 2 if you want to perform Task 2" << endl
//			<< "Press 3 if you want to perform Task 3" << endl
//			<< "Press 4 if you want to perform Task 4" << endl
//			<< "Press 5 if you want to perform Task 5" << endl
//			<< "Press 6 if you want to perform Task 6" << endl;
//		cin >> mainChoice;
//
//		if (mainChoice == '1') {
//			cout << "***************************** Task-01 *****************************" << endl;
//			do
//			{
//				int sum = 0;
//				int n;
//				cout << "Enter a number" << endl;
//				cin >> n;
//
//				for (int i = 1; i <= n; i++)
//				{
//					sum = sum + i;
//				}
//				cout << "The sum of first " << n << " natural numbers = " << sum << endl;
//				cout << "Press k if you want to perform this task again or any other key to exit" << endl;
//				cin >> choice1;
//			} while (choice1 == 'k');
//		}
//
//		else if (mainChoice == '2') {
//			cout << "***************************** Task-02 *****************************" << endl;
//			do {
//
//				int sum = 0;
//				int input;
//				cout << "Enter a number (Press 0 to quit)" << endl;
//				cin >> input;
//
//				while (input != 0) {
//					if (input > 0) {
//						sum = sum + input;
//					}
//					cout << "Enter a number (Press 0 to quit)" << endl;
//					cin >> input;
//				}
//				cout << "The sum of all Positive numbers = " << sum << endl;
//				cout << "Press k if you want to perform this task again or any other key to exit" << endl;
//				cin >> choice2;
//			} while (choice2 == 'k');
//
//		}
//
//		else if (mainChoice == '3') {
//			cout << "***************************** Task-03 *****************************" << endl;
//			do {
//
//				int sum = 0;
//				int input;
//				cout << "Enter a number (Enter a -ve number to quit)" << endl;
//				cin >> input;
//
//				do {
//					sum = sum + input;
//					cout << "Enter a number (Enter a -ve number to quit)" << endl;
//					cin >> input;
//				} while (input > 0);
//				cout << "The sum of all Positive numbers = " << sum << endl;
//				cout << "Press k if you want to perform this task again or any other key to exit" << endl;
//				cin >> choice3;
//			} while (choice3 == 'k');
//		}
//
//		else if (mainChoice == '4') {
//			cout << "***************************** Task-04 *****************************" << endl;
//			do {
//
//				int i, space, j;
//				for (i = 1; i <= 6; i++)
//				{
//					for (space = 6; space > i; space--)
//						cout << " ";
//					for (j = 0; j < i; j++)
//						cout << "* ";
//					cout << endl;
//				}
//			
//				for (int l = 0; l < 5; l++) {
//					cout << "    **";
//					cout<<endl;
//				}
//				
//
//				cout << "Press k if you want to perform this task again or any other key to exit" << endl;
//				cin >> choice4;
//			} while (choice4 == 'k');
//		}
//
//		else if (mainChoice == '5') {
//			cout << "***************************** Task-05 *****************************" << endl;
//			do {
//
//				int i, space, j;
//				for (i = 1; i <= 6; i++)
//				{
//					for (space = 6; space > i; space--)
//						cout << " ";
//					for (j = 0; j < i; j++)
//						cout << "a ";
//					cout << endl;
//				}
//				cout << "Press k if you want to perform this task again or any other key to exit" << endl;
//				cin >> choice5;
//			} while (choice5 == 'k');
//		}
//
//		else if (mainChoice == '6') {
//			cout << "***************************** Task-06 *****************************" << endl;
//			do
//			{
//				int startValue, endValue;
//				cout << "Enter Starting value" << endl;
//				cin >> startValue;
//
//				cout << "Enter ending value" << endl;
//				cin >> endValue;
//
//				do
//				{
//					cout << startValue << endl;
//					startValue++;
//				} while (startValue < endValue);
//
//				if (startValue > endValue)
//				{
//					cout << "Enter Starting value smaller than ending value!!" << endl;
//				}cout << "Press k if you want to perform this task again or any other key to exit" << endl;
//				cin >> choice6;
//			} while (choice6 == 'k');
//		}
//
//		else
//		{
//			cout << "Invalid choice!!" << endl;
//		}
//
//		cout << "Press k if you want to continue or any other key to exit" << endl;
//		cin >> option;
//	} while (option == 'k');
//
//
//	return 0;
//}

#include <iostream>
using namespace std;

int main() {

	int i, space, j;
	for (i = 1; i <= 6; i++)
	{
		for (space = 6; space > i; space--)
			cout << " ";
		for (j = 0; j < i; j++)
			cout << "* ";
		cout << endl;
	}

	for (int l = 0; l < 5; l++) {
		cout << "    **";
		cout << endl;
	}
	return 0;
}