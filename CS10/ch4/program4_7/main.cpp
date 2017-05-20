#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string text = "", ex1 = "BFF", ex2 = "IDK", ex3 = "JK", ex4 = "TMI", ex5 = "TTYL";
    string ex11 = "best friend forever", ex22 = "I don't know", ex33 = "just kidding", ex44 = "too much information", ex55 = "talk to you later";
    cout << "Enter text: ";
    getline(cin,text);
    cout << "\nYou entered: " << text << endl;
    
    if(text.find(ex1) != string::npos) {
        cout << ex1 << ": " << ex11 << endl;}
    if(text.find(ex2) != string::npos) {
        cout << ex2 << ": " << ex22 << endl;}
    if(text.find(ex3) != string::npos) {
        cout << ex3 << ": " << ex33 << endl;}
    if(text.find(ex4) != string::npos) {
        cout << ex4 << ": " << ex44 << endl;}
    if(text.find(ex5) != string::npos) {
        cout << ex5 << ": " << ex55 << endl;}
    
    return 0;
}