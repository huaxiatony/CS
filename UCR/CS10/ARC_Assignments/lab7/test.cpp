#include "tests.cpp"

using namespace std;

// this is function stubbing:
// they will compile and run, but not produce the correct result.
// that is not the point.
// the point is to get everything to compile.

int myMax(int left, int right) {
    if(left >= right){  return left;}else if(right >= left){    return right;}
}

int myMin(int left, int right) {
    if(left <= right){  return left;}else if(right <= left){    return right;}
}

int myAbs(int n) {
    if(n < 0){  return n * -1;}else{    return n;}
}

double myFabs(double n) {
    if(n < 0.0){    return n * -1;}else{    return n;}
}

int modInt(int numerator, int denominator) {
    if(numerator < denominator){    return numerator;}
    return numerator - (numerator/denominator)*denominator;
}

double modDouble(double numerator, double denominator) {
    if(numerator < denominator){    return numerator;}
    return numerator - (static_cast<int>(numerator/denominator))*denominator;
}

bool myIsUpper(char myChar){
    if(myChar > 64 && myChar < 91){ return true;}
    return false;
}

bool myIsLower(char myChar){
    if(myChar > 96 && myChar < 123){    return true;}
    return false;
}

bool myIsDigit(char myChar){
    if(myChar >= '0' && myChar <= '9'){ return true;}
    return false;
}

bool myIsAlpha(char myChar){
    if(myChar >= 'A' && myChar <= 'z'){ return true;}
    return false;
}

bool myIsAlnum(char myChar){
    if(myChar >= '0' && myChar <= '9'){ return true;}
    else if(myChar >= 'A' && myChar <= 'z'){    return true;}
    return false;
}

char myToUpper(char myChar){
    if(myChar >= 'A' && myChar <= 'Z'){ return myChar;}else{   return myChar - 32;}
}

char myToLower(char myChar){
    if(myChar >= 'a' && myChar <= 'z'){ return myChar;}else{    return myChar + 32;}
}

void printRow(int myInt, char myChar){
    for(int i = 0; i < myInt; ++i){cout << myChar; } cout << endl;
}

bool flEq(double num1, double num2, double tolerance){
    double value = num1 - num2;
    if(value < 1.0 && value <= tolerance){  return true;}
    return false;
}

int randRange(int num1, int num2){
    if(num1 <= num2){   return num1 + rand() % num2;}
    return num2 + rand() % num1;
}

// TODO: stub the rest of the functions

int main() {
    // to run all tests:
    runAllTests();
}