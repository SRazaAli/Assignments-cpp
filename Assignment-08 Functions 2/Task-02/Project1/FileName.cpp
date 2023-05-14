#include <iOStream>
using namespace std;


int average(int a, int b, int c) {
	int avg = (a + b + c) / 3;
	return avg;
}
int main() {
	char choice;
	int num1, num2, num3;
	cout << "Press 1 to generate random numbers ranging from 1 to 100 " << endl
		<< "Press 2 to calculate average of three numbers" << endl;
	cin >> choice;

	if (choice == '1') {

	}
	else if (choice == '2') {
		cout << "Enter number 1" << endl;
		cin >> num1;
		cout << "Enter number two" << endl;
		cin >> num2;
		cout << "Enter number 3" << endl;
		cin >> num3;

		cout << "The average of "<<num1<<" , "<<num2<<" and "<<num3<<" is "<<average(num1,num2,num3);
	}
	return 0;
}