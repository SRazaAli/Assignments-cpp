#include <iOStream>
#include <string>
using namespace std;

int main() {

	string std_name;
	int std_rol, marksOfCP, marksOfICT, marksOfDS;

	cout << "Enter your name: " << endl;
	cin >> std_name;

	cout << "Enter your rol no: " << endl;
	cin >> std_rol;

	cout << "Enter marks of Computer Programming(CP): " << endl;
	cin >> marksOfCP;

	cout << "Enter marks of ICT: " << endl;
	cin >> marksOfICT;
	
	cout << "Enter marks of Data Science: " << endl;
	cin >> marksOfDS;

	float obtainedMarks = marksOfCP + marksOfICT + marksOfDS;
	float percentage = (obtainedMarks / 300) * 100;

	cout << "Total Marks = " << obtainedMarks << endl
		<< "Percentage = " << percentage << "%";

	return 0;
}