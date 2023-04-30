#include <iostream>
using namespace std;

int factorial(int a) {
    int x=1;
    for (int i = 1; i <= a; i++) {
        x = x * i;
    }
    return x;

}
int main() {
    int n;
    char option;
    do
    {
        cout << "Enter a positive number " << endl;
        cin >> n;

        if (n < 0) {
            cout << "You entered a negative number " << endl;
        }
        else if (n == 0) {
            cout << "Your factorial is = 0" << endl;
        }
        else {
            cout << "Your factorial is = " << factorial(n) << endl;
        }
        cout << "Press f to find the factorial of another number or any other key to exit" << endl;
        cin >> option;
    } while (option == 'f');

    return 0;
}