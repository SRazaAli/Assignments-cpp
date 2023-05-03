#include <iOStream>
using namespace std;

int main() {
	char choice, option;


	do
	{
		cout << "Press 1 to swap two numbers" << endl
			<< "Press 2 find whether a number is prime or not" << endl
			<< "Press 3 to find whether a number is even or not" << endl;
		cin >> choice;

		if (choice == '1') {
			int a, b;
			cout << "Enter a number" << endl;
			cin >> a;
			cout << "Enter another number" << endl;
			cin >> b;
			cout << "Before swapping ---> a = " << a << " and b = " << b << endl;
			int temp = 0;
			temp = b;
			b = a;
			a = temp;
			cout << "After swapping ---> a = " << a << " and b = " << b << endl;
		}
		else if (choice == '2') {
			int num3;
			bool flag = true;
			cout << "Enter a number" << endl;
			cin >> num3;
			for (int i = 2; i < num3; i++) {
				if (num3 % i == 0) {
					flag = false;
					cout << "The number is not prime" << endl;
					break;
				}
			}
			if (flag == true) {
				cout << "The number is prime" << endl;
			}
		}
		else if (choice == '3') {
			int x;
			cout << "Enter a number" << endl;
			cin >> x;
			if (x % 2 == 0) {
				cout << x << " is an even number" << endl;

			}
			else {
				cout << x << " is an odd number" << endl;

			}
		}
		else {
			cout << "Invalid choice" << endl;

		}
		cout << "Press 0 to return to the main menu or any other key to exit" << endl;
		cin >> option;
	} while (option == '0');

	return 0;
}
