#include <iOStream>
using namespace std;

int main() {

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
		cout << "Your input is zero!";
	}


	return 0;
}