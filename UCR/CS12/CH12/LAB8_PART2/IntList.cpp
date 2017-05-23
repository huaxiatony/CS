#include "IntList.h"
#include <iostream>

using namespace std;

/* Initializes an empty list.*/
IntList::IntList() : head(0){}

/* Inserts a data value to the front of the list.*/
void IntList::push_front(int value){
    IntNode* oldHead = head;
    head = new IntNode(value);
    head->next = oldHead;
    return;
}

/* Outputs to a single line all of the int values stored in the list, each separated by a space. 
   This function does NOT output a newline or space at the end.*/
ostream & operator<<(ostream &out, const IntList &rhs){
    //IntNode* currentNode = rhs.head;
    return operator << (out, rhs.head);
}

/* Returns true if the integer passed in is contained within the IntList, 
      otherwise returns false.*/
bool IntList::exists(int value) const{
    IntNode* toCheck = head;
    if(exists(toCheck, value))
        return true;
    else
        return false;
}

/* Helper function that returns true if the integer passed in is contained within
      the IntNodes starting from the IntNode whose address is passed in,
      otherwise returns false.*/
bool IntList::exists(IntNode *actualNode, int value) const{
    bool actual = false;
    if(actualNode == 0)
        return false;
    else if(actualNode->data == value)
        return true;
    else
        actual = exists(actualNode->next, value);
    return actual;
}

/* Helper function that passes in the address of a IntNode within an IntList and outputs
   all of integers within the IntList starting from this IntNode.*/
ostream & operator<<(ostream &out, IntNode *rhs){
    if(rhs == 0)
        return out;
    else{
        out << rhs->data;
        if(rhs->next != 0)
            out << " ";
        operator<<(out, rhs->next);
    }
    return out;
}