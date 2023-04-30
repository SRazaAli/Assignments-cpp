#include <iOStream>
#include <string>
using namespace std;

int main() {

	int yearOfBirth;
	string username, uni_name, hobby, pet_name;
	
	cout << "What is your name? : ";
	cin >> username;

	cout << "Enter year of birth : ";
	cin >> yearOfBirth;

	cout << "Name of University : ";
	cin >> uni_name;

	cout << "Favourite hobby : ";
	cin >> hobby;

	cout << "Pet's name : ";
	cin >> pet_name;

	int age = 2023 - yearOfBirth;
	int ageInDays = (2022 - yearOfBirth) * 60 + 11;
	cout << "There lives a person named " << username << " who is currently " << age << " years and "
		<< ageInDays << " days old. " << username << " is studying at " << uni_name << ". " 
		<< username << " likes " << hobby << " and also have a pet named " << pet_name << 
		". They often play together and live happily!";

	return 0;
}