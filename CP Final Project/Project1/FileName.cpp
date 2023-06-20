#include<iOStream>
#include<string>
#include <fstream>
using namespace std;

										//Used variables
	//for customer mode
	char mainChoice, choice1, sectionChoice, womenChoice, menChoice, kidChoice, loopChoice;
	int itemTotal = 0;


	//for Staff mode
	string loginID, loginPassword, productSearch;	
	ifstream productsIn; ofstream productsOut;
	char staffChoice;												//bill styling 

	//structure of the order
	struct order {
		string size;
		string itemName;
		int price = 0;
	};
	order obj[10];int i = 0;
	int feedbackCounter = 1;



	void saveFeedback(string name, string email, string feedback,int counter) {
		ifstream feedbackIn("feedback.txt");
		ofstream feedbackOut("feedback.txt", ios::app);
			feedbackOut << "============================================" <<endl
					<< "            Feedback : "<<counter<<endl
				<<    "============================================"
				<<endl<<"Name: " << name << endl << "Email: " << email 
				<< endl << "Feedback: " << feedback << endl;
			feedbackIn.close();
			cout << "Thank you for your feedback!" << endl;

		
	}
	void womenSection() {
		//Women Section
		cout << "============================================" << endl
			<< "               Women Section" << endl
			<< "============================================" << endl;
		cout << "Press 1 to buy three piece suit" << endl <<
			"Press 2 to buy two piece suit" << endl <<
			"Press 3 to buy one piece suit" << endl <<
			"Press 4 to buy shoes " << endl <<
			"Press 5 to buy jeans" << endl;
		cin >> womenChoice;

		if (womenChoice == '1') {
			//Three piece suit
			cout << "============================================" << endl
				<<  "            Three Piece Suit" << endl
				<<  "============================================" << endl;
			obj[i].itemName = "Three piece suit";
			obj[i].price = 20000;
			cout << "Price of three piece suit is Rs 20000" << endl <<
				"Select size of the three piece suit" << endl <<
				"Press S for small" << endl <<
				"Press M for medium" << endl <<
				"Press L for large" << endl;
			cin >> womenChoice;
			if (womenChoice == 's' || womenChoice == 'S') {
				obj[i].size = "small";
				i = i + 1;
				cout << "Your purchase for three piece suit in small size was succcessful :)" << endl;
			}
			if (womenChoice == 'm' || womenChoice == 'M') {
				obj[i].size = "medium";
				i = i + 1;
				cout << "Your purchase for three piece suit in medium size was succcessful :)" << endl;

			}
			if (womenChoice == 'l' || womenChoice == 'L') {
				obj[i].size = "large";
				i = i + 1;
				cout << "Your purchase for three piece suit in large size was succcessful :)" << endl;

			}
		}
		else if (womenChoice == '2') {
			//Two piece suit
			cout << "============================================" << endl
				<<  "               Two Piece Suit" << endl
				<<  "============================================" << endl;
			obj[i].itemName = "Two piece suit";
			obj[i].price = 15000;
			cout << "Price of Two piece suit is Rs 15000" << endl <<
				"Select size of the Two piece suit" << endl <<
				"Press S for small" << endl <<
				"Press M for medium" << endl <<
				"Press L for large" << endl;
			cin >> womenChoice;
			if (womenChoice == 's' || womenChoice == 'S') {
				obj[i].size = "small";
				i = i + 1;
				cout << "Your purchase for two piece suit in small size was succcessful :)" << endl;
			}
			if (womenChoice == 'm' || womenChoice == 'M') {
				obj[i].size = "medium";
				i = i + 1;
				cout << "Your purchase for two piece suit in medium size was succcessful :)" << endl;

			}
			if (womenChoice == 'l' || womenChoice == 'L') {
				obj[i].size = "large";
				i = i + 1;
				cout << "Your purchase for two piece suit in large size was succcessful :)" << endl;

			}
		}
		else if (womenChoice == '3') {
			//One piece suit
			cout << "============================================" << endl
				<< "               One Piece Suit" << endl
				<<  "============================================" << endl;
			obj[i].itemName = "One piece suit";
			obj[i].price = 10000;
			cout << "Price of One piece suit is Rs 10000" << endl <<
				"Select size of the One piece suit" << endl <<
				"Press S for small" << endl <<
				"Press M for medium" << endl <<
				"Press L for large" << endl;
			cin >> womenChoice;
			if (womenChoice == 's' || womenChoice == 'S') {
				obj[i].size = "small";
				i = i + 1;
				cout << "Your purchase for One piece suit in small size was succcessful :)" << endl;
			}
			if (womenChoice == 'm' || womenChoice == 'M') {
				obj[i].size = "medium";
				i = i + 1;
				cout << "Your purchase for One piece suit in medium size was succcessful :)" << endl;

			}
			if (womenChoice == 'l' || womenChoice == 'L') {
				obj[i].size = "large";
				i = i + 1;
				cout << "Your purchase for One piece suit in large size was succcessful :)" << endl;

			}
		}
		else if (womenChoice == '4') {
			//shoes
			cout << "============================================" << endl
				<<  "                  Shoes" << endl
				<<  "============================================" << endl;
			cout << "1. Nike Airmax 90 SE" << endl <<
				"2. Nike AirForce 1" << endl <<
				"3. Converse High" << endl <<
				"4. Reebok Club-C Mid" << endl;
			cin >> womenChoice;
			if (womenChoice == '1') {
				//Nike Airmax 90 SE
				cout << "============================================" << endl
					<<  "             Nike Airmax 90 SE" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Nike Airmax 90 SE";
				obj[i].price = 18000;
				cout << "Price of Nike Airmax 90 SE is Rs 18000" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> womenChoice;
				if (womenChoice == 's' || womenChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Nike Airmax 90 SE in small size was succcessful :)" << endl;
				}
				if (womenChoice == 'm' || womenChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Nike Airmax 90 SE in medium size was succcessful :)" << endl;

				}
				if (womenChoice == 'l' || womenChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Nike Airmax 90 SE in large size was succcessful :)" << endl;

				}
			}
			else if (womenChoice == '2') {
				//Nike AirForce 1
				cout << "============================================" << endl
					<<  "              Nike Airforce 1" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Nike AirForce 1";
				obj[i].price = 16000;
				cout << "Price of Nike AirForce 1 is Rs 16000" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> womenChoice;
				if (womenChoice == 's' || womenChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Nike AirForce 1 in small size was succcessful :)" << endl;
				}
				if (womenChoice == 'm' || womenChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Nike AirForce 1 in medium size was succcessful :)" << endl;

				}

				if (womenChoice == 'l' || womenChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Nike AirForce 1 in large size was succcessful :)" << endl;

				}
			}
			else if (womenChoice == '3') {
				//Converse High
				cout << "============================================" << endl
					<<  "               Converse High" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Converse High";
				obj[i].price = 14000;
				cout << "Price of Converse High is Rs 14000" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> womenChoice;
				if (womenChoice == 's' || womenChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Converse High in small size was succcessful :)" << endl;
				}
				if (womenChoice == 'm' || womenChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Converse High in medium size was succcessful :)" << endl;

				}

				if (womenChoice == 'l' || womenChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Converse High in large size was succcessful :)" << endl;

				}
			}
			else if (womenChoice == '4') {
				//Reebok Club-C Mid
				cout << "============================================" << endl
					<<  "             Reebok Club-C Mid" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Reebok Club-C Mid";
				obj[i].price = 21000;
				cout << "Price of Reebok Club-C Mid is Rs 21000" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> womenChoice;
				if (womenChoice == 's' || womenChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Reebok Club-C Mid in small size was succcessful :)" << endl;
				}
				if (womenChoice == 'm' || womenChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Reebok Club-C Mid in medium size was succcessful :)" << endl;

				}

				if (womenChoice == 'l' || womenChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Reebok Club-C Mid in large size was succcessful :)" << endl;

				}
			}

		}
		else if (womenChoice == '5') {
			//jeans
			cout << "============================================" << endl
				<< "			       Jeans" << endl
				<<  "============================================" << endl;
			cout << "1. Blue Jeans" << endl <<
				"2. Black Jeans" << endl <<
				"3. Brown Jeans" << endl;
			cin >> womenChoice;
			if (womenChoice == '1') {
				//Blue Jeans
				cout << "============================================" << endl
					<<  "                Blue Jeans" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Blue Jeans";
				obj[i].price = 7000;
				cout << "Price of Blue Jeans is Rs 7000" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> womenChoice;
				if (womenChoice == 's' || womenChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Blue Jeans in small size was succcessful :)" << endl;
				}
				if (womenChoice == 'm' || womenChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Blue Jeans in medium size was succcessful :)" << endl;

				}
				if (womenChoice == 'l' || womenChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Blue Jeans in large size was succcessful :)" << endl;

				}
			}
			else if (womenChoice == '2') {
				//Black Jeans
				cout << "============================================" << endl
					<<  "               Black Jeans" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Black Jeans";
				obj[i].price = 8500;
				cout << "Price of Black Jeans is Rs 8500" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> womenChoice;
				if (womenChoice == 's' || womenChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Black Jeans in small size was succcessful :)" << endl;
				}
				if (womenChoice == 'm' || womenChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Black Jeans in medium size was succcessful :)" << endl;

				}

				if (womenChoice == 'l' || womenChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Black Jeans in large size was succcessful :)" << endl;

				}
			}
			else if (womenChoice == '3') {
				//Black Jeans
				cout << "============================================" << endl
					<<  "               Brown Jeans" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Brown Jeans";
				obj[i].price = 5750;
				cout << "Price of Brown Jeans is Rs 5750" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> womenChoice;
				if (womenChoice == 's' || womenChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Brown Jeans in small size was succcessful :)" << endl;
				}
				if (womenChoice == 'm' || womenChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Brown Jeans in medium size was succcessful :)" << endl;

				}

				if (womenChoice == 'l' || womenChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Brown Jeans in large size was succcessful :)" << endl;

				}
			}
		}
	}
	void menSection() {
		//Men section
		cout << "============================================" << endl
			<< "                Men Section" << endl
			<<  "============================================" << endl;
		cout << "Press 1 to buy Three Piece Suit" << endl <<
			"Press 2 to buy Watch" << endl <<
			"Press 3 to buy Shirt" << endl <<
			"Press 4 to buy shoes " << endl <<
			"Press 5 to buy jeans" << endl;
		cin >> menChoice;

		if (menChoice == '1') {
			//Suit
			cout << "============================================" << endl
				<<  "              Three Piece Suit" << endl
				<<  "============================================" << endl;
			obj[i].itemName = "Three Piece Suit";
			obj[i].price = 14500;
			cout << "Price of three piece suit is Rs 14500" << endl <<
				"Select size of the three piece suit" << endl <<
				"Press S for small" << endl <<
				"Press M for medium" << endl <<
				"Press L for large" << endl;
			cin >> menChoice;
			if (menChoice == 's' || menChoice == 'S') {
				obj[i].size = "small";
				i = i + 1;
				cout << "Your purchase for three piece suit in small size was succcessful :)" << endl;
			}
			if (menChoice == 'm' || menChoice == 'M') {
				obj[i].size = "medium";
				i = i + 1;
				cout << "Your purchase for three piece suit in medium size was succcessful :)" << endl;

			}
			if (menChoice == 'l' || menChoice == 'L') {
				obj[i].size = "large";
				i = i + 1;
				cout << "Your purchase for three piece suit in large size was succcessful :)" << endl;

			}
		}
		else if (menChoice == '2') {
			//Watch
			cout << "============================================" << endl
				<<  "                 Watches" << endl
				<<  "============================================" << endl;
			cout << "1. Rolex Sky-Dweller" << endl <<
				"2. Casio Men's Classic" << endl <<
				"3. Lactose Men's 2010763" << endl <<
				"4. Omega Seamaster Aqua Terra" << endl;

			cin >> menChoice;
			if (menChoice == '1') {
				//Rolex Sky-Dweller
				cout << "============================================" << endl
					<<  "            Rolex Sky-Dweller" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Rolex Sky-Dweller";
				obj[i].price = 4800;
				cout << "Price of Rolex Sky-Dweller is Rs 4800" << endl <<
					"Select the Color" << endl <<
					"Press B for Blue" << endl <<
					"Press O for Olive green" << endl <<
					"Press W for White" << endl;
				cin >> menChoice;
				if (menChoice == 'b' || menChoice == 'B') {
					obj[i].size = "Blue";
					i = i + 1;
					cout << "Your purchase for Rolex Sky-Dweller in blue colour was succcessful :)" << endl;
				}
				if (menChoice == 'o' || menChoice == 'O') {
					obj[i].size = "Olive Green";
					i = i + 1;
					cout << "Your purchase for Rolex Sky-Dweller in Olive Green colour was succcessful :)" << endl;

				}
				if (menChoice == 'w' || menChoice == 'W') {
					obj[i].size = "White";
					i = i + 1;
					cout << "Your purchase for Rolex Sky-Dweller in White colour was succcessful :)" << endl;

				}
			}
			else if (menChoice == '2') {
				//Casio Men's Classic
				cout << "============================================" << endl
					<<  "            Casio Men's Classic" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Casio Men's Classic";
				obj[i].price = 5600;
				cout << "Price of Casio Men's Classic is Rs 5600" << endl <<
					"Select the Color" << endl <<
					"Press B for Blue" << endl <<
					"Press O for Olive green" << endl <<
					"Press W for White" << endl;
				cin >> menChoice;
				if (menChoice == 'b' || menChoice == 'B') {
					obj[i].size = "Blue";
					i = i + 1;
					cout << "Your purchase for Casio Men's Classic in Blue colour was succcessful :)" << endl;
				}
				if (menChoice == 'o' || menChoice == 'O') {
					obj[i].size = "Olive Green";
					i = i + 1;
					cout << "Your purchase for Casio Men's Classic in Olive Green colour was succcessful :)" << endl;

				}

				if (menChoice == 'w' || menChoice == 'W') {
					obj[i].size = "White";
					i = i + 1;
					cout << "Your purchase for Casio Men's Classic in White colour was succcessful :)" << endl;

				}
			}
			else if (menChoice == '3') {
				//Lactose Men's 2010763
				cout << "============================================" << endl
					<<  "            Lactose Men's 2010763" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Lactose Men's 2010763";
				obj[i].price = 8200;
				cout << "Price of Lactose Men's 2010763 is Rs 8200" << endl <<
					"Select the color" << endl <<
					"Press B for Blue" << endl <<
					"Press O for Olive green" << endl <<
					"Press W for White" << endl;
				cin >> menChoice;
				if (menChoice == 'b' || menChoice == 'B') {
					obj[i].size = "Blue";
					i = i + 1;
					cout << "Your purchase for Lactose Men's 2010763 in Blue colour was succcessful :)" << endl;
				}
				if (menChoice == 'o' || menChoice == 'O') {
					obj[i].size = "Olive Green";
					i = i + 1;
					cout << "Your purchase for Lactose Men's 2010763 in Olive Green colour was succcessful :)" << endl;

				}

				if (menChoice == 'w' || menChoice == 'W') {
					obj[i].size = "White";
					i = i + 1;
					cout << "Your purchase for Lactose Men's 2010763 in White colour was succcessful :)" << endl;

				}
			}
			else if (menChoice == '4') {
				//Casio Men's Classic
				cout << "============================================" << endl
					<<  "           Casio Men's Classic" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Omega Seamaster Aqua Terra";
				obj[i].price = 15600;
				cout << "Price of Omega Seamaster Aqua Terra is Rs 15600" << endl <<
					"Select the color" << endl <<
					"Press B for Blue" << endl <<
					"Press O for Olive green" << endl <<
					"Press W for White" << endl;
				cin >> menChoice;
				if (menChoice == 'b' || menChoice == 'B') {
					obj[i].size = "Blue";
					i = i + 1;
					cout << "Your purchase for Omega Seamaster Aqua Terra in Blue colour was succcessful :)" << endl;
				}
				if (menChoice == 'o' || menChoice == 'O') {
					obj[i].size = "Olive Green";
					i = i + 1;
					cout << "Your purchase for Omega Seamaster Aqua Terra in Olive Green colour was succcessful :)" << endl;

				}

				if (menChoice == 'w' || menChoice == 'W') {
					obj[i].size = "White";
					i = i + 1;
					cout << "Your purchase for Omega Seamaster Aqua Terra in White colour was succcessful :)" << endl;

				}
			}
		}
		else if (menChoice == '3') {
			//Shirts 
			cout << "============================================" << endl
				<<  "                  Shirts" << endl
				<<  "============================================" << endl;
			cout << "1. T-shirt" << endl <<
				"2. Long Shirt" << endl <<
				"3. Formal Shirt" << endl <<
				"4. Denim Shirt" << endl <<
				"5. Casual Shirt" << endl;
			cin >> menChoice;
			if (menChoice == '1') {
				//T-shirt
				cout << "============================================" << endl
					<<  "                  T-Shirt" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "T-Shirt";
				obj[i].price = 950;
				cout << "Price of T-shirt is Rs 950" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> menChoice;
				if (menChoice == 's' || menChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for T-Shirt in small size was succcessful :)" << endl;
				}
				if (menChoice == 'm' || menChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for T-Shirt in medium size was succcessful :)" << endl;

				}
				if (menChoice == 'l' || menChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for T-Shirt in large size was succcessful :)" << endl;

				}
			}
			else if (menChoice == '2') {
				//Long Shirt
				cout << "============================================" << endl
					<<  "                Long Shirt" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Long Shirt";
				obj[i].price = 1150;
				cout << "Price of Long Shirt is Rs 4000" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> menChoice;
				if (menChoice == 's' || menChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Long Shirt in small size was succcessful :)" << endl;
				}
				if (menChoice == 'm' || menChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Long Shirt in medium size was succcessful :)" << endl;

				}

				if (menChoice == 'l' || menChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Long Shirt in large size was succcessful :)" << endl;

				}
			}
			else if (menChoice == '3') {
				//Formal Shirt
				cout << "============================================" << endl
					<<  "               Formal Shirt" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Formal Shirt";
				obj[i].price = 1200;
				cout << "Price of Formal Shirt is Rs 6750" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> menChoice;
				if (menChoice == 's' || menChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Formal Shirt in small size was succcessful :)" << endl;
				}
				if (menChoice == 'm' || menChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Formal Shirt in medium size was succcessful :)" << endl;

				}

				if (menChoice == 'l' || menChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Formal Shirt in large size was succcessful :)" << endl;

				}
			}
			else if (menChoice == '4') {
				//Denim Shirt
				cout << "============================================" << endl
					<<  "                Denim Shirt" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Denim Shirt";
				obj[i].price = 1150;
				cout << "Price of Denim Shirt is Rs 1150" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> menChoice;
				if (menChoice == 's' || menChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Denim Shirt in small size was succcessful :)" << endl;
				}
				if (menChoice == 'm' || menChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Denim Shirt in medium size was succcessful :)" << endl;

				}

				if (menChoice == 'l' || menChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Denim Shirt in large size was succcessful :)" << endl;

				}
			}
			else if (menChoice == '5') {
				//Casual Shirt
				cout << "============================================" << endl
					<<  "               Casual Shirt" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Casual Shirt";
				obj[i].price = 500;
				cout << "Price of Grey Jeans is Rs 500" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> menChoice;
				if (menChoice == 's' || menChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Casual Shirt in small size was succcessful :)" << endl;
				}
				if (menChoice == 'm' || menChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Casual Shirt in medium size was succcessful :)" << endl;

				}

				if (menChoice == 'l' || menChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Casual Shirt in large size was succcessful :)" << endl;

				}
			}
		}
		else if (menChoice == '4') {
			//Shoes
			cout << "============================================" << endl
				<<  "                  Shoes" << endl
				<<  "============================================" << endl;
			cout << "1. Nike Jordan 1 High" << endl <<
				"2. Nike Airmax 97" << endl <<
				"3. Converse Low" << endl <<
				"4. Adidas 4D" << endl <<
				"5. Reebok Leather shoes";
			cin >> menChoice;
			if (menChoice == '1') {
				//Nike Jordan 1 High
				cout << "============================================" << endl
					<<  "             Nike Jordan 1 High" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Nike Jordan 1 High";
				obj[i].price = 37000;
				cout << "Price of Nike Jordan 1 High is Rs 37000" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> menChoice;
				if (menChoice == 's' || menChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Nike Jordan 1 High in small size was succcessful :)" << endl;
				}
				if (menChoice == 'm' || menChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Nike Jordan 1 High in medium size was succcessful :)" << endl;

				}
				if (menChoice == 'l' || menChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Nike Jordan 1 High in large size was succcessful :)" << endl;

				}
			}
			else if (menChoice == '2') {
				//Nike Airmax 97
				cout << "============================================" << endl
					<<  "              Nike Airmax 97" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Nike Airmax 97";
				obj[i].price = 40000;
				cout << "Price of Nike Airmax 97 is Rs 40000" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> menChoice;
				if (menChoice == 's' || menChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Nike AirForce 97 in small size was succcessful :)" << endl;
				}
				if (menChoice == 'm' || menChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Nike AirForce 97 in medium size was succcessful :)" << endl;

				}

				if (menChoice == 'l' || menChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Nike AirForce 97 in large size was succcessful :)" << endl;

				}
			}
			else if (menChoice == '3') {
				//Converse low
				cout << "============================================" << endl
					<<  "               Converse Low" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Converse Low";
				obj[i].price = 19500;
				cout << "Price of Converse Low is Rs 19500" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> menChoice;
				if (menChoice == 's' || menChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Converse Low in small size was succcessful :)" << endl;
				}
				if (menChoice == 'm' || menChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Converse Low in medium size was succcessful :)" << endl;

				}

				if (menChoice == 'l' || menChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Converse Low in large size was succcessful :)" << endl;

				}
			}
			else if (menChoice == '4') {
				//Adidas 4D
				cout << "============================================" << endl
					<<  "                 Adidas 4D" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Adidas 4D";
				obj[i].price = 55000;
				cout << "Price of Adidas 4D is Rs 55000" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> menChoice;
				if (menChoice == 's' || menChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Adidas 4D in small size was succcessful :)" << endl;
				}
				if (menChoice == 'm' || menChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Adidas 4D in medium size was succcessful :)" << endl;

				}

				if (menChoice == 'l' || menChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Adidas 4D in large size was succcessful :)" << endl;

				}
			}
			else if (menChoice == '5') {
				//Reebok Leather shoes
				cout << "============================================" << endl
					<<  "            Reebok Leather Shoes" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Reebok Leather shoes";
				obj[i].price = 22000;
				cout << "Price of Reebok Leather shoes is Rs 22000" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> menChoice;
				if (menChoice == 's' || menChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Reebok Leather shoes in small size was succcessful :)" << endl;
				}
				if (menChoice == 'm' || menChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Reebok Leather shoes in medium size was succcessful :)" << endl;

				}

				if (menChoice == 'l' || menChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Reebok Leather shoes in large size was succcessful :)" << endl;

				}
			}

		}

		else if (menChoice == '5') {
		//jeans
		cout << "============================================" << endl
			<<  "                  Jeans" << endl
			<<  "============================================" << endl;
			cout << "1. Blue Jeans" << endl <<
				"2. Black Jeans" << endl <<
				"3. Brown Jeans" << endl <<
				"4. Denim Jeans" << endl <<
				"5. Grey Jeans" << endl;
			cin >> menChoice;
			if (menChoice == '1') {
				//Blue Jeans
				cout << "============================================" << endl
					<<  "               Blue Jeans" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Blue Jeans";
				obj[i].price = 5500;
				cout << "Price of Blue Jeans is Rs 5500" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> menChoice;
				if (menChoice == 's' || menChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Blue Jeans in small size was succcessful :)" << endl;
				}
				if (menChoice == 'm' || menChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Blue Jeans in medium size was succcessful :)" << endl;

				}
				if (menChoice == 'l' || menChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Blue Jeans in large size was succcessful :)" << endl;

				}
			}
			else if (menChoice == '2') {
				//Black Jeans
				cout << "============================================" << endl
					<<  "               Black Jeans" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Black Jeans";
				obj[i].price = 4000;
				cout << "Price of Black Jeans is Rs 4000" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> menChoice;
				if (menChoice == 's' || menChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Black Jeans in small size was succcessful :)" << endl;
				}
				if (menChoice == 'm' || menChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Black Jeans in medium size was succcessful :)" << endl;

				}

				if (menChoice == 'l' || menChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Black Jeans in large size was succcessful :)" << endl;

				}
			}
			else if (menChoice == '3') {
				//Brown Jeans
				cout << "============================================" << endl
					<<  "               Brown Jeans" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Brown Jeans";
				obj[i].price = 6750;
				cout << "Price of Brown Jeans is Rs 6750" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> menChoice;
				if (menChoice == 's' || menChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Brown Jeans in small size was succcessful :)" << endl;
				}
				if (menChoice == 'm' || menChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Brown Jeans in medium size was succcessful :)" << endl;

				}

				if (menChoice == 'l' || menChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Brown Jeans in large size was succcessful :)" << endl;

				}
			}
			else if (menChoice == '4') {
				//Denim Jeans
				cout << "============================================" << endl
					<<  "               Denim Jeans" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Denim Jeans";
				obj[i].price = 8250;
				cout << "Price of Denim Jeans is Rs 8250" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> menChoice;
				if (menChoice == 's' || menChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Denim Jeans in small size was succcessful :)" << endl;
				}
				if (menChoice == 'm' || menChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Denim Jeans in medium size was succcessful :)" << endl;

				}

				if (menChoice == 'l' || menChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Denim Jeans in large size was succcessful :)" << endl;

				}
			}
			else if (menChoice == '5') {
				//Grey Jeans
				cout << "============================================" << endl
					<<  "                Grey Jeans" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Grey Jeans";
				obj[i].price = 3500;
				cout << "Price of Grey Jeans is Rs 3500" << endl <<
					"Select the size" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> menChoice;
				if (menChoice == 's' || menChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Grey Jeans in small size was succcessful :)" << endl;
				}
				if (menChoice == 'm' || menChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Grey Jeans in medium size was succcessful :)" << endl;

				}

				if (menChoice == 'l' || menChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Grey Jeans in large size was succcessful :)" << endl;

				}
			}

		}
	}
	void kidSection() {
		//kids section
		cout << "============================================" << endl
			<< "                Kids Section" << endl
			<<  "============================================" << endl;
		cout << "Press 1 to buy Shirt" << endl <<
			"Press 2 to buy Watch" << endl <<
			"Press 3 to buy Frock" << endl <<
			"Press 4 to buy Shoes " << endl;
		cin >> kidChoice;

		if (kidChoice == '1') {
			//Shirt
			cout << "============================================" << endl
				<<  "                  Shirt" << endl
				<<  "============================================" << endl;
			cout << "1. Blue Shirt" << endl <<
				"2. Yellow Shirt" << endl <<
				"3. Pink Shirt" << endl <<
				"4. Green Shirt" << endl;
			cin >> kidChoice;
			if (kidChoice == '1') {
				//blue shirt
				cout << "============================================" << endl
					<<  "               Blue Shirt" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Blue Shirt";
				obj[i].price = 400;
				cout << "Price of Blue Shirt is Rs 400" << endl <<
					"Select the size of the Shirt" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> kidChoice;
				if (kidChoice == 's' || kidChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Blue Shirt in small size was succcessful :)" << endl;
				}
				if (kidChoice == 'm' || kidChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Blue Shirt in medium size was succcessful :)" << endl;

				}
				if (kidChoice == 'l' || kidChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Blue shirt in large size was succcessful :)" << endl;

				}

			}
			if (kidChoice == '2') {
				//yellow shirt
				cout << "============================================" << endl
					<<  "               Yellow Shirt" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Yellow Shirt";
				obj[i].price = 500;
				cout << "Price of Yellow Shirt is Rs 500" << endl <<
					"Select the size of the Shirt" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> kidChoice;
				if (kidChoice == 's' || kidChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Yellow Shirt in small size was succcessful :)" << endl;
				}
				if (kidChoice == 'm' || kidChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Yellow Shirt in medium size was succcessful :)" << endl;

				}
				if (kidChoice == 'l' || kidChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Yellow shirt in large size was succcessful :)" << endl;

				}

			}
			if (kidChoice == '3') {
				//pink shirt
				cout << "============================================" << endl
					<<  "               Pink Shirt" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Pink Shirt";
				obj[i].price = 450;
				cout << "Price of Pink Shirt is Rs 450" << endl <<
					"Select the size of the Shirt" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> kidChoice;
				if (kidChoice == 's' || kidChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Pink Shirt in small size was succcessful :)" << endl;
				}
				if (kidChoice == 'm' || kidChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Pink Shirt in medium size was succcessful :)" << endl;

				}
				if (kidChoice == 'l' || kidChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Pink shirt in large size was succcessful :)" << endl;

				}

			}
			if (kidChoice == '4') {
				//green shirt
				cout << "============================================" << endl
					<<  "              Green Shirt" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Green Shirt";
				obj[i].price = 500;
				cout << "Price of Green Shirt is Rs 500" << endl <<
					"Select the size of the Shirt" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> kidChoice;
				if (kidChoice == 's' || kidChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Green Shirt in small size was succcessful :)" << endl;
				}
				if (kidChoice == 'm' || kidChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Green Shirt in medium size was succcessful :)" << endl;

				}
				if (kidChoice == 'l' || kidChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Green shirt in large size was succcessful :)" << endl;

				}

			}

		}
		else if (kidChoice == '2') {
			//watch
			cout << "============================================" << endl
				<<  "                  Watches" << endl
				<<  "============================================" << endl;
			cout << "1. Blue Watch" << endl <<
				"2. Yellow Watch" << endl <<
				"3. Pink Watch" << endl <<
				"4. Green Watch" << endl;
			cin >> kidChoice;
			if (kidChoice == '1') {
				//blue watch
				cout << "============================================" << endl
					<<  "               Blue Watch" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Blue Watch";
				obj[i].price = 1500;
				cout << "Price of Blue Watch is Rs 1500" << endl <<
					"Select the size of the Watch" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> kidChoice;
				if (kidChoice == 's' || kidChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Blue Watch in small size was succcessful :)" << endl;
				}
				if (kidChoice == 'm' || kidChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Blue Watch in medium size was succcessful :)" << endl;

				}
				if (kidChoice == 'l' || kidChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Blue Watch in large size was succcessful :)" << endl;

				}

			}
			if (kidChoice == '2') {
				//Yellow watch
				cout << "============================================" << endl
					<<  "                Yellow Watch" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Yellow Watch";
				obj[i].price = 2100;
				cout << "Price of Yellow Watch is Rs 2100" << endl <<
					"Select the size of the Watch" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> kidChoice;
				if (kidChoice == 's' || kidChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Yellow Watch in small size was succcessful :)" << endl;
				}
				if (kidChoice == 'm' || kidChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Yellow Watch in medium size was succcessful :)" << endl;

				}
				if (kidChoice == 'l' || kidChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Yellow Watch in large size was succcessful :)" << endl;

				}

			}
			if (kidChoice == '3') {
				//pink watch
				cout << "============================================" << endl
					<<  "                Pink Watch" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Pink Watch";
				obj[i].price = 1500;
				cout << "Price of Pink Watch is Rs 1500" << endl <<
					"Select the size of the Watch" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> kidChoice;
				if (kidChoice == 's' || kidChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Pink Watch in small size was succcessful :)" << endl;
				}
				if (kidChoice == 'm' || kidChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Pink Watch in medium size was succcessful :)" << endl;

				}
				if (kidChoice == 'l' || kidChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Pink Watch in large size was succcessful :)" << endl;

				}

			}
			if (kidChoice == '4') {
				//green watch
				cout << "============================================" << endl
					<<  "               Green Watch" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Green Watch";
				obj[i].price = 2500;
				cout << "Price of Green Watch is Rs 2500" << endl <<
					"Select the size of the Watch" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> kidChoice;
				if (kidChoice == 's' || kidChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Green Watch in small size was succcessful :)" << endl;
				}
				if (kidChoice == 'm' || kidChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Green Watch in medium size was succcessful :)" << endl;

				}
				if (kidChoice == 'l' || kidChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Green Watch in large size was succcessful :)" << endl;

				}

			}

		}
		else if (kidChoice == '3') {
			//Frock
			cout << "============================================" << endl
				<<  "                  Frocks" << endl
				<<  "============================================" << endl;
			cout << "1. Blue Frock" << endl <<
				"2. Yellow Frock" << endl <<
				"3. Pink Frock" << endl <<
				"4. Green Frock" << endl;
			cin >> kidChoice;
			if (kidChoice == '1') {
				//blue frock
				cout << "============================================" << endl
					<<  "               Blue Frock" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Blue Frock";
				obj[i].price = 600;
				cout << "Price of Blue Frock is Rs 600" << endl <<
					"Select the size of the Frock" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> kidChoice;
				if (kidChoice == 's' || kidChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Blue Frock in small size was succcessful :)" << endl;
				}
				if (kidChoice == 'm' || kidChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Blue Frock in medium size was succcessful :)" << endl;

				}
				if (kidChoice == 'l' || kidChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Blue Frock in large size was succcessful :)" << endl;

				}

			}
			if (kidChoice == '2') {
				//yellow frock
				cout << "============================================" << endl
					<<  "               Yellow Frock" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Yellow Frock";
				obj[i].price = 600;
				cout << "Price of Yellow Frock is Rs 600" << endl <<
					"Select the size of the Frock" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> kidChoice;
				if (kidChoice == 's' || kidChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Yellow Frock in small size was succcessful :)" << endl;
				}
				if (kidChoice == 'm' || kidChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Yellow Frock in medium size was succcessful :)" << endl;

				}
				if (kidChoice == 'l' || kidChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Yellow Frock in large size was succcessful :)" << endl;

				}

			}
			if (kidChoice == '3') {
				//pink frock
				cout << "============================================" << endl
					<<  "                Pink Frock" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Pink Frock";
				obj[i].price = 450;
				cout << "Price of Pink Frock is Rs 450" << endl <<
					"Select the size of the Frock" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> kidChoice;
				if (kidChoice == 's' || kidChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Pink Frock in small size was succcessful :)" << endl;
				}
				if (kidChoice == 'm' || kidChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Pink Frock in medium size was succcessful :)" << endl;

				}
				if (kidChoice == 'l' || kidChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Pink Frock in large size was succcessful :)" << endl;

				}

			}
			if (kidChoice == '4') {
				//green frok
				cout << "============================================" << endl
					<<  "                Green Frock" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Green Frock";
				obj[i].price = 1000;
				cout << "Price of Green Frock is Rs 1000" << endl <<
					"Select the size of the Frock" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> kidChoice;
				if (kidChoice == 's' || kidChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Green Frock in small size was succcessful :)" << endl;
				}
				if (kidChoice == 'm' || kidChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Green Frock in medium size was succcessful :)" << endl;

				}
				if (kidChoice == 'l' || kidChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Green Frock in large size was succcessful :)" << endl;

				}

			}

		}
		else if (kidChoice == '4') {
			//Shoes
			cout << "============================================" << endl
				<<  "                   Shoes " << endl
				<<  "============================================" << endl;
			cout << "1. Blue Shoes" << endl <<
				"2. Yellow Shoes" << endl <<
				"3. Pink Shoes" << endl <<
				"4. Green Shoes" << endl;
			cin >> kidChoice;
			if (kidChoice == '1') {
				//blue shoes
				cout << "============================================" << endl
					<<  "               Blue Shoes" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Blue Shoes";
				obj[i].price = 1200;
				cout << "Price of Blue Shoes is Rs 1200" << endl <<
					"Select the size of the Shoes" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> kidChoice;
				if (kidChoice == 's' || kidChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Blue Shoes in small size was succcessful :)" << endl;
				}
				if (kidChoice == 'm' || kidChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Blue Shoes in medium size was succcessful :)" << endl;

				}
				if (kidChoice == 'l' || kidChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Blue Shoes in large size was succcessful :)" << endl;

				}

			}
			if (kidChoice == '2') {
				//Yellow Shoes
				cout << "============================================" << endl
					<<  "               Yellow Shoes" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Yellow Shoes";
				obj[i].price = 1500;
				cout << "Price of Yellow Shoes is Rs 1500" << endl <<
					"Select the size of the Shoes" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> kidChoice;
				if (kidChoice == 's' || kidChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Yellow Shoes in small size was succcessful :)" << endl;
				}
				if (kidChoice == 'm' || kidChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Yellow Shoes in medium size was succcessful :)" << endl;

				}
				if (kidChoice == 'l' || kidChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Yellow Shoes in large size was succcessful :)" << endl;

				}

			}
			if (kidChoice == '3') {
				//pink shoes
				cout << "============================================" << endl
					<<  "                Pink Shoes" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Pink Shoes";
				obj[i].price = 1450;
				cout << "Price of Pink Shoes is Rs 1450" << endl <<
					"Select the size of the Shoes" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> kidChoice;
				if (kidChoice == 's' || kidChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Pink Shoes in small size was succcessful :)" << endl;
				}
				if (kidChoice == 'm' || kidChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Pink Shoes in medium size was succcessful :)" << endl;

				}
				if (kidChoice == 'l' || kidChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Pink Shoes in large size was succcessful :)" << endl;

				}

			}
			if (kidChoice == '4') {
				//green shoes
				cout << "============================================" << endl
					<<  "                Green Shoes" << endl
					<<  "============================================" << endl;
				obj[i].itemName = "Green Shoes";
				obj[i].price = 3000;
				cout << "Price of Green Shoes is Rs 3000" << endl <<
					"Select the size of the Shoes" << endl <<
					"Press S for small" << endl <<
					"Press M for medium" << endl <<
					"Press L for large" << endl;
				cin >> kidChoice;
				if (kidChoice == 's' || kidChoice == 'S') {
					obj[i].size = "small";
					i = i + 1;
					cout << "Your purchase for Green Shoes in small size was succcessful :)" << endl;
				}
				if (kidChoice == 'm' || kidChoice == 'M') {
					obj[i].size = "medium";
					i = i + 1;
					cout << "Your purchase for Green Shoes in medium size was succcessful :)" << endl;

				}
				if (kidChoice == 'l' || kidChoice == 'L') {
					obj[i].size = "large";
					i = i + 1;
					cout << "Your purchase for Green Shoes in large size was succcessful :)" << endl;

				}

			}

		}
		
	}
	void productSearching() {
		cout << "============================================" << endl
			<< "           Search for a Product " << endl
			<< "============================================" << endl;
		cout << "Enter the name of the product you want to search for" << endl;
		cin.ignore();
		getline(cin, productSearch);

		productsIn.open("products information.txt");
		string line, data;
		int lineNo = 0;
		bool foundProduct = false;

		//searching for a product by name
		while (getline(productsIn, line)) {
			if (line.find(productSearch) != string::npos) {
				cout << "Product found!" << endl;
				for (int j = 0; j < 2; j++) {
					getline(productsIn, data);
					cout << data << endl;
				}
				foundProduct = true;
			}
			lineNo++;
		}
		if (foundProduct == false) {
			cout << "Can't find the product you searched for :(" << endl;
		}
		productsIn.close();
	}
	void showAllproducts() {
		productsIn.open("products information.txt");

		string line;
		while (getline(productsIn, line)) {
			cout << line << endl;
		}
		productsIn.close();
	}
	void showAllFeedbacks() {
		ifstream feedbackIn;
		ofstream feedbackOut;
		feedbackIn.open("feedback.txt");
		string line;
		while (getline(feedbackIn, line)) {
			cout << line << endl;
		}
		feedbackIn.close();
	}

	int main() {

	

		
		cout << "============================================" << endl
			<< "          Welcome To ARMR Outlet " << endl
			<< "============================================" << endl;
		do {
		
			cout << "Press 1 to Enter Customer mode" << endl <<
				"Press 2 to Enter Staff mode" << endl;
			cin >> mainChoice;
			if (mainChoice == '1') {



				cout << "Press 1 to buy an item" << endl <<
					"Press 2 to fill feedback form" << endl <<
					"Press 3 to show about us" << endl;
				cin >> choice1;

				if (choice1 == '1') {
					cout << "============================================" << endl
						<< "               Customer Mode" << endl
						<< "============================================" << endl;
					cout << "1. Women Section" << endl <<
						"Press 2 for Men Section" << endl <<
						"Press 3 for Kids Section" << endl;
					cin >> sectionChoice;

					if (sectionChoice == '1') {
						womenSection();
					}
					else if (sectionChoice == '2') {
						menSection();
					}
					else if (sectionChoice == '3') {
						kidSection();
					}
					else {
						cout << "Invalid choice :(" << endl;
					}
				}
				else if (choice1 == '2') {
					//Feedback form
					string name;
					string email;
					string feedback;

					cout << "============================================" << endl
						<<  "            Feedback Form" << endl
						<<  "============================================" << endl;
					cout << "Please provide your feedback below." << endl;

					cout << "Name: ";
					cin.ignore();
					getline(cin, name);

					cout << "Email: ";
					getline(cin, email);

					cout << "Feedback: ";
					getline(cin, feedback);

					cout << endl;

					cout << "===== Feedback Summary =====" << endl;
					cout << "Name: " << name << endl;
					cout << "Email: " << email << endl;
					cout << "Feedback: " << feedback << endl;

					// Save the feedback to a file
					saveFeedback(name, email, feedback,feedbackCounter);
					feedbackCounter += 1;
				}
				else if (choice1 == '3') {
					//about us
				}
			}


			else if (mainChoice == '2') {
				//Staff Mode
				cout << "Enter the Login ID" << endl;
				cin >> loginID;
				cout << "Enter the Password" << endl;
				cin >> loginPassword;
				if (loginID == "admin" && loginPassword == "admin123") {
					cout << "============================================" << endl
						<<  "                Staff Mode" << endl
						<<  "============================================" << endl;

					cout << "1. Display particular product information" << endl
						<< "2. Display all products information" << endl
						<< "3. Show feedbacks" << endl;
					cin >> staffChoice;

					if (staffChoice == '1') {
						//search for a product
						productSearching();

					}
					else if (staffChoice == '2') {
						//all products
						showAllproducts();
					}
					else if (staffChoice == '3') {
						//feedbacks
						showAllFeedbacks();

					}
					else {
						cout << "Invalid choice" << endl;
					}
				}
				else if (loginID == "admin" && loginPassword != "admin123") {
					cout << "The password you entered is not correct!" << endl;
				}
				else if (loginID != "admin" && loginPassword == "admin123") {
					cout << "The login ID you entered is not correct" << endl;
				}
				else {
					cout << "You entered wrong credentials!" << endl;
				}
			}

			/*for (int j = 0; j < i; j++) {
				cout << obj[j].itemName << " " << obj[j].size << " " << obj[j].price << endl;
			}*/

			//Bill



	

			cout << "Press 0 to return to the main menu or any other key to exit" << endl;
			cin >> loopChoice;

			if (loopChoice != '0') {
				//Printing bill on console
				cout << "--------------------------- Bill ---------------------------" << endl;
				for (int j = 0; j < i; j++) {
					cout << "Item : " << j + 1 << endl <<
						"Item name : " << obj[j].itemName << endl
						<< "Item price : " << obj[j].price << endl
						<< "Item size : " << obj[j].size << endl
						<< "------------------------------------------------------------" << endl;
					itemTotal = itemTotal + obj[j].price;
				}
				cout << "Total amount : " << itemTotal << endl
					<< "------------------------------------------------------------" << endl;


				// printing bill in file
				ofstream billFile;
				billFile.open("bill.txt");
				billFile << "--------------------------- Bill ---------------------------" << endl;
				for (int j = 0; j < i; j++) {
					billFile << "Item : " << j + 1 << endl <<
						"Item name : " << obj[j].itemName << endl
						<< "Item price : " << obj[j].price << endl
						<< "Item size : " << obj[j].size << endl
						<< "------------------------------------------------------------" << endl;
					itemTotal = itemTotal + obj[j].price;
				}
				billFile << "Total amount : " << itemTotal << endl
					<< "------------------------------------------------------------" << endl;
			}
		} while (loopChoice == '0');
		/*cout << "\n------------------ Bill ------------------\n";
		cout << "Product\t\tQuantity\tPrice\t\tTotal\n";
		cout << "------------------------------------------\n";

		for (int j = 0; j < i; j++) {
			itemTotal = itemTotal + obj[j].price;

			cout << obj[j].itemName << "\t\t" << obj[j].size << "\t\t"
				<< obj[j].price << "\t\t" << itemTotal << endl;
		}

		cout << "------------------------------------------\n";
		cout << "\t\t\t\tTotal:\t\t" << itemTotal << endl;
		cout << "------------------------------------------\n";*/

		return 0;
	}