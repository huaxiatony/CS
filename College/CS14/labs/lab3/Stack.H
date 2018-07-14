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
 * Filename : Stack.H
 *
 * I hereby certify that the contents of this file represent
 * my own original individual work. Nowhere herein is there 
 * code from any outside resources such as another individual,
 * a website, or publishings unless specifically designated as
 * permissible by the instructor or TA.
 */ 

#ifndef __STACK_H_
#define __STACK_H_

#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <fstream>

using namespace std;

typedef int T;

template<typename T>
class Stack{
private:
    int size;
    T arr[5];
    int cap;
    
public:
    Stack();
    void push(const T& x);
    T& top();
    void pop();
    bool is_empty() const;
    // other functions
    string in_to_pos(string input);
    void RPN_Eval(string p);

private:
    int priority(char x);
    
};

#endif

template<typename T>
Stack<T>::Stack(){
    size = 0;
    cap = 10;
}

template<typename T>
void Stack<T>::push(const T& x){
    if(size >= cap){
        throw overflow_error("stackoverflow.com\n");
    } else {
        size++;
        arr[size - 1] = x;
    }
}


template<typename T>
T& Stack<T>::top(){
    if(size == 0){
        throw underflow_error("stackunderflow.com\n");
    } else {
        return arr[size - 1];
    }
}

template<typename T>
void Stack<T>::pop(){
    if(size == 0){
        throw underflow_error("stackunderflow.com\n");
    } else {
        size--;
    }
}

template<typename T>
bool Stack<T>::is_empty() const{
    return size == 0 ? true : false;
}

template<typename T>
string Stack<T>::in_to_pos(string input){
    // Squished all the variable declarations onto one line. 
    Stack<char> S; char ip; string op = ""; ifstream in;
    in.open(input.c_str());
    if(in.is_open()){
        while(in >> ip){
            if((ip >= '0' && ip <= '9') || (ip >= 'a' && ip <= 'z') || (ip >= 'A' && ip <= 'Z')){
                op += ip;
            } else if(ip == '('){
                S.push(ip);
            } else if(ip == ')'){
                while(!S.is_empty() && S.top() != '('){
                    char i = S.top();
                    S.pop();
                    op += i;
                }
                if(S.top() == '(')
                    S.pop();
            } else {
                while(!S.is_empty() && priority(ip) <= priority(S.top())){
                    char i = S.top();
                    S.pop();
                    op += i;
                }
                S.push(ip);
            }
        }
        while(!S.is_empty()){
            char i = S.top();
            S.pop();
            op += i;
        }
    } else {
        cout << "Error opening " << input << endl; 
        exit(1);
    }
    in.close();
    return op;
}
template <typename T>
int Stack<T>::priority(char x){
    if(x == '+' || x == '-')
        return 1;
    else if(x == '*')
        return 2;
    return 0;
}


// Assumed that RPN_Eval is followed from infix to postfix function
template<typename T>
void Stack<T>::RPN_Eval(string p){
	Stack<char> S;
	char v, s, c;
	for(int i = 0; i < p.length(); ++i){
		if(static_cast<char>(p[i]) - '0' >= 0 && static_cast<char>(p[i]) - '0' <= 9){
			S.push(p[i]);
		} else if(p[i] == '+' || p[i] == '-' || p[i] == '*'){
		    s = p[i];
		    int b = S.top() - '0';
			S.pop();
			if(S.is_empty())
				throw underflow_error("Shouldn't be empty1");
			else{
				int a = S.top() - '0';
				S.pop();
				int x;
				if(s == '+')
					x = a + b;
				else if(s == '-')
				    x = a - b;
				else if(s == '*')
					x = a * b;
				c = '0' + x;
				S.push(c);
			}
		} 
		if(S.is_empty())
			throw underflow_error("Shouldn't be empty2");
	}
	v = S.top();
	S.pop();
	if(!S.is_empty())
		throw runtime_error("Should be empty");
	else 
		cout << v << endl;
}

