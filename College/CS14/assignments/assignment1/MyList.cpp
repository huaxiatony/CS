#include "MyList.h"
#include <cstdlib>
#include <cassert>
#include <cstring>
#include <cctype>

using namespace std;

MyList::MyList(){ head = NULL; }

MyList::MyList(const MyList& str){
    // push_back should've worked all along. I think i will revice push_back 
    head = NULL;
    // Node* prev = head;
    for(Node* curr = str.head; curr != NULL; curr = curr->next){
    //   prev = new Node;
    //   prev->value = curr->value;
    //   prev->next = curr->next;
    //   prev = prev->next;
        push_back(curr->value);
    }
   // *this = str;
}

MyList::MyList(const string& str){
   // forgot to clear list beforehand
   head = NULL;
    for(unsigned i = 0; i < str.size(); ++i){
        push_back(str.at(i));
    }
}

MyList::MyList(const char* str){
   // forgot to clear list just in case beforehnad
   head = NULL;
   //  for(unsigned i = 0; i < strlen(str); ++i){
   // try directly iterating through the char pointer instead of using a 'buffer'. 
   while(*str != '0'){
      //  push_back(str[i]);
      push_back(*str);
      str++;
    }
}

MyList::~MyList(){
    while(head){
        pop_front();
    }
    head = NULL;
}

void MyList::push_front(char value){
    Node* t = new Node;
    t->value = value;
    if(!head){ // if empty
        head = t;
        t->next = NULL;
        return;
    } 
    t->next = head;
    head = t;
}

void MyList::push_back(char value){
    // Noticed redundant code. Why write about malloc'ing new node twice. Just do it once and be done with it. 
    // Everything else should be the same. 
    Node* t = new Node;
    t->value = value;
    t->next = NULL;;
    if(!head){
        head = t;
    } else {
        Node* tail;
        for(tail = head; tail->next != NULL; tail = tail->next);
        tail->next = t;
        t->next = NULL;
    }
}

void MyList::pop_front(){
    if(!head){
        return;
    }
    Node* temp = head->next;
    delete head;
    head = temp;
}

void MyList::pop_back(){
    if(!head){
       return;
    } else if(size() == 1){
        pop_front();
        return;
    }
    Node* tail;
    for(tail = this->head; tail->next->next != NULL; tail = tail->next);
    //tail = tail->next;
    delete tail->next;
    tail->next = NULL;
}

void MyList::swap(int i, int j){
    // Realized that you could just switch the values of the nodes instead of changing their pointers. 
    // It's the same as swapping vector elements, just use a temp value for the data of one node, etc. 
    // For test case where i == j, you don't have to do anything. Added that conditional in. 
    if(i < 0 || i > size()){
        return;
    } else if(j < 0 || j > size()){
        return;
    } else if(i == j){
       return;
    }
    Node* a;
    Node* b;
    int counter = 0;
    for(Node* curr = head; curr != NULL; curr = curr->next){
        if(counter == i)
            a = curr;
        else if(counter == j)
            b = curr;
        counter++;
    }
    int temp = a->value;
    a->value = b->value;
    b->value = temp;
}

void MyList::insert_at_pos(int i, char value){
   assert(!(i < 0) && !(i > this->size()));
    if(i == 0){
        push_front(value);
    } else if(i == this->size()){
        push_back(value);
    } else {
       // Examined the function again and saw that the integer counter method was inefficient.
       // Manually traversed through for loops for each node instead. 
       Node* prev = head;
       Node* succ = head;
       for(int j = 0; j < i - 1; ++j)
          prev = prev->next;
       for(int j = 0; j < i; ++j)
          succ = succ->next;
       Node* to_insert = new Node;
       to_insert->value = value;
       to_insert->next = NULL;
       prev->next = to_insert;
       to_insert->next = succ;
    }
    
}

void MyList::reverse(){
    Node* next = NULL;
    Node* prev = NULL;
    for(Node *curr = head; curr != NULL; curr = next){
        next = curr->next;
        curr->next = prev;
        prev = curr;
    }
    head = prev;
}

int MyList::size()const{
    int size = 0;
    for(Node* temp = head; temp != NULL; temp = temp->next ) {
        size ++;
    }
    return size;
}

void MyList::print()const{
    // Was hard to see the errors w/o endl
    for(Node* t = head; t != NULL; t = t->next){
        cout << t->value << " ";
    }
    cout << endl;
}

int MyList::find(char value)const{
    int pos = 0;
    for(Node* t = head; t != NULL; t = t->next){
        if(t->value == value){
            return pos;
        }
        pos++;
    }
    return -1;
}

int MyList::find(MyList& query_str)const{
    int pos = 0, found = 0;
    for(Node* t = head; t != NULL; t = t->next){
    Node* temp = t;
    found = 1;
    for(int j = 0; j < query_str.size(); ++j){
        if(query_str[j] != temp->value){
            found = 0;
            break;
        }
        temp = temp->next;
    }
    if(found == 1){
        return pos;
    }
    pos++;
    }
    return -1;
}

MyList& MyList::operator=(const MyList& str){
    if(this == &str){
        return *this;
    } 
    while(this->head != NULL){
        pop_front();
    }
    for(Node* curr = str.head; curr != NULL; curr = curr->next){
        push_back(curr->value);
    }
    return *this;
}

char& MyList::operator[](const int i){
   assert(!(i < 0) && !(i > this->size()));
    Node* t = head;
    for(int j = 0; j < i; ++j){
        t = t->next;
    }
    return t->value;
}

MyList MyList::operator+(const MyList& str){
    if(this == &str){
        return *this;
    } else {
        for(Node* curr = str.head; curr != NULL; curr = curr->next){
            push_back(curr->value);
        }
        return *this;
    }
}

bool MyList::is_palindrome()const{
    MyList* temp = new MyList;
    Node* t = head;
    for(int i = 0; i < size() / 2; ++i){
      temp->push_back(t->value);
      t = t->next;
    }
    for(int j = size() / 2; j < size() - 1; ++j){
       if(tolower(temp->head->value) != tolower(t[j].value)){
          return false;
       } else {
          temp->pop_front();
       }
    }
    return true;
    
}

void MyList::merge_list(MyList A, MyList B){
    // forgot to sort. 
    // for(Node* t = A.head; t != NULL; t = t->next){
    //     this->push_back(t->value);
    // }
    // for(Node* y = B.head; y != NULL; y = y->next){
    //     this->push_back(y->value);
    // }
    for(int i =0; i < B.size(); ++i){
        for(int j = 0; j < A.size(); ++j){
            if(A[j] >= B[i]) {
                A.insert_at_pos(j,B[i]);
                break;
            }
            if((i == B.size() -1) && (j == A.size() - 1)){
                A.push_back(B[i]);
                break;
            }
        }
    }
    *this = A;
}

bool MyList::remove_char(char c){   
    // Forgot about edge cases
    cout << c;
    // if(size() == 0){
    //     return false;
    // }
    // bool flag = true;
    // Node* curr = head;
    // Node* tail; // Decided to manually check if instance found was on tail 
    // while(found){
    //     found = false;
    //     for(tail = head; tail != NULL; tail = tail->next);
    //     if(head->value == c){
    //         pop_front();
    //         flag = true;
    //     } else if(tail->value == c){
    //         pop_back();
    //         flag = true;
    //     } else {
    //         for(Node* succ = head->next; succ->next != NULL; succ = succ->next){
    //             if()
    //         }
    //     }
    // }
    // rewriting from scratch, forgot to include the last instance, if none was found
    return false;
}

char MyList::front()const{
    return head->value;
}