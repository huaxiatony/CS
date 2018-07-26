/**
 * Course: CS014 Summer 2018
 *
 * First Name: Benjamin
 * Last Name: Lee
 * Username: blee073
 * email address: this must be your cs or UCR student email address
 *
 *
 * Assignment: assn4
 * Filename : main.cc
 *
 * I hereby certify that the contents of this file represent
 * my own original individual work. Nowhere herein is there 
 * code from any outside resources such as another individual,
 * a website, or publishings unless specifically designated as
 * permissible by the instructor or TA.
 */ 
#include "pq_zero.H"
#include "pq_one.H"
#include <iostream>
using namespace std;

int main(){
    // pq_zero<int> a;
    // pq_one<int> a;
    vector<int> b;
    b.push_back(13);
    b.push_back(16);
    map<int,float> c;
    c[13] = 3;
    c[16] = 4;
    vector<float> d;
    d.push_back(3);
    d.push_back(1);
    // pq_zero<int> e(b,d);
    pq_one<int> e(b,d);
    e.display();
    e.pop();
    e.pop();
    e.pop();
    e.display();
    // e.push(1,1);
    // e.display();
    // d.display();
    // a.push(13,3);
    // a.push(16,4);
    // a.push(19,6);
    // a.push(14,2);
    // a.push(23,5);
    // a.push(17,7);
    // a.push(6,1);
    
    // a.push(1,1);
    // a.push(2,1);
    // a.display();
    
    // a.pop();
    // a.display();
    // a.pop();
    // a.display();
    
    return 0;
}