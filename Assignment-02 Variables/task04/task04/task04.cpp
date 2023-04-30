#include <iOStream>
using namespace std;

int main() {

	float a,b;
	
	cout << "Enter a: " << endl;
	cin >> a;

	cout << "Enter b: " << endl;
	cin >> b;

	float  x = (a + b) * (a + b);

	cout << "X = " << x;

	return 0;
}