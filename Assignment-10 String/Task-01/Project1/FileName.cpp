#include <iostream>
#include <string>
using namespace std;


int main() {

	
	int c = 0;
	bool flag = false;
	char  searchElement;
	string input;
	cout << "Enter a string ";
	cin >> input;
	cout << "Entrer the alphabet you want to search ";
	cin >> searchElement;
	for (int i = 0; i<= input.length()-1; i++){
		if (input[i] == searchElement){
			c = c + 1;
			flag = true;
		}
	}
	if (flag == true){
		cout << "alphabet found! occurences are " << c<<endl;
	}
	else{
		cout << "alphabet doesn't exist" << endl;
	}

	
	return 0;
}