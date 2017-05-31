#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double vectorMedian(vector<int> vec){
    int v = vec.size();
    if(v%2 == 0){
        return ((static_cast<double>(vec.at(v/2)) + static_cast<double>(vec.at(v/2 - 1)))/2);
    }
    else{
        return static_cast<double>(vec.at(v/2));
    }
    return -1.0;
}

int main(){
    vector<int> vec;
    sort(vec.begin(),vec.end());
    
    return 0;
    
}