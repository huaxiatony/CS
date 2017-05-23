#include <iostream>
#include <string>

using namespace std;

int main() {
    char sym = '*'; int len;
    
    cout << "Please enter how big you want the triangle to be(lines): ";
    cin >> len; 
    
    for(int i = 0; i < len; ++i){
        for(int j = 0; j < i; j++){
            cout << sym << " ";
        }
        cout << endl;
    }
    
    
    
    
    
    return 0;
}