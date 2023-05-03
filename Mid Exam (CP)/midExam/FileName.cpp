#include <iOStream>
using namespace std;

int main() {
	char option, choice, voteChoice;
	int candidateA = 0;
	int candidateB = 0; 
	int candidateC = 0;
	
	do
	{
		cout << "Press 1 to vote for a candidate" << endl
			<< "Press 2 to show votes" << endl
			<< "Press 3 to show winner" << endl;
		cin >> choice;

		if (choice == '1') {
			cout << "Press a to vote for candidate a" << endl
				<< "Press b to vote for candidate b" << endl
				<< "Press c to vote for candidate c" << endl;
			cin >> voteChoice;
			if (voteChoice == 'a') {
				candidateA = candidateA + 1;
			}
			else if (voteChoice == 'b') {
				candidateB = candidateB + 1;
			}
			else if (voteChoice == 'b') {
				candidateC = candidateC + 1;
			}
		}
		else if (choice == '2') {
			cout << "The votes of candidate a are = " << candidateA << endl
				<< "The votes of candidate b are = " << candidateB << endl
				<< "The votes of candidate c are = " << candidateC;
		}
		else if (choice == '3') {
			if (candidateA > candidateB && candidateA > candidateC) {
				cout << "Candidate a has the highest votes" << endl;
			}
			else if (candidateB > candidateA && candidateB > candidateC) {
				cout << "Candidate b has the highest votes" << endl;

			}
			else if (candidateC > candidateA && candidateC > candidateB) {
				cout << "Candidate c has the highest votes" << endl;

			}
			else if (candidateA == candidateB) {
				cout << "No winner" << endl;
			}
			else if (candidateB == candidateC) {
				cout << "No winner" << endl;
			}
			else if (candidateC == candidateA) {
				cout << "No winner" << endl;
			}
		}
		else {
			cout << "Invalid output" << endl;
		}
		cout << "Press y to continue or any other key to exit" << endl;
		cin >> option;
	} while (option == 'y');
}