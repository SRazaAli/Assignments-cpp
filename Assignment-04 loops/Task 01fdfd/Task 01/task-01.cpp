#include <iOStream>
using namespace std;

int main() {


	char mainChoice, choice1, choice2, choice3, choice4, choice5, choice6;
	cout << "Press 1 if you want to perform Task 1" << endl
		<< "Press 1 if you want to perform Task 2" << endl
		<< "Press 1 if you want to perform Task 3" << endl
		<< "Press 1 if you want to perform Task 4" << endl
		<< "Press 1 if you want to perform Task 5" << endl
		<< "Press 1 if you want to perform Task 6" << endl;
		cin >> mainChoice;

	if (mainChoice == '1') {
		do
		{
			int sum = 0;
			int n;
			cout << "Enter a number" << endl;
			cin >> n;

			for (int i = 1; i <= n; i++)
			{
				sum = sum + n;
			}
			cout << "The sum of first " << n << " natural numbers = " << sum << endl;
			cout << "Press k if you want to perform this task again or any other key to exit" << endl;
			cin >> choice1;
		} while (choice1 == 'k');
	}

	else if (mainChoice == '2') {

		do {
			int input;
			int sum = 0;
			cout << "Enter a number (Press 0 to quit)" << endl;
			cin >> input;
			
			while (input != 0) {
				sum = sum + input;
			}
			cout << "The sum of all Positive numbers = " << sum<<endl;

		} while (choice2 == 'k');

	}


	return 0;
}