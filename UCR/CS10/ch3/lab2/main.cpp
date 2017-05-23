#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string p1 = "", p2 = "", p3 = "";
    int p1num, p2num, p3num;
    
    cout << "Enter player 1's name: ";
    cin >> p1;
    cout << "\nEnter player 1's yards gained: ";
    cin >> p1num;
    cout << "\nEnter player 2's name: ";
    cin >> p2;
    cout << "\nEnter player 2's yards gained: ";
    cin >> p2num;
    cout << "\nEnter player 3's name: ";
    cin >> p3;
    cout << "\nEnter player 3's yards gained: ";
    cin >> p3num;
    
    cout << endl;
    cout << "\nPlayer 1 - " << p1 << ": " << p1num << endl;
    cout << "Player 2 - " << p2 << ": " << p2num << endl;
    cout << "Player 3 - " << p3 << ": " << p3num;
    
    cout << "\n1. ";
    
    if(p1num > p2num && p1num > p3num){
        cout << p1 << ": " << p1num;
        if(p2num > p3num) {
            cout << "\n2. " << p2 << ": " << p2num;
            cout << "\n3. " << p3 << ": " << p3num << endl;
        }
        else {
            cout << "\n2. " << p3 << ": " << p3num;
            cout<< "\n3. " << p2 << ": " << p2num << endl;
        }
    }
    else if(p2num > p1num && p2num > p3num){
        cout << p2 << ": " << p2num;
        if(p1num > p3num){
            cout << "\n2. " << p1 << ": " << p1num;
            cout << "\n3. " << p3 << ": " << p3num << endl;
        }
        else{
            cout << "\n2. " << p3 << ": " << p3num;
            cout << "\n3. " << p1 << ": " << p1num << endl;
        }
    }
    else if(p3num > p1num && p3num > p2num){
        cout << p3 << ": " << p3num;
        if(p1num > p2num){
            cout << "\n2. " << p1 << ": " << p1num;
            cout << "\n3. " << p2 << ": " << p2num << endl;
        }
        else {
            cout << "\n2. " << p2 << ": " << p2num;
            cout << "\n3. " << p1 << ": " << p1num << endl;
        }
    }
    
    return 0;
}