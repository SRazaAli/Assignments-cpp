#include <iOStream>
using namespace std;

int f(int a) {
	int factorial = 1;
	for (int i = 1; i <= a; i++) {
		factorial = factorial * i;
	}
	return factorial;
}
int main() {
	int a;
	cout << "Enter the number to find the factorial" << endl;
	cin >> a;
	cout << "The factorial of " << a << " is " << f(a);
}
