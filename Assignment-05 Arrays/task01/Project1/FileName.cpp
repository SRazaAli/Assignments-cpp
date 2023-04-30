#include <iOStream>
using namespace std;

int main() {
	
	int arr[5];
	int i;
	for (i = 0; i < 5; i++) {
		cout << "Enter the value of index no: " << i << endl;
		cin >> arr[i];
	}
	cout << "Elements of original array = ";
	for (int j = 0; j < 5; j++) {
		cout << arr[j] << " , ";
	}
	
	int temp;
	for (int l = 0; l < 5; l++) {
		for (int k = 0; k < 5-1; k++) {
			if (arr[k] > arr[k + 1]) {
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}

		}
	}
	cout << endl;
	cout << "Elements of Array in ascending order = ";
	for (int m = 0; m < 5; m++) {
		cout << arr[m] << " , ";
	}

	return 0;
}