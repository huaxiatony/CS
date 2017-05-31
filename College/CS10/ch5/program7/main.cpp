#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const int OK = 0;
const int DIV_ZERO = 1;
const int SQRT_ERR = 2;

/// @brief acquire the proper number of numeric inputs based on operation string
///
///     The numeric inputs are set into x, y, and z in that order;
///     the number of numeric inputs acquired is returned to the caller.
///     Not all operations require all three values: 
///         do not set the variables of operands that are not needed.
///
/// @param op the operation to be performed such as division
/// @param x the first numeric input
/// @param y the second numeric input
/// @param z the third numeric input
/// @return the number of numeric inputs that were acquired
int acquireOperands(const string &op, int &x, int &y, int &z){
    string opp = op; int check = 0;
    if(opp == "division"){  check = 2; cout << "Enter your first number: "; cin >> x; cout << endl; cout << "Enter your second number: "; cin >> y; cout << endl;}
    else if(opp == "pythagorean"){  check = 2; cout << "Enter your first number: "; cin >> x; cout << endl; cout << "Enter your second number: "; cin >> y; cout << endl;}
    else if(opp == "quadratic"){    check = 3; cout << "Enter your first number: "; cin >> x; cout << endl; cout << "Enter your second number: "; cin >> y;
    cout << endl; cout << "Enter your third number: "; cin >> z; cout << endl;}
    
    return check;
}


/// @brief calculate quotient for provided values
///
/// @param a the dividend of the equation
/// @param b the divisor of the equation
/// @param result reference to place the quotient in
/// @return returns the integer representing the state of the calculation
///         using constants for OK and DIV_ZERO
int division(int a, int b, double &result){ if(b != 0){  result = static_cast<double>(a) / static_cast<double>(b); return OK;} return DIV_ZERO;}

/// @brief calculate c for the pythagorean theorem a^2 + b^2 = c^2
///
/// @param a the value of a in the equation
/// @param b the value of b in the equation
/// @param c reference for the c calculation
/// @return returns the integer representing the state of the calculation
///         using constant for OK
int pythagorean(int a, int b, double &c){  c = sqrt(((static_cast<double>(a)*static_cast<double>(a)) + (static_cast<double>(b)*static_cast<double>(b)))); return OK;}

/// @brief calculate the roots to the quadratic formula for a polynomial of
///     the form a*x^2 + b*x + c = 0. Returns errant state when necessary.
///     Do not simplify equation in any way based on inputs such as a = 0.
///
/// @param a the coefficient of x^2 in the polynomial equation
/// @param b the coefficient of x in the polynomial equation
/// @param c the last value of the polynomial equation
/// @param root1 reference for the first root of the quadratic formula 
/// @param root2 reference for the second root of the quadratic formula
/// @return returns the integer representing the state of the calculation
///         using constants for OK, DIV_ZERO, and SQRT_ERR
int quadratic(int a, int b, int c, double &root1, double &root2){ double x = a*1.0, y = b*1.0, z = c*1.0; if(a == 0){ return DIV_ZERO;}  double temp = sqrt(pow(y,2) - (4 * x * z)); if(static_cast<int>(temp) >= 0){  root1 = ((-1 * y) - temp)/(2*x); root2 = ((-1 * y) + temp)/(2*x); return OK; } return SQRT_ERR; }

/// @brief main driver for the mathematics program
int main()
{
    string operation, opp;
    int number1, number2, number3, numOperands, result, check = 1;
    double answer = 0.0, answer2 = 0.0;
    // Acquire the operation the user wishes to perform
    cout << "Please choose an operation: ";
    cin >> operation;
    cout << endl;

    // TODO: keep acquiring an operation from the user as long as the 
    //          user has typed an invalid operation. 
    //          Output the invalid operation error with every iteration.
    if(operation == "division"){    check = 0;} else if(operation == "pythagorean"){    check = 0;} else if(operation == "quadratic"){  check = 0;}
    while(check == 1){
        cout << "Error: Operation not supported." << endl << "Please choose an operation: "; cin >> operation; cout << endl;
        if(operation == "division"){    check = 0;} else if(operation == "pythagorean"){    check = 0;} else if(operation == "quadratic"){  check = 0;}}
    // Acquire user numerical inputs
    // All remaining cin statements will exist in acquireOperands
    numOperands = acquireOperands(operation, number1, number2, number3);

    // TODO: test your functions as you develop them. Once 
    //          you are sure the function is working correctly, move to the
    //          next function. Once you have completed all the functions
    //          comment out or eliminate your "testing" code and 
    //          continue writing main

    // TODO: Perform the operation specified by the user
    //          For the specified operation, output the equation followed 
    //          by either the error or the result (but never both).
    
    if((numOperands == 2) && (operation == "division")){  result = division(number1, number2, answer); cout << "\nEquation: " << number1 << " / " << number2 << endl; if(result == OK){   cout << "Result: " << answer << endl;} else if(result == DIV_ZERO){ cout << "Error: Cannot divide by zero." << endl;}}
    if((numOperands == 2) && (operation == "pythagorean")){  result = pythagorean(number1, number2, answer); cout << "\nEquation: sqrt(" << number1 << "^2 + " << number2 << "^2)" << endl << "Result: " << answer << endl;}
    if((numOperands == 3) && (operation == "quadratic")){   result = quadratic(number1, number2, number3, answer, answer2); cout << "\nEquation: " << number1 << "x^2 + " << number2 << "x + " << number3 << " = 0" << endl; if(result == OK){ cout << "Result: "; if(static_cast<int>(answer) == static_cast<int>(answer2)){   cout << abs(answer) << endl;}else{ cout << "-" << answer2 << ", " << answer*-1 << endl;}} else if(result == DIV_ZERO){ cout << "Error: Cannot divide by zero." << endl;} else if(result == SQRT_ERR){ cout << "Error: Negative Discriminant." << endl;}}
    return 0;
}
