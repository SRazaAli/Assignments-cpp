#include <iOStream>
#include <string>
using namespace std;

string output(int total) {
	if (total > 1000) {
		string str = "As your total is greater than 1000, so you will get free delivery";
		return str;

	}
	else {
		string str = "Your total is less than 1000, so a fees of 150 will be charged";
		return str;
	}
}
int main() {
	int total;
	cout << "Enter the total amount" << endl;
	cin >> total;
	cout << output(total);
}