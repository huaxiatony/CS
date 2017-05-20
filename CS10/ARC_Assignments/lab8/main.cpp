#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void foo(int& a, int& b){ cout << "Enter your first number: "; cin >> a; cout << endl; cout << "Enter your second number: "; cin >> b; cout << endl; int temp = a, temp2 = b; if(b < a){  a = temp2; b = temp;}}

void swap(int& a, int&b){ int temp = a; a = b; b = temp;}

void swap(double& a, double& b){ double temp = a; a = b; b = temp;}

void swap(char& a, char& b){ char temp = a; a = b; b = temp;}

void swap(bool& a, bool& b){ bool temp = a; a = b; b = temp;}

void replace(string& line, string input){
    for(unsigned int i = 0; i < line.length(); ++i){line.replace(line.at(input),input.size(),input);}
}

int main(){
    /*int a = 5, b = 4;
    foo(a,b);
    cout << a << endl << b << endl;*/
    
    /*char c = 'c', a = 'a';
    swap(a,c);
    int one = 1, two = 2;
    swap(one,two);

    cout << a << " " << c << endl << one << " " << two << endl;*/
    
    string line = "", change = "";
    cout << "Enter a sentence: ";
    getline(cin,line);
    cout << endl;
    cout << "Which word should be replaced: ";
    cin >> input;
    cout << endl;
    replace(line, input);
    cout << line;
    
    return 0;
}