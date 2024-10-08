#include<iostream>
#include"Encrypt.h"
#include"Decrypt.h"
using namespace std;

int main()
{
	int a = 0;
	string str;
	Encrypt e;
	Decrypt d;
	while (a != 3) {
		cout << "1: Encrypt\n2: Decrypt\n3: Quit \t: ";
		cin >> a;
		while(!(a >= 1 && a <= 3)){ //repeat until user input proper value
			cin.clear(); //clear error
			cin.ignore();
			cout << "\n1: Encrypt\n2: Decrypt\n3: Quit \t: ";
			cin >> a;
		}
		cout << endl;
		switch(a){
			case 1:
				cout << "Which method would you like?\n1: substitution cipher\n2: transposition cipher \t: ";
				cin >> a;
				while(!(a >= 1 && a <= 2)){ //repeat until user input proper value
					cin.clear(); //clear error
					cin.ignore();
					cout << "\nWhich method would you like?\n1: substitution cipher\n2: transposition cipher \t: ";
					cin >> a;
				}
				cout << endl;
				e.setString();
				cout << "Processed to : ";
				if (a == 1)
					e.encrypt_sub();
				else if (a == 2)
					e.encrypt_tra();
				break;
			case 2:
				cout << "Which method would you like?\n1: substitution cipher\n2: transposition cipher \t: ";
				cin >> a;
				while(!(a >= 1 && a <= 2)){ //repeat until user input proper value
					cin.clear(); //clear error
					cin.ignore();
					cout << "\nWhich method would you like?\n1: substitution cipher\n2: transposition cipher \t: ";
					cin >> a;
				}
				cout << endl;
				d.setString();
				cout << "Processed to : ";
				if (a == 1)
					d.decrypt_sub();
				else if (a == 2)
					d.decrypt_tra();
				break;
			case 3:
			default:
				cout << "Good Bye!" << endl;
				break;
		}//end switch
		cout << endl;
	}//end while
}//end main
