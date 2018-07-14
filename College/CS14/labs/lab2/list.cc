// CS14
// This file contains all of the functions for the list class

#include "list.h"
#include <cstdlib>
#include <iostream>

using namespace std;

List::List ( ) {

  head = NULL;

}

//------------------------------------------------------------------------

List::~List ( ) {

  // ADD: to avoid memory leaks, make sure you delete all allocated memory
  Node* next;
  for ( Node* temp = head; temp != NULL; temp = next ) {
    next = temp->next;
    delete temp;
  }
  head = NULL;

}

//------------------------------------------------------------------------

int 
List::size ( ) {
  int size = 0;
  for ( Node* temp = head; temp != NULL; temp = temp->next ) {
    size ++;
  }
  return size;
}

//------------------------------------------------------------------------

void 
List::push_front ( int value ) {

  Node* insert = new Node;
  insert->value = value;
  insert->next = head;
  head = insert;

}

//------------------------------------------------------------------------

void
List::push_back ( int value ) {

  if ( size ( ) == 0 ) {
    push_front ( value );
  }
  else {
    Node* tail;
    for ( tail = head; tail->next != NULL; tail = tail->next );
    Node* insert = new Node;
    insert->value = value;
    insert->next = NULL;
    tail->next = insert;
  }

}

//------------------------------------------------------------------------

void 
List::print ( ) {

  if ( size ( ) == 0 ) {
    cout << "No elements in the array" << endl;
    return;
  }

  for ( Node* temp = head; temp != NULL; temp = temp->next ) {
    cout << temp->value << " ";
  }
  cout << endl;
}

List& List::operator=(const List& x){
  if(this == &x){
    return *this;
  } 
  while(this->head != NULL){
    pop_front();
  }
  for(Node* curr = x.head; curr != NULL; curr = curr->next){
    push_back(curr->value);
  }
  return *this;
  
}

void List::pop_front(){
  Node* temp = head->next;
  delete head;
  head = temp;
}