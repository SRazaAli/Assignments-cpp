#include <iOStream>
using namespace std;

int main() {

	float num1, num2, num3,sum, average;
	char choice;

	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number: ";
	cin >> num2;

	cout << "Enter third number: ";
	cin >> num3;

	cout << "Press 1 to find the smallest number" <<endl;
	cout << "Press 2 to find the largest number" <<endl;
	cout << "Press 3 to calculate the sum of the numbers"<<endl;
	cout << "Press 4 to calculate the average of the numbers"<<endl;
	cin >> choice;

	if (choice == '1')
	{
		if (num1 < num2 && num1 < num3) {
			cout << "Smallest number is " << num1;
		}
		else if (num2 < num1 && num2 < num3) {
			cout << "Smallest number is " << num2;

		}
		else if (num3 < num1 && num3 < num2) {
			cout << "Smallest number is " << num3;
		}
	}
	else if (choice == '2') {
		if (num1 > num2 && num1 > num3) {
			cout << "largest number is " << num1;
		}
		else if (num2 > num1 && num2 > num3) {
			cout << "largest number is " << num2;

		}
		else if (num3 > num1 && num3 > num2) {
			cout << "largest number is " << num3;
		}

	}
	else if (choice == '3') {
		 sum = num1 + num2 + num3;
		cout << "Sum of the three numbers = " << sum;
	}
	else if (choice == '4') {
		 average = (num1 + num2 + num3) / 3;
		 cout << "Average of the three numbers = " << average;
	}
	else {
		cout << "Invalid input!";
	}
	return 0;
}