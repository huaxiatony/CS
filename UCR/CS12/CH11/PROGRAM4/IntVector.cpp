#include <stdexcept>
#include "IntVector.h"

using namespace std;

IntVector::IntVector() : sz(0), cap(0), data(0){}

IntVector::IntVector(unsigned size, int value){
    sz = size;
    cap = size;
    data = new int[size];                       //Creates a new dyanimcally-allocated array
    for(unsigned int i = 0; i < sz; ++i)        //Assigns all the elements of data[] with the value of 'value';
        data[i] = value;
}

IntVector::~IntVector(){
    delete [] data;                             //Frees memory pointed to data
}

unsigned IntVector::size() const{
    return sz;                                  //Returns size
}

unsigned IntVector::capacity() const{
    return cap;                                 //Returns capacity
}

bool IntVector::empty() const{
    if(sz == 0)                                 //If size is 0, returns true, else false.
        return true;
    return false;
}

const int & IntVector::at(unsigned index) const{
    if(index >= sz)     //If index is greater than the size of the IntVector, throws out of range error
        throw out_of_range("IntVector::at_range_check");
    
    return data[index]; //Else returns the element at the index 
}

int & IntVector::at(unsigned index){
    if(index >= sz)     //If index is greater than the size of the IntVector, throws out of range error
        throw out_of_range("IntVector::at_range_check");
    
    return data[index]; //Else returns the element at the index 
}

void IntVector::insert(unsigned index, int value){  //Inserts value at index location of array. Shifts everything one to the right by 1
    if(index > sz){                                 //In case of out of bound attempts
        throw out_of_range("IntVector::insert_range_check");
        return;
    }
    else{
        if(sz + 1 > cap)
            expand();
    
        sz++;
        for(unsigned int i = sz; i > index; --i)
            data[i] = data[i-1];
        
        data[index] = value;
    }
}


void IntVector::erase(unsigned index){              //Deletes the target index number, and shifts everything to the left by 1
    if(index >= sz){                                 //In case of out of bound attempts
        throw out_of_range("IntVector::erase_range_check");
        return;
    }
    for(unsigned i = index; i < sz - 1; ++i)
        data[i] = data[i+1];
    sz--;
}

const int & IntVector::front() const{
    return data[0];
}

int & IntVector::front(){
    return data[0];
}

const int & IntVector::back() const{
    return data[sz - 1];
}

int & IntVector::back(){
    return data[sz - 1];
}

void IntVector::assign(unsigned n, int value){  //Assigns with new size and new value to all in the array
    /*if(cap < n){
    if(cap * 2 < n)
        expand(n - cap);
    else
        expand();
        cap * 2 < n ? expand(n - cap) : expand();
    }*/
	while(cap < n)
		cap * 2 < n ? expand(n - cap) : expand();
    sz = n;
    for(unsigned i = 0; i < sz; ++i)
        data[i] = value;
}


void IntVector::push_back(int value){               //Adds another value to the end of the array
    if(sz + 1 > cap)                                //If increased size is greater than cap, double it. 
        expand();
    sz++;
    data[sz - 1] = value;
}

void IntVector::pop_back(){                         //Decreases the array size by 1 and therefore eliminating the last element
    if(empty())
        return;
    sz--;
}

void IntVector::clear(){                            //Sets size equal to 0;
    sz = 0;
}

void IntVector::resize(unsigned size, int value){   //changes the size into user-specified amount, and loaded with user-specified value
    /*if(size < sz)
        sz = size;
    else{
        if(cap < size){
            if(cap * 2 < size)
                expand(size - cap);
            else
                expand();
        }
        for(unsigned int i = sz; i < size; ++i){
            data[i] = value;
        }    
            
        sz = size;
    }*/
	while(cap < size)
		cap * 2 < size ? expand(size - cap) : expand();
	
	if(sz < size){
		for(unsigned int i = sz; i < size; ++i)
            data[i] = value;
	}
	sz = size;	
}

void IntVector::reserve(unsigned n){            //reserves n amount of elements for future purposes
    //if(cap < n)
	while(cap < n)
		cap * 2 > n ? expand(n - cap) : expand();
}


void IntVector::expand(){                       //If the capacity is not zero, then double the capacity size
    if(cap != 0){                   
        cap *= 2;
        int *temp = new int[cap];               //Reallocating memory for the dynamically allocated array and updates value of capacity
        
        for(unsigned i = 0; i < sz; ++i)
            temp[i] = data[i];
            
        delete [] data;                         //In case anything goes wrong, delete the old data[] and set up a new one. 
        data = temp;
    }
    else{
        cap++;                                  //If capacity is zero, then increase capacity size by 1 and update the dynamically allocated array
        data = new int[1];
    }
}

void IntVector::expand(unsigned amount){        //Does not check if capacity size is 0. It doesn't need to. 
    cap += amount;
    int *temp = new int[cap];
    
    for(unsigned i = 0; i < sz; ++i)
        temp[i] = data[i];
        
    delete [] data;
    data = temp;
}