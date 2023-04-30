#include <iostream>
using namespace std;

int main() {
    int arr[100], n, search_element, location = -1;

    cout << "Enter the number of elements in array: ";
    cin >> n;

    
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to be searched: ";
    cin >> search_element;


    for (int i = 0; i < n; i++) {
        if (arr[i] == search_element) {
            location = i;
            break;
        }
    }

    
    if (location == -1) {
        cout << "Element not found in the array." << endl;
    }
    else {
        cout << "Element found at index " << location << " in the array." << endl;
    }

    return 0;
}