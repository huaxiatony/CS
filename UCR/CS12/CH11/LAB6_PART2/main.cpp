#include <iostream>
#include "IntVector.h"

using namespace std;

int main(){
    unsigned size; 
    int value = 0;
    
    cout << "Please enter the size of the array: \n";
    cin >> size;
    
    cout << "\nPlease enter the value you want every element of the array to be: \n";
    cin >> value;
    
    IntVector test(size,value), test2;
    
    cout << "Size is " << test.size();
    cout << "\nCapacity is " << test.capacity();
    
    if(test.empty())
        cout << "\nFirst array empty\n";
    else
        cout << "\nFirst array not empty\n";
        
    if(test2.empty())
        cout << "\nSecond array empty";
    else
        cout << "\nSecond array not empty\n";
    
    cout << "\nValue at 2: " << test.at(1);
    cout << "\nFirst value: " << test.front();
    cout << "\nLast value: " << test.back() << endl;;
    
    return 0;
}