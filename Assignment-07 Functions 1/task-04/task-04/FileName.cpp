#include <iOStream>
using namespace std;


string store(int a) {

	if (a > 1000) {
		cout << "Your total is = " << a<<endl;
		string output1 = "You will get free delivery :)";
		return output1;
	}
	else {
		cout << "Your total is = " << a<< endl;
		string output2 = "A delivery fees of 150 will be charged";
		return output2;
	}
}
int main() {
	char choice;
	int charges,total = 0;
	char option;
	cout << "------------------- Welcome to ABC Store -------------------" << endl;

	do
	{
		cout << "Choose an item to purchase" << endl
			<< "Press 1 for Bread (300Rs)" << endl
			<< "Press 2 for Milk (500Rs)" << endl
			<< "Press 3 for Dough (450Rs)" << endl
			<< "Press 4 for Oil  (700)" << endl;
		cin >> choice;
		if (choice == '1') {
			total = total + 300;
		 }
		else if (choice == '2') {
			total = total + 500;
		}
		else if (choice == '3') {
			total = total + 450;
		}
		else if (choice == '4') {
			total = total + 700;
		}
		

		cout << "Press 0 to purchase another item or any other key to exit" << endl;
		cin >> option;
	} while (option == '0');
	cout << store(total);

	
	return 0;
}