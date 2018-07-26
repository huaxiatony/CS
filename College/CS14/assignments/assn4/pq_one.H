/**
 * Course: CS014 Summer 2018
 *
 * First Name: Benjamin
 * Last Name: Lee
 * Username: blee073
 * email address: this must be your cs or UCR student email address
 *
 *
 * Assignment: assn4
 * Filename : pq_one.H
 *
 * I hereby certify that the contents of this file represent
 * my own original individual work. Nowhere herein is there 
 * code from any outside resources such as another individual,
 * a website, or publishings unless specifically designated as
 * permissible by the instructor or TA.
 */ 
#ifndef PQ_ONE
#define PQ_ONE
using namespace std;
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

template< class Item >
class pq_one {
private:
vector<Item> heap; // The heap expands/shrinks to fit data
typedef int indx;  // index with heap
map<Item,indx> index;  // records each Item’s place in heap
map<Item,float> priority; // records each Item’s priority
void percolate_up( indx i );
void percolate_down( indx i );
public:
// These use the min-heap functions above.
int size( ) const;
bool empty( ) const;
const Item& top( ) const;
void pop( );
void push( const Item& w, float prio );

// OTHER FUNCTIONS
void display ( );
bool findPrior(float prio);
pq_one();
pq_one(const vector<Item>& , const vector<float>& );
void build_heap();
};
#endif

template< class Item >
pq_one<Item>::pq_one( ) { }

template< class Item > 
pq_one<Item>::pq_one(const vector<Item>& h,const vector<float>& p){
    heap.resize(h.size());
    for(unsigned int i = 0; i < h.size(); ++i){
        heap[i] = h[i];
        priority[heap[i]] = p[i];
        index[heap[i]] = i + 1;
    }
    build_heap();
}

template< class Item >
void pq_one<Item>::build_heap(){
    for(int i = (heap.size() / 2); i >= 0; --i){
        percolate_down(i);
    }
    for(int i = (heap.size() / 2); i>= 0; --i){
        percolate_down(i);
    }
}

template< class Item >
void pq_one<Item>::percolate_up( indx i ){
    if(i == 1) return;
    // Parent Index \/
    int p_index = i / 2;
    if(priority[heap[p_index]] > priority[heap[i]]){
        swap(heap[p_index],heap[i]);
        swap(index[heap[i]] , index[heap[p_index]]);
        percolate_up(p_index);
    }
}

template< class Item >
void pq_one<Item>::percolate_down( indx i ){
  int len = heap.size(),
      l_child = 2*i,
      r_child = 2*i + 1,
      min = i;
  if(priority[heap[i]] > priority[heap[l_child]] && l_child < len) min = l_child;
  if(priority[heap[i]] > priority[heap[r_child]] && r_child < len) min = r_child;
  if(min != i){
      swap(heap[i],heap[min]);
      swap(index[heap[i]] , index[heap[min]]);
      percolate_down(min);
  }
}

template< class Item >
int pq_one<Item>::size( ) const{
    return heap.size();
}

template< class Item >
bool pq_one<Item>::empty( ) const{
    return heap.size() == 0;    
}

template< class Item >
const Item& pq_one<Item>::top( ) const {
    return heap.front();
}

template< class Item >
void pq_one<Item>::pop( ){
    if(heap.size() == 0) return;
    Item w = heap.back();
    if(priority[w] > 1){
        priority[w]--;
        return;
    }
    heap[1] = heap[heap.size() - 1];
    priority.erase(priority.find(w));
    index.erase(index.find(w));
    heap.pop_back();
    percolate_down(1);
}

template< class Item >
void pq_one<Item>::push( const Item& w, float prio ){
    if(empty()){
        heap.push_back(w);
        index[w] = 1;
        priority[w] = prio;
        return;
    }
    else if(priority[w] != 0){
        priority[w]++;
        return;
    } 
    findPrior(prio);
    index[w] = heap.size() + 1;
    priority[w] = prio;
    int len = heap.size();
    int prev = heap.size() / 2;
    if(priority[prev] > prio){
        heap.push_back(w);
        percolate_down(1);
    } else
        heap.push_back(w);
    percolate_up(len);
}

template< class Item >
bool pq_one<Item>::findPrior(float prio) {
    for(int i = 0; i < heap.size(); ++i){
        if(priority[heap[i]] == prio){
            priority[heap[i]]++;
            return true;
        }
    }
    return false;
}

template< class Item >
void pq_one<Item>::display( ){
    for(int i = 0; i < heap.size(); ++i){
        cout << "Heap elem(" << heap[i] << ") priority(" << priority[heap[i]] << ") index(" << index[heap[i]] <<")" << endl;
    }
    cout << endl;
}