#include <iOStream>
using namespace std;

int main() {

	int arr[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Enter the value of position " << i << j << endl;
			cin >> arr[i][j];
		}
	}

	cout << "Your array " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "------------------------------------------------" << endl;
	int searchElement;
	cout << "Enter the Element you want to search" << endl;
	cin >> searchElement;

	bool flag = false;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == searchElement) {
				cout << "Element found at Position : " << i << j<<endl;
				flag = true;
			}
		}
	}

	if (flag == false) {
		cout << "Element doesnt exist" << endl;

	}
	return 0;
}