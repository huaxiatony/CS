// main.cpp
#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include <list>

using namespace std;

// Display function declarations
void Display(list<int>&);        // displays std::list to std::out
void Display(int a[], int size); // displays array to std::out

// Sorting function declarations
void MergeSort(list<int>& S);                       // MergeSort for list
list<int>& Merge(list<int>& C, list<int>& A, list<int>& B); // Merge for list
void MergeSort(int numbers[], int i, int k);        // MergeSort for array
void Merge(int numbers[], int i, int j, int k);       // Merge for array
void InsertionSort(int numbers[], int numbersSize); // InsertionSort for array
void InsertionSort(list<int>& S);                       // InsertionSort for list

// Test function declarations
void TestInsertionSortArray(int a[], int size);     // InsertionSort list test
void TestMergeSortList(list<int>& S);                // MergeSort list test
  
int main() {
  int numbers[] = { 10, 2, 78, 4, 45, 32, 7, 11 };
  const int NUMBERS_SIZE = 8;
  const int LARGE_N = 1000;
  
  cout << "ARRAY:\n";
  cout << "UNSORTED: "; 
  Display(numbers, NUMBERS_SIZE);
   
  list<int> seq;   
  for(int i = 0; i < NUMBERS_SIZE; i++)
    seq.push_back(numbers[i]);
    
  cout << "LIST:\n";
  cout << "UNSORTED: ";
  Display(seq);
  
  MergeSort(numbers, 0, NUMBERS_SIZE - 1);
  cout << "ARRAY:\n";
  cout << "SORTED: ";
  Display(numbers, NUMBERS_SIZE);
  
  MergeSort(seq);
  cout << "LIST:\n";
  cout << "SORTED: ";
  Display(seq);
   
  srand((unsigned)time(0));   // seed random number generator
   
  int* a = NULL;              // Pointer to int, initialize to OxO
  a = new int[LARGE_N];       // Allocate NUMBERS_SIZE ints and save ptr in a.
  list<int> seq2;             // list seq2
  for(int i = 0; i < LARGE_N; i++) {
    a[i] = (rand() % (LARGE_N*LARGE_N)) + 1; // insert into array
    seq2.push_back(a[i]);     // insert into list 
  }

  cout << "Array:\n"; 
  cout << "UNSORTED:";
  Display(a, NUMBERS_SIZE);
   
  cout << "LIST:\n";
  cout << "UNSORTED: ";
  Display(seq2);
   
  MergeSort(a, 0, NUMBERS_SIZE - 1);
   
  cout << "Array:\n"; 
  cout << "SORTED: ";
  Display(a, NUMBERS_SIZE);
  
  MergeSort(seq2);
  cout << "LIST:\n";
  cout << "SORTED: ";
  Display(seq2);
    
  numbers[0] = 20;
  numbers[1] = 10;
  numbers[2] = 79; 
  numbers[3] = 2; 
  numbers[4] = 200;
  numbers[5] = 50;
  numbers[6] = -50;
  numbers[7] = -51;
  
  cout << "UNSORTED: ";
  for(int i = 0; i < NUMBERS_SIZE; ++i) {
  cout << numbers[i] << " ";
  }
  cout << endl;
   
  InsertionSort(numbers, NUMBERS_SIZE);
   
  cout << "SORTED: ";
  for(int i = 0; i < NUMBERS_SIZE; ++i) {
  cout << numbers[i] << " ";
  }
  cout << endl;
  return 0;
}

void Display(int a[], int size) {
 for(int i = 0; i < size; ++i) 
   cout << a[i] << " ";
 cout << endl;
}

void Display(list<int>& S) {
  for(list<int>::iterator it = S.begin(); it != S.end(); ++it)
    cout << *it << " ";
  cout << endl;
}

void MergeSort(list<int>& S){
  if(S.size() > 1){
    list<int> S1, S2;
    list<int>::iterator a = S.begin();
    unsigned i;
    for(i = 0; i < S.size() / 2; ++i, ++a) S1.push_back(*a);
    for(; i < S.size(); ++i,++a) S2.push_back(*a);
    MergeSort(S1);
    MergeSort(S2);
    S = Merge(S,S1,S2);
  }
}


list<int>& Merge(list<int>& C, list<int>& A, list<int>& B){
  C.clear();
  while(!A.empty() && !B.empty()){
    if(A.front() < B.front()){
      int x = A.front();
      A.pop_front();
      C.push_back(x);
    } else {
      int x = B.front();
      B.pop_front();
      C.push_back(x);
    }
  }
  while(!A.empty()){
    int x = A.front();
    A.pop_front();
    C.push_back(x);      
  }
  while(!B.empty()){
    int x = B.front();
    B.pop_front();
    C.push_back(x);    
  }
  return C;
}

void MergeSort(int numbers[], int i, int k){
  if(i < k){
    int mid = (i + k) / 2;
    MergeSort(numbers , i , mid);
    MergeSort(numbers , mid + 1 , k);
    Merge(numbers , i , mid , k);
  }
  return;
}

void Merge(int numbers[], int i, int j, int k){
  int a,b,c;
  const int n1 = j - i + 1;
  const int n2 = k - j;
  int left[n1], right[n2];

  for (a = 0; a < n1; a++)
    left[a] = numbers[i + a];
  for (b = 0; b < n2; b++)
    right[b] = numbers[j + 1 + b];

  a = 0; // S1 index
  b = 0; // S2 index
  c = i; // S1 + S2 index
  while (a < n1 && b < n2){
    if (left[a] <= right[b]) numbers[c] = left[a++];
    else numbers[c] = right[b++];
    c++;
  }
  while (a < n1) numbers[c++] = left[a++];
  while (b < n2) numbers[c++] = right[b++];
}

void InsertionSort(int numbers[], int numbersSize){
  int i = 0 , j = 0 , temp = 0;
  for (i = 1; i < numbersSize; ++i) {
    j = i;
    while (j > 0 && numbers[j] < numbers[j - 1]) {
      temp = numbers[j];
      numbers[j] = numbers[j - 1];
      numbers[j - 1] = temp;
      --j;
    }
  }
  return;
}

void InsertionSort(list<int>& S){
  list<int> temp;
  temp.push_front(S.front());
  S.pop_front();
  while(S.size()){
    if(S.front() < temp.front()) temp.push_front(S.front());
    else if(S.front() > temp.back()) temp.push_back(S.front());
    else{
        int k = temp.size();
        int i = 0;
        for(i = 0; i < k; ++i){
          if(S.front() < temp.front()){
              temp.push_back(S.front());
              break;
          }
          temp.push_back(temp.front());
          temp.pop_front();
        }
        while (i < k){
          temp.push_back(temp.front());
          temp.pop_front();
          ++i;
        }
    }
    S.pop_front();
  }
  S = temp;
}

// // Test function declarations
// void TestInsertionSortArray(int a[], int size);     // InsertionSort list test
// void TestMergeSortList(list<int>& S);                // MergeSort list test