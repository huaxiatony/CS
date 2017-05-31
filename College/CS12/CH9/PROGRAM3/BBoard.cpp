#include "BBoard.h"
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

BBoard::BBoard(){
	title = ""; 
	vector<User> userList; 
	User currentUser; 
	vector<Message> messageList;
} 

BBoard::BBoard(const string &tle) : title(tle){}

bool BBoard::loadUsers(const string &fileName){
    ifstream in;
    User newUser;
    string user = "", pass = "";
	
    in.open(fileName.c_str());
	
    if(!in.is_open()){
        return false;
    }
	
    while(in >> user >> pass){
        if(user != "end"){
            newUser = User(user, pass);
            userList.push_back(newUser);
        }
    }
    in.close();
    return true;
}

bool BBoard::login(){
    string uname = "", pass = "";
    bool value = true;
    
    cout << "Welcome to " << title << endl;
    
    while(value){
        cout << "Enter your username ('Q' or 'q' to quit): " << endl;
        cin >> uname;
		
        if(uname == "Q" || uname == "q"){   					//If user inputs any variance of q as username, returns false (for login)
            cout << "Bye!" << endl; 
			return false;
        }
        cout << "Enter your password: " << endl;    			//Else the function will continue on to ask for password
        cin >> pass;
        
        
        if(!userExists(uname,pass)){								//If user does not exist, print to console messsage, else break the loop.
			cout << "Invalid Username or Password!" << endl << endl; 
        }
		else{
			break;
		}
		
		//!userExists(uname,pass) ? cout << "Invalid Username or Password!" << endl << endl : break;
	
    }
	
	currentUser = User(uname, pass);
	cout << "Welcome back " << currentUser.getUsername() << "!" << endl;
    return true;
}

void BBoard::run(){
    char input;
    
    do{
        cout << "\nMenu" << endl;						//Menu displayed
        cout << "- Display Messages ('D' or 'd')" << endl;
        cout << "- Add New Message ('N' or 'n')" << endl;
        cout << "- Quit ('Q' or 'q')" << endl;
        cout << "Choose an action: " << endl;
		
        cin >> input;
		cin.ignore(); 								//Ignores newline characters
		
		if((input != 'D' && input != 'd') && (input != 'N' && input != 'n') && (input != 'Q' && input != 'q')){		
			cout << "\nInvalid" << endl << endl;	//If it is none of the above nor any variance of q, print "Invalid" and start over again
		}
        if(input == 'D' || input == 'd'){			//Displays the messages
            display();
        }
        else if(input == 'N' || input == 'n'){ 		//Adds new message to message board
            addMessage();
        }
		
    }while(input != 'Q' && input != 'q');
	
    cout << "Bye!" << endl;
    return;
}

void BBoard::display() const{
    if(messageList.empty()){    						//If there are nothing inside the messageList vector, the following is printed onto the console
        cout << "Nothing to Display." << endl; return;
    }
	
	cout << "---------------------------------------------------------" << endl;
    for(unsigned i = 0; i < messageList.size(); ++i){   //Else, the messages are printed out onto the console
        cout << "Message #" << i + 1 << ": ";
		messageList.at(i).display();
		cout << "---------------------------------------------------------" << endl;
    }
}

void BBoard::addMessage(){
    string sbjct = "", bdy = "";
    
    cout << "Enter Subject: " << endl;
    getline(cin, sbjct);
    cout << "Enter Body: " << endl;
    getline(cin, bdy);
    cout << "Message Recorded!" << endl;
	
    messageList.push_back(Message(currentUser.getUsername(), sbjct, bdy));
    return;
}

bool BBoard::userExists(const string &user, const string &pass) const{
    for(unsigned i = 0; i < userList.size(); ++i){
		if(userList.at(i).check(user,pass)){
			return true;
		}
	}
	return false;
}

