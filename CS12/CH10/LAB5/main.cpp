#include <iostream>

using namespace std;

double mean(const double array[], int arraySize);

void remove(double array[], int &arraySize, int index);

void display(const double array[], int arraySize);

int main(){
    int ARRAY_SIZE = 10, 
        targetIndex = 0;
    double arr[ARRAY_SIZE];
    
    cout << "Enter 10 values:\n";                       //User enters 10 variables of double type 
    for(int i = 0; i < 10; ++i){
        cin >> arr[i];
    }
    
    cout << "\nMean: " << mean(arr, ARRAY_SIZE);        //Program outputs the mean w/o the user asking for it to
    
    cout << "\n\nEnter index of value to be removed: "; //Finds the target index number for the double held in that index number to be eliminated
    cin >> targetIndex; 
    
    cout << "\nBefore removing value: ";                //Shows the array before the removal
    display(arr, ARRAY_SIZE);
    
    remove(arr, ARRAY_SIZE, targetIndex);               //Removes the target number
    
    cout << "After removing value: ";                   //Shows the array after the removal
    display(arr,ARRAY_SIZE);
    
    return 0;
}

double mean(const double arr[], int arrSize){           //Finds the mean of the array
    double sum = 0.0;
    for(int i = 0; i < arrSize; ++i)                    //Sums up the whole array
        sum += arr[i];
    return sum/arrSize;                                 //Returns the mean via sum/total number
}

void remove(double arr[], int &arrSize, int index){     //Decreases the array size by 1 immediately, takes care of that condition beforehand
    --arrSize;
    for(int i = 0; i < arrSize; ++i){                   //Shifts the array one to the left of all the numbers after target number is found (target number included)
        if(i >= index)
            arr[i] = arr[i + 1];
    }
    return;
}

void display(const double arr[], int arrSize){          //Displays the array in a horizontal format separated by commas (except for the end)
    for(int i = 0; i < arrSize; ++i){
        cout << arr[i];
        if(i < arrSize - 1)
            cout << ", "; 
    }
    cout << endl;
    return;
}
