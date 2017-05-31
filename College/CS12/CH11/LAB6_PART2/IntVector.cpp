#include <stdexcept>
#include "IntVector.h"

using namespace std;

IntVector::IntVector() : sz(0), cap(0), data(0){}

IntVector::IntVector(unsigned size, int value){
    sz = size;
    cap = size;
    data = new int[size];                   //Creates a new dyanimcally-allocated array
    for(unsigned int i = 0; i < sz; ++i)    //Assigns all the elements of data[] with the value of 'value';
        data[i] = value;
}

IntVector::~IntVector(){
    delete [] data;     //Frees memory pointed to data
}

unsigned IntVector::size() const{
    return sz;          //Returns size
}

unsigned IntVector::capacity() const{
    return cap;         //Returns capacity
}

bool IntVector::empty() const{
    if(sz == 0)         //If size is 0, returns true, else false.
        return true;
    return false;
}

const int & IntVector::at(unsigned index) const{
    if(index >= sz)     //If index is greater than the size of the IntVector, throws out of range error
        throw out_of_range("IntVector::at_range_check");
    
    return data[index]; //Else returns the element at the index 
}
const int & IntVector::front() const{
    return data[0];
}

const int & IntVector::back() const{
    return data[sz - 1];
}