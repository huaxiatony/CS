#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() {
    int x = 0, y = 1, z = 2;
    bool tester = x > y || z > x;
    
    cout << boolalpha << tester;
    
    return 0;
}