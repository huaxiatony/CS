#include "IntList.h"

IntList::IntList() : head(0), tail(0){}

IntList::~IntList(){                            //Deconstructor
    while(!empty())
        pop_front();}
        
void IntList::display() const{                  //Displays all the nodes in the IntList
    if(!empty()){   
    IntNode *current = head;                    //Current node = head->next is what this signifies        
    while(current->next != 0){                  //Tests for head and tail and next
        cout << current->data << " ";
        current = current->next;}
    cout << current->data;                      //Tests for data
    return;}
}

void IntList::push_front(int value){
    IntNode *temp = new IntNode(value);
    temp->next = head;
    head = temp;}

void IntList::pop_front(){
    if(empty())
        return;
    IntNode *temp = head;
    head = head->next;
    delete temp;
    return;
}

bool IntList::empty() const{
    if(head == 0)
        return true;
    return false;}