/**
 * UCR CS&E
 * CS014 Lab 1
 * List.cpp
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
 * Filename : List.cpp
 *
 * I hereby certify that the contents of this file represent
 * my own original individual work. Nowhere herein is there 
 * code from any outside resources such as another individual,
 * a website, or publishings unless specifically designated as
 * permissible by the instructor or TA.
 */ 

#include <iostream>
#include <cstdlib>
#include "List.h"
#include "Node.h"
#include "Iterator.h"

using namespace std;

/**
 * Constructor
 */
List::List()
{
	head = NULL;
	tail = NULL;
}

/**
 * Destructor
 */
List::~List()
{
	cout << "\nList Destructor called...\n";
	
	while(head)
	{
		Node* temp = head;
		head = head->get_next();
		cout << "Deleting.... " << temp->get_value() << endl;
		delete temp;
	}	
}

/**
 * push_back() inserts a new node at the tail
 * end of the list, with a given value
 * @param value an integer Node value
 * @return none
 */
void List::push_back(int value)
{
	Node* new_node = new Node(value);
	
	/* list is empty */
	if(!head)
	{
		head = new_node;
		tail = new_node;
	}
	else
	{
		new_node->set_prev(tail);
		tail->set_next(new_node);
		tail = new_node;
	}
}
/**
 * push_front() inserts a new node at the 
 * front of the list, with a given value
 * @param value an integer Node value
 * @return none
 */
void List::push_front(int value)
{
	Node* new_node = new Node(value);
		
	/* list is empty */
	if(!head)
	{
		head = new_node;
		tail = new_node;
	}
	else
	{
		new_node->set_next(head);
		head->set_prev(new_node);
		head = new_node;			
	}
}

/**
 * print()const prints the contents of 
 * the list to the console, starting
 * at the head of the list
 * @param none
 * @return none
 */
void List::print()const
{
	cout << "\nList contents:\n";

	/* list is empty */
	if(!head)
	{
		cout << "empty\n";
		return;
	}
	
	for(Iterator iter = begin(); !iter.is_equal(end()); iter.next_pos())
	{
		cout << iter.get_value() << ", ";
	}
	cout << "\n";
}

/**
 * get_head()const returns the head
 * Node pointer which points to the
 * first element in the list
 * @param none
 * @return List's head Node pointer
 */
Node* List::get_head()const
{
	return head;
}

/**
 * get_tail()const  returns the tail
 * Node pointer which points to the
 * last element in the list
 * @param none
 * @return List's tail Node pointer
 */
Node* List::get_tail()const
{
	return tail;
}

/**
 * begin()const gets beginning postion of the list
 * @param none
 * @return an Iterator pointing to the beginning of the list
 */
Iterator List::begin()const
{
	Iterator iter;
	iter.set_curr_pos(get_head());
	iter.set_last_pos(get_tail());
	return iter;
}

/**
 * end()const gets past-the-end postion of the list
 * @param none
 * @return an Iterator pointing just past the end of the list
 */
Iterator List::end()const
{
	Iterator iter;
	iter.set_curr_pos(NULL);
	iter.set_last_pos(get_tail());
	return iter;
}

void List::sorted_insert(int value){
	// if empty
	if(!head)
		push_back(value);
	// if value is less than head's value
	else if(head->get_value() >= value)
		push_front(value);
	// if value is greater than tail's value
	else if(tail->get_value() <= value)
		push_back(value);
	// if none of the previous conditions apply, then it must be somewhere in the middle of the list, with the ends being excluded
	else {
		Iterator current = begin();
		Node *t = new Node(value);
		while(current.get_curr_pos()->get_next() != NULL && current.get_curr_pos()->get_next()->get_value() < value){
			current.next_pos();
		}
		t->set_next(current.get_curr_pos()->get_next());
		t->set_prev(current.get_curr_pos()->get_prev());
		current.get_curr_pos()->get_next()->set_prev(t);
		current.get_curr_pos()->set_next(t);
	}
}

void List::print_reverse()const{
	Iterator curr = begin();
	Node* t = curr.get_last_pos();
	while(t->get_prev() != NULL){
		cout << t->get_value() << ", ";
		t = t->get_prev();
	}
	cout << curr.get_curr_pos()->get_value() << ", ";
	cout << "\n";
}

void List::insert_after(int i, int value){
	int j = 0, k = 0;
	Node* t = new Node(value);
	for(Iterator itr = begin(); !itr.is_equal(end()); itr.next_pos()){
		++j;
	}
	// If empty
	if(!head)
		push_front(value);
	// If out of lower bounds
	else if(i < 0){
		cout << "Out of lower bounds\n";
	// If out of upper bounds
	} else if(i >= j){
		cout << "Out of upper bounds\n";
	// If i is the tail, insert after tail
	} else if(i == j - 1){
		tail->set_next(t);
		t->set_prev(tail);
		tail = t;
	} else {
		for(Iterator iter = begin(); !iter.is_equal(end()); iter.next_pos()){
			if(i == k){
				Node* sucNode = iter.get_curr_pos()->get_next();
				t->set_next(sucNode);
				t->set_prev(iter.get_curr_pos());
				iter.get_curr_pos()->set_next(t);
				sucNode->set_prev(t);
			}
			++k;
		}
	}
	
}

void List::insert_before(int i, int value){
	int j = 0, k = 1;
	Node* t = new Node(value);
	for(Iterator itr = begin(); !itr.is_equal(end()); itr.next_pos())
		++j;
	// If empty
	if(!head)
		push_front(value);
	// If out of lower bounds
	else if(i < 0){
		cout << "Out of lower bounds\n";
	// If out of upper bounds
	} else if(i >= j){
		cout << "Out of upper bounds\n";
	// If i is head
	} else if(i == 0){
		push_front(value);
	// If i is the tail, insert before tail
	/*
	} else if(i == j - 1){
		tail->get_prev()->set_next(t);
		t->set_prev(tail->get_prev());
		t->set_next(tail);
		tail->set_prev(t);
	*/
	} else {
		for(Iterator iter = begin(); !iter.is_equal(end()); iter.next_pos()){
			if(i == k){
				Node* prevNode = iter.get_curr_pos()->get_prev();
				t->set_prev(prevNode);
				t->set_next(iter.get_curr_pos());
				iter.get_curr_pos()->set_prev(t);
				prevNode->set_next(t);
				
			}
			++k;
		}
	}
}

int List::count(int value)const{
	int counter = 0;
	for(Iterator itr = begin(); !itr.is_equal(end()); itr.next_pos()){
		if(itr.get_value() == value){
			++counter;
		}
	}
	return counter;
}
