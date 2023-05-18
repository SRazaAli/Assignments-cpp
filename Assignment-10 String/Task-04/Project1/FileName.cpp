#include <iostream>
#include <string>
using namespace std;


int main()
{

	string string1 ;
	string string2 = "";
	cout << "Enter a string: " ;
	getline(cin, string1);
	cout << "string1 before copying = " << string1 << endl
		<< "string2 before copying = " << string2<<endl;

	string2 = string1;

	cout << "string1 after copying = " << string1 << endl
		<< "string2 after copying = " << string2<<endl;

	return 0;
}