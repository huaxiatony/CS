#include <iostream>
using namespace std;

// FIXME (3) multiply function
double multiply(double num1, double num2, double& prod){
    prod = num1 * num2;
    return prod;}
// FIXME (5) divide function
double divide(double num1, double num2, double& quot){
    quot = num1 / num2;
    return quot;
}

int main() {
   double num1 = 0.0;
   double num2 = 0.0;
   double prod = 0.0; //product of numbers
   double quot = 0.0; //quotient of numbers

   // FIXME (1) Prompt user for floating point numbers (type double) and print them
   cout << "Enter the first floating point number: ";
   cin >> num1;
   cout << "\nEnter the second floating point number: ";
   cin >> num2;
   cout << endl;
   cout << "\nFirst floating point number: " << num1 << endl << "Second floating point number: " << num2 << endl << endl;
   
   //Call multiply function
   multiply(num1, num2, prod);

   // FIXME (2) Call divide function
   divide(num1, num2, quot);

   // FIXME (4) Output result of num1 * num2
   cout << num1 << " * " << num2 << " = " << prod << endl;

   // FIXME (6) Output result of num1 / num2
   cout << num1 << " / " << num2 << " = " << quot << endl;


   return 0;
}