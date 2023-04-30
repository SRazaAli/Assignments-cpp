#include <iOStream>
#include <cmath>
using namespace std;

int main() {

	float x, y, h, a;

	cout << "Enter x : ";
	cin >> x;
	
	cout << "Enter y : ";
	cin >> y;

	h = sqrt(pow(x, 2) + (y, 2));
	a = 0.5 * x * y;


	cout << "Hypotenuse = " << h <<endl;
	cout << "Area of triangle = " << a;

	return 0;
}