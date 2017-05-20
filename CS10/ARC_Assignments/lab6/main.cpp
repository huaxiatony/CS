#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    
    //Exercise 1
    /*int numberOfRandomTimes = 0, rangeOfRandomNumbers1 = 0, rangeOfRandomNumbers2 = 0;
    int biggerRandomNumber = 0, smallerRandomNumber = 0;
    cout << "How many random numbers would you like? ";
    cin >> numberOfRandomTimes;
    cout << "What should the numbers be in (space-separated)? ";
    cin >> rangeOfRandomNumbers1;
    cin >> rangeOfRandomNumbers2;
    
    if(rangeOfRandomNumbers1 > rangeOfRandomNumbers2){  biggerRandomNumber = rangeOfRandomNumbers1; smallerRandomNumber = rangeOfRandomNumbers2;}
    else{ biggerRandomNumber = rangeOfRandomNumbers2; smallerRandomNumber = rangeOfRandomNumbers1;}
    
    for(int i = 0; i < numberOfRandomTimes; ++i){   cout << smallerRandomNumber + rand() % (abs(biggerRandomNumber) + abs(smallerRandomNumber) + 1) << endl;}
    */
    //Exercise 2
    /*int numOfBuildings = 0, maxHeight = 0, setRandomToMax = 0, counter = 1;
    
    cout << "How many buildings? ";
    cin >> numOfBuildings;
    cout << "How tall is the tallest building? ";
    cin >> maxHeight;
    
    setRandomToMax = rand() % maxHeight + 1;
    
    for(int i = 0; i < numOfBuildings; ++i){
        for(int j = 0; j < rand() % maxHeight + 1; ++j){
            if(j = setRandomToMax){ while(counter < maxHeight){ cout << "X"; ++counter;}}
            cout << "X";
        }
        cout << endl;
    }*/
    
    //Exercise 3
    int numToMod = 0, numOfTimes = 0, numToShift = 0;
    
    cout << "Enter the seed value: ";
    cin >> numToMod;
    cout << "How many random numbers would you like? ";
    cin >> numOfTimes;
    
    srand(time(0));
    numToShift = rand();
    
    cout << numToShift << endl;
    for(int i = 1; i < numOfTimes; ++i){    cout << rand() << endl;}
    
    return 0;
}