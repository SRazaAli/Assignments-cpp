#include <iOStream>
#include <string>
using namespace std;


void comparison(int a, int b) {
	if (a < b) {
		cout << "The smallest number amongst first two is " << a<<endl
			<< "The largest number amongst first two is " << b<<endl;
	}
	else {
		cout << "The smallest number amongst first two is " << b<<endl
			<< "The largest number amongst first two is " << a<<endl;
	}
}
void comparison(int a, int b, int c) {
	if (a < b && a < c) {
		cout << "The smallest number amongst first three is " << a << endl;
	}
	if (b < a && b < c) {
		cout << "The smallest number amongst first three is " << b << endl;
	}
	if (c < a && c < b) {
		cout << "The smallest number amongst first three is " << c << endl;
	}
	if (a > b && a > c) {
		cout << "The biggest number amongst first three is " << a << endl;

	}
	if (b > a && b > c) {
		cout << "The biggest number amongst first three is " << b << endl;
	}
	if (c > a && c > b) {
		cout << "The biggest number amongst first three is " << c << endl;
	}
}

void comparison(int a, int b, int c, int d) {
	if (a < b && a < c && a < d) {
		cout << "The smallest number amongst four is " << a << endl;
	}
	if (b < a && b < c && b < d) {
		cout << "The smallest number amongst four is " << b << endl;

	}
	if (c < a && c < b && c < d) {
		cout << "The smallest number amongst four is " << c << endl;
	}
	if (d < a && d < b && d < c) {
		cout << "The smallest number amongst four is " << d << endl;
	}
	if (a > b && a > c && a > d) {
		cout << "The largest number amongst four is " << a << endl;
	}
	if (b > a && b > c && b > d) {
		cout << "The largest number amongst four is " << b << endl;

	}
	if (c > a && c > b && c > d) {
		cout << "The largest number amongst four is " << c << endl;
	}
	if (d > a && d > b && d > c) {
		cout << "The largest number amongst four is " << d << endl;
	}
	
}

int main() {
	int num1, num2, num3, num4;
	cout << "Enter 4 positive numbers     : " ;
	cin >> num1>> num2>> num3>> num4;
	cout << endl << "*****************************************************" << endl;
	comparison(num1, num2);
	cout << endl << "*****************************************************" << endl;
	comparison(num1, num2, num3);
	cout << endl << "*****************************************************" << endl;
	comparison(num1, num2, num3, num4);

	return 0;
}