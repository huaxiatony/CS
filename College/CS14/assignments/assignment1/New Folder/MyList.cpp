#include "MyList.h"
#include <cstdlib>
#include <cassert>
#include <cstring>

using namespace std;

MyList::MyList(){ head = NULL; }

/*

MyList::MyList(){ head = NULL; }

MyList::MyList(const MyList& str){
    for(Node* t = str.head; t != NULL; t = t->next){
        push_back(t->value);
    }
}

MyList::MyList(const string& str){
    for(unsigned i = 0; i < str.length(); ++i){
        push_back(str[i]);
    }
}

MyList::MyList(const char* str){
    for(unsigned i = 0; i < strlen(str); ++i){
        push_back(str[i]);
    }
}

*/
MyList::~MyList(){
    Node* t = head;
    while(t != NULL){
        pop_front();
        t = t->next;
    }
    head = NULL;
}

/*
void MyList::push_front(char value){
   Node* t = new Node;
   t->value = value;
   if(!head){
      t->next = NULL;
      head = t;
   } else {
      t->next = head;
      head = t;
   }
}

void MyList::push_back(char value){
    if(!head){
        Node* t = new Node;
        t->value = value;
        head = t;
    } else {
        Node* tail;
        for(tail = head; tail->next != NULL; tail = tail->next);
        Node* t = new Node;
        t->value = value;
        t->next = NULL;
        tail->next = t;
    }
}
*/
void MyList::pop_front(){
    if(!head){
        return;
    }
    Node* temp = head->next;
    delete head;
    head = temp;
}
/*
void MyList::pop_back(){
   cout << "ok?";
   
}

void MyList::swap(int i, int j){
    if(i < 0 || i > size()){
        return;
    } else if(j < 0 || j > size()){
        return;
    }
    Node* i_prev;
    Node* j_prev;
    Node* temp;
    int counter_i = 0, counter_j = 0;

    for(temp = head; temp != NULL; temp = temp->next){
        if(counter_i == i - 1){
            i_prev = temp;
        } else if(counter_j == j - 1){
            j_prev = temp;
        }
        counter_i++; counter_j++;
    }

    Node* i_new = i_prev->next;
    Node* j_new = j_prev->next;

    j_new->next = i_prev->next->next;
    i_prev->next = j_new;
    i_new->next = j_prev->next->next;
    j_prev->next = i_new;
    
}

void MyList::insert_at_pos(int i, char value){
    assert(i < 0 || i > size());
    int counter = 0;
    Node* prev = NULL;
    Node* succ = NULL;
    for(Node* t = head; t != NULL; t = t->next){
        if(counter != i)
            counter++;
        if(counter == i - 1){
            prev = t;
            succ = t->next;
        }
    }
    
    Node* to_insert = new Node;
    to_insert->value = value;
    
    prev->next = to_insert;
    to_insert->next = succ;
    
}

void MyList::reverse(){
    Node* curr;
    Node* prev = NULL;
    Node *next = NULL;
    for(curr = head; curr != NULL; curr = curr->next){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

int MyList::size()const{
    int size = 0;
    for ( Node* temp = head; temp != NULL; temp = temp->next ) {
        size ++;
    }
    return size;
}

void MyList::print()const{
    for(Node* t = head; t != NULL; t = t->next){
        cout << t->value << " ";
    }
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
    assert(i < 0);
    assert(i > size() - 1);
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
       if(temp->head->value != t[j].value){
          return false;
       } else {
          temp->pop_front();
       }
    }
    
   
    return true;
    
}

void MyList::merge_list(MyList A, MyList B){
    for(Node* t = A.head; t != NULL; t = t->next){
        push_back(t->value);
    }
    for(Node* y = B.head; y != NULL; y = y->next){
        push_back(y->value);
    }
}

bool MyList::remove_char(char c){
    Node* sucNode;
    for(Node* t = head; t != NULL; t = t->next){
        if(t->value == c){
            sucNode = t->next;
            delete t;
            t = sucNode;
        }
        if(t->value == c && t->next == NULL){
            pop_back();
        }
    }
    for(Node* t = head; t != NULL; t = t->next){
       if(t->value == c){
          return false;
       }
    }
    return true;
}

char MyList::front()const{
    return head->value;
}

*/