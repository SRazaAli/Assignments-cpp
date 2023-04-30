#include <iOStream>
using namespace std;

int main() {

	int arr[10];

	for (int i = 0; i < 10; i++) {
		cout << "Enter the value of index no: " << i << " : ";
		cin >> arr[i];
	}

	cout << endl << "Original array = ";
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl << "Reversed array = ";
	for (int i = 9
		; i > 0; i--) {
		cout << arr[i] << " ";
	}

	return 0;
}