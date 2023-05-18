#include <iOStream>
#include <string>
using namespace std;



int main() {

	struct triangle {
		int p1, p2, p3;
	};
	triangle obj;
	cout << "Enter Point 1" << endl;
	cin >> obj.p1;
	cout << "Enter Point 2" << endl;
	cin >> obj.p2;
	cout << "Enter Point 3" << endl;
	cin >> obj.p3;

	if ((obj.p1 * obj.p1) == (obj.p2 * obj.p2) + (obj.p3 * obj.p3) ||
		(obj.p2 * obj.p2) == (obj.p1 * obj.p1) + (obj.p3 * obj.p3) ||
		(obj.p3 * obj.p3) == (obj.p1 * obj.p1) + (obj.p2 * obj.p2)) {
		cout << obj.p1 << " " << obj.p2 << " " << obj.p3 << " are points of a right angeled triangle" << endl;

	}
	else {
		cout << obj.p1 << " " << obj.p2 << " " << obj.p3 << " are not points of a right angeled triangle" << endl;
	}

	
	return 0;
}