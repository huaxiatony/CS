#include <iostream>
#include <string>
#include <cmath>
using namespace std; 

int main() {
    double x1 = 0.0, x2 = 0.0, x3 = 0.0, y1 = 0.0, y2 = 0.0, y3 = 0.0, totalDistance = 0.0;
    
    cout << "Please enter the x-coordinate of the first point: "; 
    cin >> x1;
    cout << endl;
    cout << "Please enter the y-coordinate of the first point: ";
    cin >> y1;
    cout << endl; 
    cout << "Please enter the x-coordinate of the second point: ";
    cin >> x2;
    cout << endl;
    cout << "Please enter the y-coordinate of the second point: ";
    cin >> y2;
    cout << endl;
    
    x3 = x2 - x1;
    y3 = y2 - y1; 
    totalDistance = sqrt(pow(x3,2) + pow(y2,2));
    
    cout << totalDistance << endl;
    
    return 0;

}