#include <iOStream>
#include <string>
using namespace std;



int main() {
	

	struct bookRec {
		string title;
		string author;
		string publisher;
		float price;
	};
	bookRec obj[3];

	for (int i = 0; i < 3; i++) {
		cout << "Enter the title of the book" << endl;
		cin >> obj[i].title;
		cout << "Enter the author of the book" << endl;
		cin >> obj[i].author;
		cout << "Enter the name of the publisher" << endl;
		cin >> obj[i].publisher;
		cout << "Enter the price of the Book" << endl;
		cin >> obj[i].price;
	}

	for (int i = 0; i < 3; i++) {
		cout << endl << "***********" << endl;
		cout << "Title: ";
		cout << obj[i].title << endl;;
		cout << "Author: ";
		cout << obj[i].author << endl;
		cout << "Publisher: ";
		cout << obj[i].publisher << endl;
		cout << "Price: $";
		cout << obj[i].price << endl;

	}


	
	return 0;
}