#include <iOStream>
using namespace std;

int main() {

	float a, b,result;
	char choice;
	cout << "Enter a number: " << endl;
	cin >> a;

	cout << "Enter another number: " << endl;
	cin >> b;

	cout << "Press + to perform Addition" << endl;
	cout << "Press - to perform Subtraction" << endl;
	cout << "Press * to perform Multiplication" << endl;
	cout << "Press / to perform Division" << endl;
	cin >> choice;

	if (choice == '+') {
		result = a + b;
		cout << result;
	}
	else if (choice == '-') {
		result = a - b;
		cout << result;
	}
	else if (choice == '*') {
		result = a * b;
		cout << result;
	}
	else if (choice == '/') {
		result = a / b;
		cout << result;
	}

	return 0;
}