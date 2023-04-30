#include <iOStream>
using namespace std;

int sum(int a, int b) {
	int c = a + b;
	return c;
}

int sub(int a, int b) {
	int c = a - b;
	return c;
}

int product(int a, int b) {
	int c = a * b;
	return c;
}

int division(int a, int b) {
	int c = a / b;
	return c;
}

int main() {
	int num1, num2,option;
	char choice;
	cout << "Enter a number " << endl;
	cin >> num1;
	cout << "Enter another number" << endl;
	cin >> num2;

	do {
		cout << "Select the operation you want to perform" << endl
			<< "Press + for addition" << endl
			<< "Press - for subtraction" << endl
			<< "Press * for multiplication " << endl
			<< "Press / for division" << endl;
		cin >> choice;

		if (choice == '+') {
			cout << "Sum of " << num1 << " and " << num2 << " is " << sum(num1, num2)<<endl;
		}
		else if (choice == '-') {
			cout << "Difference of " << num1 << " and " << num2 << " is " << sub(num1, num2)<<endl;

		}
		else if (choice == '*') {
			cout << "Product of " << num1 << " and " << num2 << " is " << product(num1, num2)<<endl;
		}
		else if (choice == '/') {
			cout << "Division of " << num1 << " and " << num2 << " is " << division(num1, num2)<<endl;
		}
		else {
			cout << "Invalid choice!"<<endl;
		}
		cout << "Press 0 if you want to continue or any other key to exit" << endl;
		cin >> option;
	} while (option == 0);

	return 0;
}