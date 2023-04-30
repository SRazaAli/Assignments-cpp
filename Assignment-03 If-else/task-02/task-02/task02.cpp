#include <iOStream>
using namespace std;

int main() {

	int number;

	cout << "Enter a number to find weekday: ";
	cin >> number;

	switch (number)
	{
	case 1 :
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
		cout << "Invalid input!" ;
		break;
	}

	return 0;
}