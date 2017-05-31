#include <iostream>
#include <string.h>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void exerciseMenu(int in){
    if(in > 6 || in < 0){  
        while(in > 6 || in < 0){ 
            cout << "Invalid choice. Please try again " << endl << "Please enter your choice: "; 
            cin >> in;}}
    else if(in == 6){ cout << "Goodbye." << endl; }
    else if(in == 1){ cout << "Please enter your choice: "; cin >> in; exerciseMenu(in); }
}

int main(){
    //Exercise 1
    int in = 0;
    
    cout << "Please enter your choice: ";
    cin >> in;
    exerciseMenu(in);
    
    return 0;
}