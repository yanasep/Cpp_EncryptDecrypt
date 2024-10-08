#include<iostream>
#include<string>
#include<array>

class Encrypt {
public:
	Encrypt() {
		alpha={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y'
		,'z'};
		beta={'g','w','a','h','q','m','t','b','r','y','s','n','p','j','i','l','k','e','v','d','f','z','o','c','x'
		,'u'};
	}//end constructor
	void setString() {
		std::string eStr;
		std::cout << "Please type a string you want to encrypt: ";
		std::cin.ignore();
		getline(std::cin, eStr);
		str = eStr;
	}//end setString

	void encrypt_sub() {
		for (int i = 0; i < (int)str.size(); i++){
			for (int j = 0; j < 26; j++){
				if (str[i] == alpha[j]){
					sStr[i] = beta[j];
					break; //break for j
				}
			}//end for j
			std::cout << sStr[i];
		}//end for i
		std::cout << std::endl << std::endl;
	}//end encrypt_sub

	void encrypt_tra() {
		//shift each charactor offset times to the right
		int offset = 3;

		for (int i = 0;i<(int)str.size();i++) { //loop for str
			int a = 100; //use for index of alpha
			for (int j = 0;j < alpha.size();j++){ //loop for alpha and find the charactor
				if (str[i] == alpha[j]){
					a = j + offset;
					break;
				}
			}//end for j
			if (a >= alpha.size())
				a = a - 26;

			if (a == 100) //store the same charactor if not alphabet
				tStr[i] = str[i];
			else
				tStr[i] = alpha[a];
			std::cout << tStr[i];
		}//end for i
		std::cout << std::endl << std::endl;
	}//end encrypt_tra
private:
	std::string str;
	std::array<char, 30> sStr{};
	std::array<char, 30> tStr{};
	std::array<char, 26> alpha{};
	std::array<char, 26> beta{};
};//end class Encrypt
