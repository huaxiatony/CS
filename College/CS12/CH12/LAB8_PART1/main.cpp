#include <iostream>
#include <string>
#include <utility>

using namespace std;

void flipString(string &s);

int main() {
   string line;
   cout << "Enter a sentence:" << endl;
   getline(cin, line);
   cout << endl;
   cout << line << endl;
   flipString(line);
   cout << line << endl;

   return 0;
}

void flipString(string &s){                         //Reverses a string recursively
    if(s.size() <= 1)
        return;
    else{
        /*s = string(s.rbegin(), s.rend()); */      //Non-recursive way
        
        //Method 01
        /*string newS = s.substr(0, s.size() - 1);  //This method cuts off the last character of the string
        flipString(newS);                           //And then adds it to the front of the string recursively
        s = s.at(s.size() - 1) + newS;*/
        
        //Method 02
        string text = s.substr(1, s.size());        //This method cuts off the first character of the string
        flipString(text);                           //And then adds it to the back of the string recursively
        s = text + s.at(0);
    }
    return;
}