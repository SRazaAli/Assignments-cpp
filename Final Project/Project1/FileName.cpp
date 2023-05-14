#include<iostream>
#include<string>
using namespace std;

int main() {
	char mainChoice, choice1, loopChoice, choice2, choice3, choice4, choice5, shopingChoice;
	string size[100], item[100];
	int i = 0, price[100];

	do
	{
		cout << "Press 1 to Enter Customer mode" << endl
			<< "Press 2 to Enter Staff mode" << endl;
		cin >> mainChoice;
		if (mainChoice == '1') {




			cout << "Press 1 to buy an item" << endl
				<< "Press 2 to fill feedback form" << endl
				<< "Press 3 to show our privacy policy" << endl
				<< "Press 4 to show about us" << endl;
			cin >> choice1;


			if (choice1 == '1') {
				cout << "=====================================================================" << endl;
				cout << "Press 1 for Women Section" << endl
					<< "Press 2 for Men Section" << endl
					<< "Press 3 for Kids Section" << endl;
				cin >> choice2;

				if (choice2 == '1') {
					cout << "Press 1 to buy three piece suit" << endl
						<< "Press 2 to buy two piece suit" << endl
						<< "Press 3 to buy one piece suit" << endl
						<< "Press 4 to buy shoes " << endl
						<< "Press 5 to buy jeans" << endl;
					cin >> choice3;

					if (choice3 == '1') {
						item[i] = "Three piece suit";
						price[i] = 15000;
						cout << "Price of three piece suit is Rs 15000" << endl <<
							"Select size of the three piece suit" << endl
							<< "Press S for small" << endl
							<< "Press M for medium" << endl
							<< "Press L for large" << endl;
						cin >> choice4;
						if (choice4 == 's' || choice4 == 'S') {
							size[i] = "small";
							i = i + 1;
							cout << "Your purchase for three piece suit in small size was succcessful :)" << endl;
						}
						if (choice4 == 'm' || choice4 == 'M') {
							size[i] = "medium";
							i = i + 1;
							cout << "Your purchase for three piece suit in medium size was succcessful :)" << endl;

						}
						if (choice4 == 'l' || choice4 == 'L') {
							size[i] = "large";
							i = i + 1;
							cout << "Your purchase for three piece suit in large size was succcessful :)" << endl;

						}
					}

					else if (choice3 == '2') {
						item[i] = "Two piece suit";
						price[i] = 20000;
						cout << "Price of three piece suit is Rs 20000" << endl <<
							"Select size of the three piece suit" << endl
							<< "Press S for small" << endl
							<< "Press M for medium" << endl
							<< "Press L for large" << endl;
						cin >> choice5;
						if (choice5 == 's' || choice5 == 'S') {
							size[i] = "small";
							i = i + 1;
							cout << "Your purchase for two piece suit in small size was succcessful :)" << endl;
						}
						if (choice5 == 'm' || choice5 == 'M') {
							size[i] = "medium";
							i = i + 1;
							cout << "Your purchase for two piece suit in medium size was succcessful :)" << endl;

						}
						if (choice5 == 'l' || choice5 == 'L') {
							size[i] = "large";
							i = i + 1;
							cout << "Your purchase for two piece suit in large size was succcessful :)" << endl;

						}
					}
					else if (choice3 == '3') {
						//one piece suit
					}
					else if (choice3 == '4') {
						//shoes
					}
					else if (choice3 == '5') {
						//jeans
					}
				}

				else if (choice2 == '2') {
					//Men section
				}

				else if (choice2 == '3') {
					//kids section
				}

				else if (choice2 == '4') {
					//about us
				}

				else {
					cout << "Invalid choice :(" << endl;
				}
			}


			else if (choice1 == '2') {
				//Feedback form
			}

			else if (choice1 == '3') {
				//Privacy policy
			}

			else if (choice1 == '4') {
				//about us
			}
		}

		for (int j = 0; j < i; j++) {
			cout << item[j] << " " << size[j] << " " << price[j] << endl;
		}

		cout << "Press 0 to return to the main menu or any other key to exit" << endl;
		cin >> loopChoice;
	} while (loopChoice == '0');







	return 0;
}


//
//int CustomerMode();
//int shopping();
//int WomenSection();
//int MenSection();
//int main()
//{
//	int CustomerMode(void);
//	int mode;
//
//	cout << endl;
//	cout << "                       /| |'''  |''     /| |'''" << endl;
//	cout << "                      / | |   | |  '   / | |   | " << endl;
//	cout << "                     /_| |---  |   '/  | |---  " << endl;
//	cout << "                    /   | |   | |        | |   | " << endl;
//	cout << endl << "****** Welcome to ARMR Clothing Brand *******" << endl;
//	cout << "----------------------------  Main Menu  ----------------------------" << endl;
//	cout << endl;
//start:
//	cout << "1. Customer Mode" << endl;
//	cout << "2. Employee Mode" << endl;
//	cin >> mode;
//	cout << "=====================================================================" << endl;
//
//	//Customer Mode
//	if (mode == 1)
//	{
//		CustomerMode();
//	}
//	//Employee Mode
//	if (mode == 2)
//	{
//		cout << "wait";
//	}
//	else
//	{
//		cout << "=====================================================================" << endl;
//		cout << "Wrong choice" << endl;
//		goto start;
//	}
//
//}
//int CustomerMode()
//{
//	int choice;
//	cout << "1. Shopping" << endl;
//	cout << "2. About Us" << endl;
//	cout << "3. Privacy Policy" << endl;
//	cout << "4. Feedback Form" << endl;
//	cout << "5. Exit" << endl;
//	cin >> choice;
//	if (choice == 1)
//	{
//		int totalamount = shopping();
//	}
//	return 0;
//}



//int shopping()
//{
//	int choice;
//	cout << "=====================================================================" << endl;
//	cout << "1. Women Section" << endl;
//	cout << "2. Men Section" << endl;
//	cout << "3. Kids Section" << endl;
//	cout << "4. Discounts available on different sections" << endl;
//	cin >> choice;
//	if (choice == 1)
//	{
//		WomenSection();
//	}
//	if (choice == 2)
//	{
//		MenSection();
//	}
//	return 0;
//
//}
//int WomenSection()
//{
//	int choice, size, quantity;
//WomenSection:
//	cout << "=====================================================================" << endl;
//	cout << "1. Three piece suits" << endl;
//	cout << "2. Two piece suits" << endl;
//	cout << "3. One piece suits" << endl;
//	cout << "4. Shoes" << endl;
//	cout << "5. Jeans" << endl;
//
//	cin >> choice;
//	if (choice == 1)
//	{
//		cout << "=====================================================================" << endl;
//		cout << "1. Small size" << endl;
//		cout << "2. Medium size" << endl;
//		cout << "3. Large size" << endl;
//		cin >> size;
//		if (size == 1)
//		{
//			cout << "Price = 15000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			int billamount = quantity * 15000;
//			cout << "Bill Amount = " << billamount << endl;
//		}
//		if (size == 2)
//		{
//			cout << "Price = 15000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			int billamount = quantity * 15000;
//			cout << "Bill Amount = " << billamount << endl;
//		}
//		if (size == 3)
//		{
//			cout << "Price = 15000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			int billamount = quantity * 15000;
//			cout << "Bill Amount = " << billamount << endl;
//		}
//	}
//	if (choice == 2)
//	{
//		cout << "=====================================================================" << endl;
//		cout << "1. Small size" << endl;
//		cout << "2. Medium size" << endl;
//		cout << "3. Large size" << endl;
//		cin >> size;
//		if (size == 1)
//		{
//			cout << "Price = 10000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			cout << "Bill Amount = " << quantity * 10000 << endl;
//		}
//		if (size == 2)
//		{
//			cout << "Price = 10000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			int billamount = quantity * 10000;
//			cout << "Bill Amount = " << billamount << endl;
//		}
//		if (size == 3)
//		{
//			cout << "Price = 10000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			int billamount = quantity * 10000;
//			cout << "Bill Amount = " << billamount << endl;
//		}
//	}
//	if (choice == 3)
//	{
//		cout << "=====================================================================" << endl;
//		cout << "1. Small size" << endl;
//		cout << "2. Medium size" << endl;
//		cout << "3. Large size" << endl;
//		cin >> size;
//		if (size == 1)
//		{
//			cout << "Price = 5000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			cout << "Bill Amount = " << quantity * 5000 << endl;
//		}
//		if (size == 2)
//		{
//			cout << "Price = 5000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			int billamount = quantity * 5000;
//			cout << "Bill Amount = " << billamount << endl;
//		}
//		if (size == 3)
//		{
//			cout << "Price = 5000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			int billamount = quantity * 5000;
//			cout << "Bill Amount = " << billamount << endl;
//		}
//	}
//	if (choice == 4)
//	{
//		cout << "=====================================================================" << endl;
//		cout << "1. Small size" << endl;
//		cout << "2. Medium size" << endl;
//		cout << "3. Large size" << endl;
//		cin >> size;
//		if (size == 1)
//		{
//			cout << "Price = 5000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			cout << "Bill Amount = " << quantity * 5000 << endl;
//		}
//		if (size == 2)
//		{
//			cout << "Price = 5000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			cout << "Bill Amount = " << quantity * 5000 << endl;
//		}
//		if (size == 3)
//		{
//			cout << "Price = 5000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			cout << "Bill Amount = " << quantity * 5000 << endl;
//		}
//	}
//	if (choice == 5)
//	{
//		cout << "=====================================================================" << endl;
//		cout << "1. Small size" << endl;
//		cout << "2. Medium size" << endl;
//		cout << "3. Large size" << endl;
//		cin >> size;
//		if (size == 1)
//		{
//			cout << "Price = 10000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			cout << "Bill Amount = " << quantity * 10000 << endl;
//		}
//		if (size == 2)
//		{
//			cout << "Price = 10000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			cout << "Bill Amount = " << quantity * 10000 << endl;
//		}
//		if (size == 3)
//		{
//			cout << "Price = 10000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			cout << "Bill Amount = " << quantity * 10000 << endl;
//		}
//	}
//	else
//	{
//		cout << "=====================================================================" << endl;
//		cout << "Wrong choice" << endl;
//		goto  WomenSection;
//	}
//	return 0;
//}
//int MenSection()
//{
//	int choice, size, quantity;
//MenSection:
//	cout << "=====================================================================" << endl;
//	cout << "1. Shirt" << endl;
//	cout << "2. Two piece suits" << endl;
//	cout << "3. One piece suits" << endl;
//	cout << "4. Shoes" << endl;
//	cout << "5. Jeans" << endl;
//
//	cin >> choice;
//	if (choice == 1)
//	{
//		cout << "=====================================================================" << endl;
//		cout << "1. Small size" << endl;
//		cout << "2. Medium size" << endl;
//		cout << "3. Large size" << endl;
//		cin >> size;
//		if (size == 1)
//		{
//			cout << "Price = 500" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			int billamount = quantity * 500;
//			cout << "Bill Amount = " << billamount << endl;
//		}
//		if (size == 2)
//		{
//			cout << "Price = 500" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			int billamount = quantity * 500;
//			cout << "Bill Amount = " << billamount << endl;
//		}
//		if (size == 3)
//		{
//			cout << "Price = 500" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			int billamount = quantity * 500;
//			cout << "Bill Amount = " << billamount << endl;
//		}
//	}
//	if (choice == 2)
//	{
//		cout << "=====================================================================" << endl;
//		cout << "1. Small size" << endl;
//		cout << "2. Medium size" << endl;
//		cout << "3. Large size" << endl;
//		cin >> size;
//		if (size == 1)
//		{
//			cout << "Price = 10000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			cout << "Bill Amount = " << quantity * 10000 << endl;
//		}
//		if (size == 2)
//		{
//			cout << "Price = 10000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			int billamount = quantity * 10000;
//			cout << "Bill Amount = " << billamount << endl;
//		}
//		if (size == 3)
//		{
//			cout << "Price = 10000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			int billamount = quantity * 10000;
//			cout << "Bill Amount = " << billamount << endl;
//		}
//	}
//	if (choice == 3)
//	{
//		cout << "=====================================================================" << endl;
//		cout << "1. Small size" << endl;
//		cout << "2. Medium size" << endl;
//		cout << "3. Large size" << endl;
//		cin >> size;
//		if (size == 1)
//		{
//			cout << "Price = 5000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			cout << "Bill Amount = " << quantity * 5000 << endl;
//		}
//		if (size == 2)
//		{
//			cout << "Price = 5000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			int billamount = quantity * 5000;
//			cout << "Bill Amount = " << billamount << endl;
//		}
//		if (size == 3)
//		{
//			cout << "Price = 5000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			int billamount = quantity * 5000;
//			cout << "Bill Amount = " << billamount << endl;
//		}
//	}
//	if (choice == 4)
//	{
//		cout << "=====================================================================" << endl;
//		cout << "1. Small size" << endl;
//		cout << "2. Medium size" << endl;
//		cout << "3. Large size" << endl;
//		cin >> size;
//		if (size == 1)
//		{
//			cout << "Price = 5000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			cout << "Bill Amount = " << quantity * 5000 << endl;
//		}
//		if (size == 2)
//		{
//			cout << "Price = 5000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			cout << "Bill Amount = " << quantity * 5000 << endl;
//		}
//		if (size == 3)
//		{
//			cout << "Price = 5000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			cout << "Bill Amount = " << quantity * 5000 << endl;
//		}
//	}
//	if (choice == 5)
//	{
//		cout << "=====================================================================" << endl;
//		cout << "1. Small size" << endl;
//		cout << "2. Medium size" << endl;
//		cout << "3. Large size" << endl;
//		cin >> size;
//		if (size == 1)
//		{
//			cout << "Price = 10000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			cout << "Bill Amount = " << quantity * 10000 << endl;
//		}
//		if (size == 2)
//		{
//			cout << "Price = 10000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			cout << "Bill Amount = " << quantity * 10000 << endl;
//		}
//		if (size == 3)
//		{
//			cout << "Price = 10000" << endl;
//			cout << "Quantity = ";
//			cin >> quantity;
//			cout << "Bill Amount = " << quantity * 10000 << endl;
//		}
//	}
//	else
//	{
//		cout << "=====================================================================" << endl;
//		cout << "Wrong choice" << endl;
//		goto  MenSection;
//	}
//	return 0;
//}