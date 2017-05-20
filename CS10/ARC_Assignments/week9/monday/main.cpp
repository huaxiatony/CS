// Stanley Ari Cohen
// scohe001@ucr.edu
// Created          01/12/2015
// Last Modified    01/12/2015

#include <iostream>
#include <vector>
using namespace std;

//Prints the elements of vector v with spaces separating each element
void printVector(const vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        if (i < v.size() - 1){
            cout << v.at(i) << ' ';
        }
        else{
            cout << v.at(i);
        }
    }
}

int mod(vector<int> &a, int sz) {
    for(int x=0; x <= sz; x += 2) {
        swap(a.at(x), a.at(x%3));
        for(int y = 0; y < a.size(); ++y){
            cout << a.at(y) << " ";
        }
        cout << endl;
    }
    cout << endl;
    return a.at(sz % 3) % 3;
}

void check(int &c, int sz) {
    //cout << c << '\t' << sz << '\t' << (int)(c-'a') << endl;
    if(sz >= c - sz) {
        c++;
    } else {
        c--;
    }
}



int main() {
    ///////////////////////////////////// 1 ////////////////////////////////////
    vector<int> a = {1, 2, 3, 4, 5};
    check(a[0], mod(a, 5));
    printVector(a); cout << endl;
    
    ///////////////////////////////////// 2 ////////////////////////////////////
    //Now when we output boolean values they'll show as "true" or "false"
    cout << boolalpha;
    vector<int> b = {3, 19, 18, 21, 12, 5, 19};
    vector<int> c = {4, 15, 23, 14, 23, 9, 20, 8, 5, 5};
    //Comparing vectors looks at each value until it finds two that are diff
    cout << (b < c) << endl; //will output True
    cout << mod(b, 6) << endl;
    cout << (b < c) << endl;
    
    
    ///////////////////////////////////// 3 ////////////////////////////////////
    printVector(b); cout << endl;
    for(int x=0; x < b.size(); x++) {
        check(b[x], x);
    }
    printVector(b); cout << endl;
    
    return 0;
}