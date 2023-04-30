//#include<iostream>
//using namespace std;
//int main()
//{
//    int R1, R2, R3;
//    int j = 0;
//    string name[4];
//    int NIC[4];
//    bool flag = false;
//    string search_name;
//    string del_name;
//    char confirm;
//    int age;
//    int choice;
//
//    cout << "Karachi to Lahore at RS1500: " << endl;
//    cout << "Karachi to Islamabad at RS 2000:" << endl;
//    cout << "Karachi to Muree at RS 2500:" << endl;
//    cout << "Press 1 to book a ticket:";
//    cin >> choice;
//    if (choice == 1)
//    {
//        for (int i = 0; i < 4; i++)
//        {
//            cout << "Enter your age:" << endl;
//            cin >> age;
//            if (age >= 18) {
//                cout << "Enter your name:" << endl;
//                cin >> name[i];
//                cout << "Enter your NIC number:" << endl;
//                cin >> NIC[i];
//                cout << "Press 1 if you want to go grom Karachi to Lahore:" << endl;
//                cout << "Press 2 if you want to go from Karachi to Islamabad:" << endl;
//                cout << "Press 3 if you want to go from Karachi to Muree:" << endl;
//                cin >> choice;
//                if (choice == 1) {
//                    cout << "Karachi to Lahore at 1500:" << endl;
//                }
//                else if (choice == 2) {
//                    cout << "Karachi to Islamabad at 2000:" << endl;
//                }
//                else if (choice == 3) {
//                    cout << "Karachi to Muree at 2500:" << endl;
//                }
//                else {
//                    cout << "Invalid option:";
//                }cout << "Do you want to confirm ticket:";
//                cin >> confirm;
//                if (confirm == 'y') {
//                    cout << "Ticket generated: " << endl;
//                }
//                else {
//                    cout << "Ticket not generated:" << endl;
//                }
//            }
//            else if (age < 18)
//            {
//                cout << "You cannot buy ticket" << endl;
//            }
//        } cout << "Press 6 if you want to delete a customer:" << endl;
//        cout << "Press 7 if you want to search a customer:" << endl;
//        cin >> choice;
//        switch (choice) {
//            cout << "Enter name you want to search:" << endl;
//            cin >> search_name;
//        case '6':
//            for (int i = 0; i < 4; i++) {
//                if (search_name == name[i]) {
//                    cout << "Name found at " << i << endl;
//                    cout << "NIC number is" << NIC[i] << endl;
//                }break;
//            }
//        case '7':
//            cout << "Do you want to delete any customer:";
//            cin >> del_name;
//            for (int i = 0; i < 4; i++) {
//                if (del_name == name[i]) {
//                    flag = true;
//                    for (j = 0; j < 3; j++) {
//                        name[j] = name[j + 1];
//                        break;
//                    }
//                }
//            }if (flag == false) {
//                cout << "Not found:";
//            }
//            else {
//                name[j + 1] = "";
//                cout << "Customer deleted:";
//            }break;
//        default:
//            cout << "Press A to continue:";
//        }
//    }
//}