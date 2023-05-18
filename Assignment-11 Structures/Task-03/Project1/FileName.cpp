#include <iOStream>
#include <string>
using namespace std;

struct employee {
	string name;
	int number;
	int salary;
	string designation;
};
employee obj[3];

void output(employee obj[3]) {

	for (int i = 0; i < 3; i++) {
		cout << "************" << endl;
		cout << "Name: " << endl;
		cout << obj[i].name;
		cout << "Number" << endl;
		cout << obj[i].number;
		cout << "Salary" << endl;
		cout << obj[i].salary;
		cout << "Designation" << endl;
		cout << obj[i].designation << endl;;
	}
}
int main() {
	
	for (int i = 0; i < 3; i++) {
		cout << "Enter the name of the Employee" << endl;
		cin >> obj[i].name;
		cout << "Enter the Number of the Employee" << endl;
		cin >> obj[i].number;
		cout << "Enter the salary of the employee" << endl;
		cin >> obj[i].salary;
		cout << "Enter the designation of the employee" << endl;
		cin >> obj[i].designation;
	}

	output(obj);
	return 0;
}