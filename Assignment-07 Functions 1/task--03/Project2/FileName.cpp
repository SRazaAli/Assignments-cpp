#include <iOStream>
using namespace std;

string print(int age) {
	if (age >= 18) {
		string str = "You are eligible to vote";
		return str;
	}
	else {
		string str = "You are not eligible to vote";
		return str;
	}
}
int main() {
	int age;
	cout << "Enter your age" << endl;
	cin >> age;
	cout << print(age);
}