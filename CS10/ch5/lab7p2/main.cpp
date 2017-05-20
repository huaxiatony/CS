#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double percentHeads(int userInput){
    int flipCoin = 0;
    double headCounter = 0;
    
    for(int i = 0; i < userInput; ++i){
        flipCoin = rand() % 2;
        if(flipCoin == 0){  headCounter++;}}
    
    return (headCounter/userInput)*100.0;
}

int main(){
    int userInput; 
    
    srand(4444);
    
    cout << "Enter the number of times you want to toss the coin: ";
    cin >> userInput;
    cout << endl;
    
    cout << "Heads came up " << percentHeads(userInput) << "% of the time." << endl;
    
    return 0;
}