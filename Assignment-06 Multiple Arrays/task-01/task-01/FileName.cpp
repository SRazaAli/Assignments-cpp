#include <iOStream>
using namespace std;

int main() {

	int arr[3][3];
	int sum = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Enter the value of index no : " << i << j<<endl;
			cin >> arr[i][j];
		}
	}

	cout << "----------------------------------" << endl;
	cout << "Your array is " << endl;
	for (int i = 0; i < 3;i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "----------------------------------"<<endl;

	for (int i = 0; i < 3; i++)
	{
	for (int j = 0; j < 3; j++)
	{
		sum = sum + arr[i][j];
	}
	cout << "The sum of row " << i << " = " << sum << endl;
	sum = 0;
	}

	

	

}