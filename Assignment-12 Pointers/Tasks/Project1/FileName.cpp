#include <iOStream>
#include <string>
using namespace std;


void swap(string* ptr_a, string* ptr_b) {
	cout << "Strings before swapping are : " << endl << *ptr_a << endl << *ptr_b << endl;
	string temp;
	temp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = temp;
	cout << "Strings after swapping are : " << endl << *ptr_a << endl << *ptr_b << endl;
}
void bubbleSort(int* arr, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (*(arr + j) > *(arr + j + 1)) {
				// Swap the elements
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
}


void printArray(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
}
void print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << " , ";
	}
}

int main() {
	char choice;
	cout << "Press 1 to perform Task 01" << endl
		<< "Press 2 to perform Task 02" << endl
		<< "Press 3 to perform Task 02" << endl;
	cin >> choice;

	if (choice == '1') {
		string a, b;
		string* ptr_a = &a, * ptr_b = &b;
		cout << "Enter a string" << endl;
		cin.ignore();
		getline(cin, a);
		cout << "Enter another string" << endl;
		getline(cin, b);
		swap(ptr_a, ptr_b);
	}
	else if (choice == '2') {
		string a;
		string* ptr_a = &a;
		cout << "Enter a string" << endl;
		cin.ignore();
		getline(cin, *ptr_a);
		int b = a.length();
		cout << "The length of the entered string is " << b;

	}
	else if (choice == '3') {
		int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
		int size = sizeof(arr) / sizeof(arr[0]);

		cout << "Original array: ";
		printArray(arr, size);

		bubbleSort(arr, size);

		cout << "Sorted array: ";
		printArray(arr, size);


	}
}