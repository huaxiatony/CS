#include <iostream>
#include <string>
#include <cmath>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main() {
    /*double num_1, num_2;
    char letter, x1, x2, x3, x4, x5;
    string word;
    
    cout << "Please enter the dividend: ";
    cin >> num_1;
    cout << "Please enter the divisor: ";
    cin >> num_2;
    
    cout << num_1 << "%" << num_2 << "==" <<  num_1/num_2 << endl;
    
    cout << "Please enter a character: ";
    cin >> letter;
    cout << "'" << letter << "' in decimal is " << letter+0 << "." << endl;
    
    cout << "Please enter a five-lettered word, starting with the first one: ";
    cin >> x1;
    cin >> x2;
    cin >> x3;
    cin >> x4;
    cin >> x5;
    
    if(x1 <= 96){
        x1 += 32;
    }
    else{
        x1 -= 32;
    }
    if(x2 <= 96){
        x2 += 32;
    }
    else{
        x2 = x2;
    }
    
    if(x3 <= 96){
        x3 += 32;
    }
    else{
        x3 = x3;
    }
    
    if(x4 <= 96){
        x4 += 32;
    }
    else{
        x4 = x4;
    }
    
    if(x5 <= 96){
        x5 += 32;
    }
    else {
        x5 = x5;
    }
    
    
    cout << x1 << x2 << x3 << x4 << x5;*/
    /*string answer;
    
    cout << "Pick a number 1 through 5." << endl;
    cout << "Is your number greater than, less than, or equal to 3?";
    cin >> answer;
    
    if(answer == "equal"){
        cout << "\nI got it! Your answer is 3" << endl;}
    else if(answer == "greater"){
        cout << "\nIs your number greater than, or equal to 4?";
        cin >> answer;
        if(answer == "greater"){
            cout << "\nI got it! The answer is 5" << endl;
        }
        else if(answer == "equal"){
            cout << "\nI got it! The answer is 4" << endl;
        }
    }
    else if(answer == "less than"){
        cout << "\nIs your number less than, or equal to 2?";
        cin >> answer;
        if(answer == "less than"){
            cout << "\nI got it! The answer is 1" << endl;
        }
        else if(answer == "equal"){
            cout << "\nI got it! The answer is 2" << endl;
        }
    }*/
    int x = 0;
    cout << "Enter a number: ";
    cin >> x;
    
    if(x%10 == 0){
        if(x > 0){
            cout << "Your number is a positive multiple of 10" << endl;
        }
        else if(x < 0){
            cout << "Your number is a negative multiple of 10" << endl;
        }
        else{
            cout << "Your number is 0"; << endl;
        }
    }
   

    
    
    
    return 0;
}