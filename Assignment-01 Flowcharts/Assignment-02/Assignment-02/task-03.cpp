#include <iOStream>
#include <string>
using namespace std;


int main() {

	string std_name;
	int std_rollno ;
	float marksOfCP, marksOfICT, marksOfDS;

	cout << "Enter your name:";
	cin >> std_name;

	cout << "Enter your roll no:" << endl;
	cin >> std_rollno;

	cout << "Enter Computer Programming(CP) marks:" << endl;
	cin >> marksOfCP;

	cout << "Enter Intoduction to Communication Technologies(ICT) marks:" << endl;
	cin >> marksOfICT;

	cout << "Enter Data Science(DS) marks:" << endl;
	cin >> marksOfDS;

	int obtainedMarks = marksOfCP + marksOfICT + marksOfDS;
	float Percentage = ((marksOfCP + marksOfICT + marksOfDS) / 300) * 100;

	cout << "Student name = " << std_name << endl <<
		"Student Roll no = " << std_rollno << endl <<
		"Total marks = 300" << endl <<
		"Obtained Marks = " << obtainedMarks << endl <<
		"Percentage = " << Percentage;


	return 0;
}