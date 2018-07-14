/**
 * UCR CS&E
 * CS014 Lab 1
 * List.h
 */
 /**
 * Course: CS014 Summer 2018
 *
 * First Name: Benjamin 
 * Last Name: Lee
 * Username: blee073
 * email address: blee073@ucr.edu
 *
 *
 * Assignment: lab1
 * Filename : List.h
 *
 * I hereby certify that the contents of this file represent
 * my own original individual work. Nowhere herein is there 
 * code from any outside resources such as another individual,
 * a website, or publishings unless specifically designated as
 * permissible by the instructor or TA.
 */ 

#ifndef LIST_H_
#define LIST_H_

#include "Node.h"
#include "Iterator.h"

class List
{
public:
	List();
	~List();
	void push_back(int value);
	void push_front(int value);
	void print()const;
	Node* get_head()const;
	Node* get_tail()const;		
	Iterator begin()const;
	Iterator end()const;
	
	/* These functions are all yours! */
	void sorted_insert(int value);
	void print_reverse()const;
	void prev_pos();
	void insert_after(int i, int value);
	void insert_before(int i, int value);
	int count(int value)const;
	
private:
	Node* head;
	Node* tail;
};

#endif /*LIST_H_*/
