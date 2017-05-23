#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <cctype>
#include <ctime>
#include <cmath>

using namespace std;

/*
     ___   .___________.___________. _______ .__   __. .___________. __    ______   .__   __.
    /   \  |           |           ||   ____||  \ |  | |           ||  |  /  __  \  |  \ |  |
   /  ^  \ `---|  |----`---|  |----`|  |__   |   \|  | `---|  |----`|  | |  |  |  | |   \|  |
  /  /_\  \    |  |        |  |     |   __|  |  . `  |     |  |     |  | |  |  |  | |  . `  |
 /  _____  \   |  |        |  |     |  |____ |  |\   |     |  |     |  | |  `--'  | |  |\   |
/__/     \__\  |__|        |__|     |_______||__| \__|     |__|     |__|  \______/  |__| \__|


You will NOT be editing this file. Don't do it. Write everything in your source code file.
Do not read past line 70 unless you are VERY comfortable with functions.

 */                                                                                            

// These are the functions defined in this file
bool testMyMax();
bool testMyMin();
bool testMyAbs();
bool testMyFabs();
bool testModInt();
bool testModDouble();
bool testMyIsUpper();
bool testMyIsLower();
bool testMyIsDigit();
bool testMyIsAlpha();
bool testMyIsAlnum();
bool testMyToUpper();
bool testMyToLower();
bool testFlEq();
bool testRandRange();
bool testFindCharBegin();
bool testFindStringBegin();
bool testFindChar();
bool testFindString();
void runAllTests();


// These are the functions you are going to make:
int myMax(int, int);
int myMin(int, int);
int myAbs(int);
double myFabs(double);
int modInt(int, int);
double modDouble(double, double);
bool myIsUpper(char);
bool myIsLower(char);
bool myIsDigit(char);
bool myIsAlpha(char);
bool myIsAlnum(char);
char myToUpper(char);
char myToLower(char);
bool flEq(double, double, double);
int randRange(int, int);
int findCharBegin(string, char);
int findStringBegin(string, string);
int findChar(string, char, int);
int findString(string, string, int);






bool testMyMax() {
    cout << "Beginning tests on myMax... ";
    if (myMax(1, 2) != 2) {
        return false;
    } else if (myMax(2, 1) != 2) {
        return false;
    } else if (myMax(2000000000, -1) != 2000000000) {
        return false;
    } else if (myMax(-1 ,2000000000) != 2000000000) {
        return false;
    } else if (myMax(0, 0) != 0) {
        return false;
    } else if (myMax(5, 5) != 5) {
        return false;
    } else if (myMax(-5, -5) != -5) {
        return false;
    }
    cout << "All tests completed successfully." << endl;
    return true;
}

bool testMyMin() {
    cout << "Beginning tests on myMin... ";
    if (myMin(1, 2) != 1) {
        return false;
    } else if (myMin(2, 1) != 1) {
        return false;
    } else if (myMin(2000000000, -1) != -1) {
        return false;
    } else if (myMin(-1 ,2000000000) != -1) {
        return false;
    } else if (myMin(0, 0) != 0) {
        return false;
    } else if (myMin(5, 5) != 5) {
        return false;
    } else if (myMin(-5, -5) != -5) {
        return false;
    }
    cout << "All tests completed successfully." << endl;
    return true;
}

bool testMyAbs() {
    cout << "Beginning tests on myAbs... ";
    if (myAbs(10) != 10) {
        return false;
    } else if (myAbs(0) != 0) {
        return false;
    } else if (myAbs(-10) != 10) {
        return false;
    }
    cout << "All tests completed successfully." << endl;
    return true;
}

bool testMyFabs() {
    cout << "Beginning tests on myFabs... ";
    if (myFabs(10) != 10.0) {
        return false;
    } else if (myFabs(10.5) != 10.5) {
        return false;
    } else if (myFabs(0.0) != 0.0) {
        return false;
    } else if (myFabs(-0.0) != 0.0) {
        return false;
    } else if (myFabs(-10) != 10.0) {
        return false;
    } else if (myFabs(-10.5) != 10.5) {
        return false;
    }
    cout << "All tests completed successfully." << endl;
    return true;
}

bool testModInt() {
    cout << "Beginning tests on modInt... ";
    int largePrime = 99991;
    for (int i = 1; i < 100000; ++i) {
        if (modInt(largePrime, i) != (largePrime % i)) {
            return false;
        }
    }
    cout << "All tests completed successfully." << endl;
    return true;
}

bool testModDouble() {
    cout << "Beginning tests on modDouble... ";
    double largePrime = 99991.0;
    for (double i = 1.0; i < 100000.0; i += 0.1) {
        if (fabs(modDouble(largePrime, i) - fmod(largePrime, i)) > 0.01) {
            return false;
        }
    }
    cout << "All tests completed successfully." << endl;
    return true;
}

bool testMyToUpper() {
    cout << "Beginning tests on myToUpper... ";
    for (char c = 0; c < 127; ++c) {
        if (myToUpper(c) != toupper(c)) {
            return false;
        }
    }
    cout << "All tests completed successfully." << endl;
    return true;
}

bool testMyToLower() {
    cout << "Beginning tests on myToLower... ";
    for (char c = 0; c < 127; ++c) {
        if (myToLower(c) != tolower(c)) {
            return false;
        }
    }
    cout << "All tests completed successfully." << endl;
    return true;
}

bool testMyIsUpper() {
    cout << "Beginning tests on myIsUpper... ";
    for (char c = 0; c < 127; ++c) {
        if ((myIsUpper(c) || isupper(c)) && (!myIsUpper(c) || !isupper(c))) {
            return false;
        }
    }
    cout << "All tests completed successfully." << endl;
    return true;
}

bool testMyIsLower() {
    cout << "Beginning tests on myIsLower... ";
    for (char c = 0; c < 127; ++c) {
        if ((myIsLower(c) || islower(c)) && (!myIsLower(c) || !islower(c))) {
            return false;
        }
    }
    cout << "All tests completed successfully." << endl;
    return true;
}

bool testMyIsDigit() {
    cout << "Beginning tests on myIsDigit... ";
    for (char c = 0; c < 127; ++c) {
        if ((myIsDigit(c) || isdigit(c)) && (!myIsDigit(c) || !isdigit(c))) {
            return false;
        }
    }
    cout << "All tests completed successfully." << endl;
    return true;
}

bool testMyIsAlpha() {
    cout << "Beginning tests on myIsAlpha... ";
    for (char c = 0; c < 127; ++c) {
        if ((myIsAlpha(c) || isalpha(c)) && (!myIsAlpha(c) || !isalpha(c))) {
            return false;
        }
    }
    cout << "All tests completed successfully." << endl;
    return true;
}

bool testMyIsAlnum() {
    cout << "Beginning tests on myIsAlnum... ";
    for (char c = 0; c < 127; ++c) {
        if ((myIsAlnum(c) || isalnum(c)) && (!myIsAlnum(c) || !isalnum(c))) {
            return false;
        }
    }
    cout << "All tests completed successfully." << endl;
    return true;
}

bool testFlEq() {
    cout << "Beginning tests on flEq... ";
    if (!flEq(21.0, 20.999, 0.01)) {
        return false;
    } else if (!flEq(20.999, 21.0, 0.01)) {
        return false;
    } else if (flEq(21.0, 20.99, 0.01)) {
        return false;
    } else if (flEq(20.99, 21.0, 0.01)) {
        return false;
    } else if (!flEq(20000.0, 10000.0, 10000.1)) {
        return false;
    } else if (!flEq(10000.0, 20000.0, 10000.1)) {
        return false;
    }
    cout << "All tests completed successfully." << endl;
    return true;
}

// WARNING: this function uses c++ concepts that are COMPLETELY beyond the
//          scope of this course. Proceed reading with caution, or skip
//          entirely.
bool testRandRange() {
    cout << "Beginning tests on randRange... ";

    if (randRange(0, 0) != 0) {
        return false;
    } else if (randRange(-10, -10) != -10) {
        return false;
    } else if (randRange(10, 10) != 10) {
        return false;
    }

    int arr[100]
      = {-15, -15, 16, -8, 12, 7, -3, 3, 19, 12, -1, 13, 4, -13, 1, 13,
        -4, 20, 10, 7, 15, 6, -7, -20, -12, 12, -1, -3, -18, 11, 19,
        -6, 3, 2, 6, -14, 5, 1, 10, -10, 0, -8, -11, -11, 0, -17, -1,
        -20, -15, 0, 19, 1, -18, 12, 14, -20, -14, -13, -10, -10, 7, 5,
        -2, 1, 5, 19, -5, 6, -12, -8, -2, 0, -5, 8, 8, -12, -20, 9, -1,
        10, -19, -11, 19, -18, 10, 10, -6, -7, -19, -19, -13, 20, -17,
        -20, 1, 18, 2, -5, 10, -14};
    // test for srand and preciseness
    for (int i = 0; i < 100; ++i) {
        srand(i);
        if (randRange(-20, 20) != arr[i]) {
            return false;
        }
    }
    // test for range sanity
    srand(time(0));
    int extreme = 5000;
    for (int i = -extreme; i < extreme; ++i) {
        for (int j = -extreme; j < extreme; ++j) {
            int val = randRange(i, j);
            if ((i <= j && (val < i || val > j)) ||
                (j <  i && (val < j || val > i))) {
                cout << '[' << i << ", " << j << "] -> " << val << "? ";
                return false;
            }
        }
    }
    cout << "All tests completed successfully." << endl;
    srand(time(0));
    return true;
}

bool testFindCharBegin() {
    cout << "Beginning tests on findCharBegin... ";
    string t0 = "";
    string t1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string t2 = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    if (findCharBegin(t1, 'x') != t1.find('x')) {
        return false;
    } else if (findCharBegin(t1, 'X') != t1.find('X')) {
        return false;
    } else if (findCharBegin(t1, '{') != t1.find('{')) {
        return false;
    } else if (findCharBegin(t1, '1') != t1.find('1')) {
        return false;
    } else if (findCharBegin(t1, '`') != t1.find('`')) {
        return false;
    } else if (findCharBegin(t2, 'k') != t2.find('k')) {
        return false;
    } else if (findCharBegin(t2, 'K') != t2.find('K')) {
        return false;
    } else if (findCharBegin(t2, '\0') != t2.find('\0')) {
        return false;
    } else if (findCharBegin(t0, 'a') != t0.find('a')) {
        return false;
    }
    cout << "All tests completed successfully." << endl;
    return true;
}

bool testFindStringBegin() {
    cout << "Beginning tests on findStringBegin... ";
    string t0 = "";
    string t1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string t2 = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    string s1 = "";
    string s2 = "a";
    string s3 = "abc";
    string s4 = "ac";
    string s5 = "zA";
    string s6 = "XYZ";
    string s7 = "XYZT";
    if (findStringBegin(t0, s1) != t0.find(s1)) {
        return false;
    } else if (findStringBegin(t1, s1) != t1.find(s1)) {
        return false;
    } else if (findStringBegin(t2, s1) != t2.find(s1)) {
        return false;
    } else if (findStringBegin(t1, s2) != t1.find(s2)) {
        return false;
    } else if (findStringBegin(t1, s3) != t1.find(s3)) {
        return false;
    } else if (findStringBegin(t1, s4) != t1.find(s4)) {
        return false;
    } else if (findStringBegin(t1, s5) != t1.find(s5)) {
        return false;
    } else if (findStringBegin(t1, s6) != t1.find(s6)) {
        return false;
    } else if (findStringBegin(t1, s7) != t1.find(s7)) {
        return false;
    } else if (findStringBegin(t2, s2) != t2.find(s2)) {
        return false;
    } else if (findStringBegin(t2, s3) != t2.find(s3)) {
        return false;
    } else if (findStringBegin(t2, s4) != t2.find(s4)) {
        return false;
    } else if (findStringBegin(t2, s5) != t2.find(s5)) {
        return false;
    } else if (findStringBegin(t2, s6) != t2.find(s6)) {
        return false;
    } else if (findStringBegin(t2, s7) != t2.find(s7)) {
        return false;
    }
    cout << "All tests completed successfully." << endl;
    return true;
}

bool testFindChar() {
    cout << "Beginning tests on findChar... ";
    cout << "[todo: write tests] ";
    cout << "All tests completed successfully." << endl;
    return true;
}

bool testFindString() {
    cout << "Beginning tests on findString... ";
    cout << "[todo: write tests] ";
    cout << "All tests completed successfully." << endl;
    return true;
}

void runAllTests() {
    if (!testMyMax()) {
        cout << "myMax function failed. Stopping..." << endl;
    } else if (!testMyMin()) {
        cout << "myMin function failed. Stopping..." << endl;
    } else if (!testMyAbs()) {
        cout << "myAbs function failed. Stopping..." << endl;
    } else if (!testMyFabs()) {
        cout << "myFabs function failed. Stopping..." << endl;
    } else if (!testModInt()) {
        cout << "modInt function failed. Stopping..." << endl;
    } else if (!testModDouble()) {
        cout << "modDouble function failed. Stopping..." << endl;
    } else if (!testMyIsUpper()) {
        cout << "myToUpper function failed. Stopping..." << endl;
    } else if (!testMyIsLower()) {
        cout << "myIsLower function failed. Stopping..." << endl;
    } else if (!testMyIsDigit()) {
        cout << "myIsDigit function failed. Stopping..." << endl;
    } else if (!testMyIsAlpha()) {
        cout << "myIsAlpha function failed. Stopping..." << endl;
    } else if (!testMyIsAlnum()) {
        cout << "myIsAlnum function failed. Stopping..." << endl;
    } else if (!testMyToUpper()) {
        cout << "myToUpper function failed. Stopping..." << endl;
    } else if (!testMyToLower()) {
        cout << "myToLower function failed. Stopping..." << endl;
    } else if (!testFlEq()) {
        cout << "flEq function failed. Stopping..." << endl;
    } else if (!testRandRange()) {
        cout << "randRange function failed. Stopping..." << endl;
    } else if (!testFindCharBegin()) {
        cout << "findCharBegin function failed. Stopping..." << endl;
    } else if (!testFindStringBegin()) {
        cout << "findStringBegin function failed. Stopping..." << endl;
    } else if (!testFindChar()) {
        cout << "findChar function failed. Stopping..." << endl;
    } else if (!testFindString()) {
        cout << "findString function failed. Stopping..." << endl;
    }
}
