#include <iostream>
#include <string>

using namespace std;

int main(){
    string text = "", ex1 = "BFF", ex2 = "IDK", ex3 = "JK", ex4 = "TMI", ex5 = "TTYL";
    string ex11 = "best friend forever", ex22 = "I don't know", ex33 = "just kidding", ex44 = "too much information", ex55 = "talk to you later";
    
    cout << "Enter text: ";
    getline(cin,text);
    cout << "\nYou entered: " << text;
    cout << "\nExpanded: ";
    
    int len = text.length();
    for(int i = 0; i < len; ++i){
    if(text.find(ex1) != string::npos) {
        text.replace(text.find(ex1),3,ex11);
    }
    if(text.find(ex2) != string::npos) {
        text.replace(text.find(ex2),3,ex22);
    }
    if(text.find(ex3) != string::npos) {
        text.replace(text.find(ex3),2,ex33);
    }
    if(text.find(ex4) != string::npos) {
        text.replace(text.find(ex4),3,ex44);
    }
    if(text.find(ex5) != string::npos) {
        text.replace(text.find(ex5),4,ex55);
    }}
    
    cout << text << endl;
    
    return 0;
}