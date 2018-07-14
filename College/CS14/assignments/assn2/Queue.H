#ifndef QUEUE_H
#define QUEUE_H
using namespace std;

template <typename Q>
struct node{
    int value;
    node *next;
};

template<typename Q>
class Queue {
    
private:
  struct node<Q> *frnt;
  struct node<Q> *rear;
public:
  Queue();
  ~Queue();
  void push(const Q &obj);
  void pop();
  bool is_empty() const;
  int size();
  Q front() const;
  void display();
};

#endif

template<typename Q>
Queue<Q>::Queue(){
    frnt = rear = NULL;
}

template<typename Q>
Queue<Q>::~Queue(){
  while(!is_empty()){
      pop();
  }
}

template<typename Q>
void Queue<Q>::push(const Q &obj){
  node<Q> *t = new node<Q>;
  t->value = obj;
  t->next = NULL;
  if(frnt == NULL){
      frnt = rear = t;
      rear->next = NULL;
  } else {
      rear->next = t;
      rear = t;
      rear->next = NULL;
  }
}

template<typename Q>
void Queue<Q>::pop(){
  if(is_empty()){
      throw underflow_error("pop() function called on empty queue\n");
  }
  node<Q> *t;
  t = frnt;
  frnt = frnt->next;
  delete t;
  
}

template<typename Q>
bool Queue<Q>::is_empty() const{
  return frnt == NULL;
}

template<typename Q>
int Queue<Q>::size(){
    int x = 0;
    for(node<Q>* i = frnt; i != NULL; i = i->next){
        x++;
    }
    return x;
}

template<typename Q>
void Queue<Q>::display(){
  for(node<Q>* i = frnt; i != NULL; i = i->next){
  cout << i->value << " ";
  }
  cout << endl;
}

template<typename Q>
Q Queue<Q>::front() const{
  if(is_empty()){
      throw underflow_error("front() function called on empty queue.\n");
  }
  return frnt->value;
}