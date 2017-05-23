#include <iostream>
#include <cmath>

using namespace std;
//Edit 01: Segementation Fault Errors on: (200, -2, 4) and (5, -29, 6)
//Edit 02: Fixed, forgot about negative numbers. Corrected it by importing cmath library and using absolute value function.

/* Returns true if a solution was found and false if there is no solution.
   x and y will contain a solution if a solution was found. 
   This function will NOT output anything.
*/
bool diophantine(int a, int b, int c, int &x, int &y);

int gcd(int inNum1, int inNum2);

int main() {

    int a, b, c, x, y;

    cout << "Enter a b c" << endl;
    cin >> a >> b >> c;
    cout << endl;

    cout << "Result: ";
    if (diophantine(a, b, c, x, y)) {
        cout << x << " " << y << endl;
    } else {
        cout << "No solution!" << endl;
    }

    return 0;
}

bool diophantine(int a, int b, int c, int &x, int &y){
    if(c % gcd(abs(a),abs(b)) != 0)
        return false;
    if(a % b == 0){
        x = 0; 
        y = c/b; 
        return true;
    }
    int u = (a/b)*x + y;
    if(diophantine(b, a % b, c, u, x)){
        y = u - ((a/b) * x);
        return true;
    }
    return true;
}

/* Determine the greatest common divisor
   of two numbers, e.g. GCD(8, 12) = 4
*/
int gcd(int inNum1, int inNum2) {
   int gcdVal = 0; // Holds GCD results
   if(inNum1 == inNum2) {    // Base case: Numbers are equal
      gcdVal = inNum1;       // Return value
   }
   else {                    // Recursive case: subtract smaller from larger
      if (inNum1 > inNum2) { // Call function with new values
         gcdVal = gcd(inNum1 - inNum2, inNum2);
      }
      else {
         gcdVal= gcd(inNum1, inNum2 - inNum1);
      }
   }
   return gcdVal;
}