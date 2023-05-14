#include <iOStream>
using namespace std;

int myPower(int a,int b) {
	int c = pow(a, b);
	return c;
}

int main() {
	int a, b;
	cout << "Enter a base" << endl;
	cin >> a;
	cout << "Enter a power" << endl;
	cin >> b;
	cout << "The power " << b << " to your base " << a << " is " << myPower(a,b);


	return 0;
}