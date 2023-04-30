#include <iOStream>
using namespace std;

int main() {

	int input;

	cout << "Enter a number: ";
	cin >> input;

	if (input%2==0) {
		cout << 
			"Input is Even";
	}
	else{
		cout <<
			"Input is Odd";
	}

	return 0;
}