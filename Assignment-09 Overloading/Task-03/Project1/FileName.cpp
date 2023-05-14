#include <iostream> 
using namespace std; 

int Sum(int N) {

int S = 0;

if (N == 1)

{

	return 1;

}

else {

	return N + Sum(N - 1);

}

}

void main()

{

	int N;

	cout << "Enter any number: ";

	cin >> N;

	cout << "Sum of first "<<N<<" numbers = "
	<< Sum(N);

}