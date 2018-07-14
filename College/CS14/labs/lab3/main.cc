/**
* Course: CS014 Summer 2018
*
* First Name: Benjamin
* Last Name: Lee
* Username: blee073
* email address: this must be your cs or UCR student email address
*
*
* Assignment: lab3
* Filename : main.cc
*
* I hereby certify that the contents of this file represent
* my own original individual work. Nowhere herein is there 
* code from any outside resources such as another individual,
* a website, or publishings unless specifically designated as
* permissible by the instructor or TA.
*/ 

#include <iostream>
#include <stdexcept>
#include "Stack.H"

using namespace std;

int main(){
    Stack<int> arr;
    // Regular push
    // try{
    //     cout << "Regular push test: ";
    //     arr.push(1);
    //     arr.push(2);
    //     arr.push(3);
    //     while(!arr.is_empty()){
    //         cout << arr.top() << " ";
    //         arr.pop();
    //     }
    //     cout << endl;
    // } catch (...) {
    //     cout << "Error reached here\n";
    // }
    
    // Push overflow
    // try{
    //     cout << "Overflow push test: ";
    //     arr.push(1);
    //     arr.push(2);
    //     arr.push(3);
    //     arr.push(4);
    //     arr.push(5);
    //     arr.push(6);
    //     arr.push(7);
    //     cout << endl;
    // } catch (overflow_error& a){
    //     cout << "ERROR. Out of upper bounds" << endl;
    // }
    
    try{
        cout << "Pop test: ";
        cout << "Pushed 1: " << arr.top() << endl << "Now popping twice\n";
        arr.pop();
    } catch (underflow_error& c){
        cout << "ERROR. Out of lower bounds\n";
    }
    
    // // Regular top
    // try{
    //     cout << "Regular top test: ";
    //     arr.push(1);
    //     cout << "Pushed 1: " << arr.top() << endl;
    //     cout << "Top exception: ";
    //     arr.pop();
    //     arr.pop();
    // } catch (underflow_error& d){
    //     cout << "ERROR. Tried to pop on empty stack\n";
    // }
    
    // // Infix to Postfix Function Test
    // Stack<char > b;
    // cout << "Testing: a + b * c - (d * e + f) * g: \n";
    // cout << "After calling function: " << b.in_to_pos("test.txt") << endl;
    // Stack<char> b;
    // cout << b.in_to_pos("test.txt");
    
    // // RPN Evaluation
    // Stack<char > c;
    // string p = "12*3+4-";
    // cout << "Testing: 1 * 2 + 3 - 4 = 1: \n";
    // c.RPN_Eval(p);
    

    
    return 0;
}