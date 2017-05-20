#include "IntList.h"
#include <string>

//Edit: Used standard bracket placement
//Edit2: The error seemed to be w/ using ->next for the while loop conditions. Next time, just use the actual node. 

IntList::IntList() : head(0), tail(0){}

IntList::~IntList(){                            //Deconstructor
    IntNode* currentNode = head;                //Changed the deconstructor from Lab, see if dangling node problem is fixed with it.
    while(currentNode != 0){                    
        head = head->next;
        delete currentNode;
        currentNode = head; 
    }
}
        
void IntList::display() const{					//Displays the List
	IntNode* currentNode = head;
    while(currentNode != 0){                     
        cout << currentNode->data;
        if(currentNode->next != 0)
            cout << " ";
        currentNode = currentNode->next;
    }
}

void IntList::push_front(int value){            //Inserts a new node in the top of the list aka the 'head' (Modified post-Lab 5)
    IntNode* newNode = new IntNode(value);
    if(head == 0){
        head = newNode; tail = head;
    }
    else{
        newNode->next = head; head = newNode;
    }
}

void IntList::pop_front(){                      //removes the whole head node (Modified)
    if(head != 0){
        IntNode* nextHead = head->next;
        delete head;
        head = nextHead;
        if(head == 0)
            tail = head;
    }
    else{
        head = 0; tail = 0;
    }
}

bool IntList::empty() const{                    //If empty return true, else return false
    if(head == 0)
        return true;
    return false;
}
    
//Program 5 
    
IntList::IntList(const IntList &cpy){                    //Copies the LinkedList in the parameter into this list
    head = 0; tail = 0;
    
    IntNode* current = cpy.head;
    
    while(current != 0){
        push_back(current->data);
        current = current->next;
    }
        
    return;
}

IntList & IntList::operator=(const IntList &rhs){       //Overloaded assignment operator to set one LinkedList to another.
    if(this == &rhs)
        return *this;
    
    clear();
    IntNode* copiedNode = rhs.head;
    while(copiedNode != 0){                                   
        push_back(copiedNode->data);
        copiedNode = copiedNode->next;}
    
    return *this;
}

void IntList::push_back(int value){                     //Inserts the new node at the tail of the LinkedList
    IntNode* temp = new IntNode(value);                 //Else if the list was empty to begin with, set up so that it becomes the head
    
    if(empty()){
        temp->next = head;
        head = temp;
        tail = temp;
		return;
    }
    
    tail->next = temp;
    tail = temp;
    
    return;
}

void IntList::clear(){                                  //Deletes entire LinkedList w/o memory leak
	IntNode *toDelete = head;							//See if clear does not actually clear all dangling so modified
	while(toDelete != 0){                               
		head = head->next;
		delete toDelete;
		toDelete = head;
	}
}

void IntList::selection_sort(){							//Sorts the LinkedList in ascending order using SelectionSort (modified to be w/ while loops) 
	IntNode* currentNode = head;
	
	while(currentNode != 0){    							//While loops appear to make SelectionSort simpler 
		IntNode* min = currentNode;							//Moved to the 2 nodes into the loop, to see if it fixed the error
		IntNode* compare = currentNode;
		while(compare != 0){                                
			if(compare->data < min->data)
				min = compare;
			compare = compare->next;
		}
		swap(min->data, currentNode->data);
		currentNode = currentNode->next;
	}
	return;
}
	

void IntList::insert_ordered(int value){				//Insert a new node in an ordered LinkedList (Removed return statements, changed back to former method)
	if(head == 0 && tail == 0){							//If the list is empty, simply insert it
		push_back(value);
		return;
	}
	if(head->next == 0){								//If there is only one node in the list, else skip
	head->data < value ? push_back(value) : push_front(value); 	return;} //Checking whether you need to insert it at the front or back of List
	if(head->data >= value)							    //If the inserted node is smaller than insert at head of list
		push_front(value);
	else if(tail->data <= value)
		push_back(value);
	else{										    //Otherwise, manually check to find the correct spot to insert the new node
		IntNode* current = head;
		while(current != 0){
			if(current->data < value && current->next->data >= value){
				IntNode* temp = new IntNode(value);
				temp->next = current->next;
				current->next = temp;
			}
			current = current->next;
		} 
	}
}

void IntList::remove_duplicates(){						//Removes any duplicate number that appear after the original
	IntNode* currentNode = head;
	while(currentNode != 0){							//Again nested while loops seem to be much simpler for LinkedLists
		IntNode* previousNode = currentNode;            //Moved nodes in to see if it did anything. 
		IntNode* nextNode = currentNode->next;
		while(nextNode != 0){							//Checking the next node with the current node
			if(nextNode->data == currentNode->data){	//If duplicate is found, delete that node
				if(nextNode == tail){
					IntNode* temp = nextNode;
					previousNode->next = 0;
					tail = previousNode;
					delete temp;
				}else{
				IntNode* temp = nextNode->next;
				delete nextNode;
				previousNode->next = temp;
				}
			}
			else										//Otherwise resume searching
				previousNode = previousNode->next;
			nextNode = nextNode->next;					
		}
		currentNode = currentNode->next; }				//Checks every single node for any duplicates
		
	for(IntNode* i = head; i != NULL; i = i->next){     //Checks if empty
		if(i->next == 0)
			tail = i;
	}
    return;
}

ostream & operator<<(ostream &out, const IntList &rhs){ //Simply a way to overload the output operator for LinkedLists. 
    IntNode* currentNode = rhs.head;
    
    while(currentNode != 0){                                
        currentNode->next != 0 ? out << currentNode->data << " " : out << currentNode->data;
		/*if(current->next != 0)							//In case, ternary operator did not mesh well with the list.
			out << current->data << " ";
		else
			out << current->data;*/
        currentNode = currentNode->next;
    }
    return out; 
}
