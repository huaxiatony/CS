#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Place charCnt prototype (declaration) here
int charCnt(string filename, char ch);

int main() {
   string filename = "";
   char ch;
   cout << "Enter the name of the input file: ";
   cin >> filename;
   cout << endl;
   cout << "Enter a character: ";
   cin >> ch;
   cout << endl;
   
   cout << "# of " << ch << "'s: " << charCnt(filename, ch) << endl;
   
   return 0;
}

// Place charCnt implementation here
int charCnt(string text, char ch){
    int counter = 0;
    char check;
    ifstream inFS;
    if(inFS.is_open()){
        while(!inFS.eof()){
            inFS >> check;
            if(inFS.good()){ if(ch == check){ counter++; }}
        }
    }
    else{
        cout << "Error opening " << text << endl; exit(1);}
    inFS.close();
    return counter;
}