#include <iOStream>
#include <cmath>
using namespace std;


int add(int a,int b){
	int c = a+b;
	return c;
}
int sub(int a,int b){
	int c = a-b;
	return c;
}
int mul(int a,int b){
	int c = a*b;
	return c;
}
int divide(int a,int b){
	int c = a/b;
	return c;
}
int power(int a, int b) {
	int c = pow(a, b);
	return c;
}


int main(){
	int a,b;
	cout << "Enter a"<<endl;
	cin >>a;
	cout << "Enter b"<<endl;
	cin >>b;
	cout <<"The sum of " <<a<<" and "<<b<<" is "<<add(a,b)<<endl;
	cout <<"The sub of " <<a<<" and "<<b<<" is "<<sub(a,b)<<endl;
	cout <<"The mul of " <<a<<" and "<<b<<" is "<<mul(a,b)<<endl;
	cout <<"The div of " <<a<<" and "<<b<<" is "<<divide(a,b)<<endl;
	cout << "The power of " << a << " to " << b << " is " << power(a, b) << endl;
	
}








//Task---06
//int main() {
//	int choice, num1, num2;
//	cout << "Press 1 to swap two numbers" << endl
//		<< "Press 2 to find weather the number is prime or not" << endl
//		<< "Press 3 to find weather the number is even or odd" << endl;
//	cin >> choice;
//	if (choice == 1) {
//		cout << "Enter a number " << endl;
//		cin >> num1;
//		cout << "Enter another number " << endl;
//		cin >> num2;
//		int temp;
//		temp = num1;
//		num1 = num2;
//		temp = num2;
//		cout << "Numbers before swapping are " << num1 << " and " << num2;
//		cout << "Numbers after swapping are " << num1 << " and " << num2;
//	}
//	else if (choice == 2) {
//		int num3;
//		bool flag = true;
//		cout << "Enter a number" << endl;
//		cin >> num3;
//		for (int i = 2; i < num3; i++) {
//			if (a % num3 == 0) {
//				flag = false;
//				break;
//			}
//		}
//		if (flag == true) {
//			cout << "The number is prime" << endl;
//		}
//	}
//	else if (choice == 3) {
//		int num4;
//		if (num4 % 2 == 0) {
//			cout << "The number is even" << endl;
//
//		}
//		else {
//			cout << "The number is odd" << endl;
//		}
//	}
//}