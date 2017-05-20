#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string lol = "LOL", idk = "IDK", bff = "BFF", imho = "IMHO", tmi = "TMI", check = "";
    
    cout << "Input an abbreviation: ";
    cin >> check;
    cout << endl;
    
    if(check == lol)
        cout << "laughing out loud" << endl;
    else if(check == idk)
        cout << "I don't know" << endl;
    else if(check == bff)
        cout << "best friends forever" << endl;
    else if(check == imho)
        cout << "in my humble opinion" << endl;
    else if(check == tmi)
        cout << "too much information" << endl;
    else
        cout << "Unknown" << endl;
    
    return 0;
}