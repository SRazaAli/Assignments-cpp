#include <iOStream>
using namespace std;

int main() {

	int arr[100], n;
	cout << "Enter the number of elements of array: ";
	cin >> n;

	/*for (int i = 0; i < n; i++) {
		cout << "Enter the element of index no: " << i;
		cin >> arr[i];
	}*/

	int i;
	for ( i = 0; i < n; i++) {
		cout << "Enter the element of index no " << i << " : ";
		cin >> arr[i];
		
		 if (arr[i] == 0) {
			cout << "Program terminated because you enetered 0";
			break;
		}
	}
	cout << endl;
	int updated_n = i;
	
	cout << "Array of the entered elements = ";
	
	for (int l = 0; l < i; l++) {
		cout << arr[l] << " ";
	}


	return 0;
}