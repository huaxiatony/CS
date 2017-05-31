#include <iostream>
#include <string>

using namespace std;

int main(){
    char sym = '*'; int len = 0;
    
    cout << "Please enter how long you want the inverted triangle to be: ";
    cin >> len;
    
    for(int i = len; i > 0; --i){
        for(int j = len; j > i; --j){
            cout << " ";
        }
        for(int k = 0; k < i; ++k){
        cout << sym;
        }
        cout << endl;
    }
    
    
    
    return 0;
}