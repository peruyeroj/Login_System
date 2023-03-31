#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

bool isLoggedIn() {
	bool loggedIn;
	fstream userInfo;
	string username, password;
	
	cout << "1: Register" << endl;
	cout << "2: Login" << endl;
	int choice;
	cin >> choice;
	system("CLS");

	if (choice == 1) {
		cout << "Enter username: " << endl;
		cin >> username;
		cout << "Enter password: " << endl;
		cin >> password;
		system("CLS");

		userInfo.open("UserInfo", ios::out);
		if (userInfo.is_open()) {
			userInfo << username << endl;
			userInfo << password;
			userInfo.close();
		}
	}
	else if (choice == 2) {
		string inputUser;
		string inputPass;

		cout << "Enter username: " << endl;
		cin >> inputUser;
		cout << "Enter password: " << endl;
		cin >> inputPass;
		system("CLS");

		userInfo.open("UserInfo", ios::in);
		getline(userInfo, username);
		getline(userInfo, password);
		userInfo.close();
		
		if (inputUser == username && inputPass == password) {
			system("color b");
			cout << "#############################################################" << endl;
			cout << "#                    _                                      #" << endl;
			cout << "#                  -=\\`\\                                    #" << endl;
			cout << "#              |\\ ____\\_\\__                                 #" << endl;
			cout << "#            -=\\c`\"\"\"\"\"\"\" \"`)                               #" << endl;
			cout << "#               `~~~~~/ /~~`\                                #" << endl;
			cout << "#                 -==/ /                                    #" << endl;
			cout << "#                   '-'                                     #" << endl;
			cout << "#                  _  _                                     #" << endl;
			cout << "#                 ( `   )_                                  #" << endl;
			cout << "#                (    )    `)                               #" << endl;
			cout << "#              (_   (_ .  _) _)                             #" << endl;
			cout << "#                                             _             #" << endl;
			cout << "#                                            (  )           #" << endl;
			cout << "#             _ .                         ( `  ) . )        #" << endl;
			cout << "#           (  _ )_                      (_, _(  ,_)_)      #" << endl;
			cout << "#         (_  _(_ ,)                                        #" << endl;
			cout << "#############################################################" << endl;
			loggedIn = true;
			return true;
		}

		else if (inputUser != username || inputPass != password) {
			cout << "You have entered the wrong username and or password" << endl;
			loggedIn = false;
			return false;
		}
	}
	

}


int main() {
	isLoggedIn();
}
