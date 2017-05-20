#include "IntVector.h"
#include <iostream>

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
    cout << "\nLast value: " << test.back() << endl;
    /*
    //Insert test
    cout << "Insert 5 at index 1" << endl;
    test.insert(1, 5);
    cout << "Value at index 1: " << test.at(1) << endl << endl;
    
    //Erase test
    cout << "Erase at index 1" << endl;
    test.erase(1);
    cout << "Value at index 1: " << test.at(1) << endl << endl;
    
    //Push_back test
    cout << "Push_back 5" << endl;
    test.push_back(5);
    cout << "Value at last index: " << test.at(test.size() - 1) << endl << endl;
    
    //Pop_back test
    cout << "Pop_back" << endl;
    test.pop_back();
    cout << "Value at last index: " << test.at(test.size() - 1) << endl << endl;
    
    //Resize test
    cout << "Resize smaller" << endl;
    test.resize(5, 10);
    cout << "Size: " << test.size() << endl;
    
    cout << "Resize bigger" << endl;
    test.resize(10, 5);
    cout << "Size: " << test.size() << endl;
    cout << "Value at index 8: " << test.at(8) << endl << endl;
    
    //Reserve test
    cout << "Reserve" << endl;
    test.reserve(15);
    cout << "Size: " << test.size() << endl << endl;
    
    //Assign test
    cout << "Smaller " << endl;
    test.assign(5, 10);
    cout << "Size: " << test.size() << endl;
    cout << "Value at index 3: " << test.at(3) << endl;
    cout << "Larger" << endl;
    test.assign(10, 5);
    cout << "Size: " << test.size() << endl;
    cout << "Value at index 8 " << test.at(8) << endl << endl;
    
    //Clear test
    cout << "Clear" << endl;
    test.clear();
    cout << "Size: " << test.size() << endl << endl;*/
    
    //Reserve Test Part 2
    cout << "Reserve, assuming capacity is 20..\n";
    test.reserve(30);
    cout << "Double checkig, capacity is " << test.capacity();
    
    return 0;
}