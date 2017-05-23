#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    char sym = '*'; int theight = 0, twidth = 0, lwidth = 0, row = 0, tempwidth = 0, space = 0;
    
    cout << "Enter trunk height: ";
    cin >> theight; 
    cout << "Enter trunk width: ";
    cin >> twidth;
    if(twidth%2 == 0){
        while(twidth % 2 == 0){
            cout << "Please enter an odd number for the width: ";
            cin >> twidth;}}
    cout << "Enter leaves width: ";
    cin >> lwidth;
    if(lwidth%2 == 0){
        while(lwidth % 2 == 0){
            cout << "Please enter an odd number for the width: ";
            cin >> lwidth;}}
    cout << endl;
        
        
    tempwidth = lwidth;
    for(int x = tempwidth; x > 0; --x)
        if(x % 2 != 0){ row++;}
    
    for(int i = 1; i <= row; ++i){
        for(int j = 1; j <= row - i; ++j)
            cout << " ";
        for(int k = 1; k <= i * 2 - 1; ++k)
            cout << sym;
        cout << endl;}
    
    space = abs((twidth - lwidth)/2);
    
    for(int a = 0; a < theight; ++a){
        for(int c = 0; c < space; ++c)
            cout << " ";
        for(int b = 0; b < twidth; ++b)
            cout << sym;
        cout << endl;}
   
   return 0;
}