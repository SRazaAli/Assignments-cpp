#include <iOstream>
using namespace std;


string  vote(int a) {

	if (a >= 18) {
		string	 eligible = "You are eligible to vote";
		return eligible;
	}
	else {
		string nonEligible = "You are not eligible to vote as you are under age";
		return nonEligible;
	}

}
int main() {
	int age;
	cout << "Enter your age" << endl;
	cin >> age;
	cout << vote(age);
	return 0;
}