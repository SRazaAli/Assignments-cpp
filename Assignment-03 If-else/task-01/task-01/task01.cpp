#include <iOStream>
using namespace std;

int main() {

	int age;
	char choice;

	cout << "Enter your age: ";
	cin >> age;

	cout << "Press d if you want to convert your age into days" << endl;
	cout << "Press h if you want to convert your age into hours" << endl;
	cin >> choice;

	if (choice == 'd') {
		age = age * 365;
		cout << "Age in days = " << age << " days";
	}
	else if (choice == 'h') {
		age = age * 365 * 24;
		cout << "Age in hours = " << age << " hours";
	}
	else {
		cout << "Invalid input!";
	}

	return 0;
}