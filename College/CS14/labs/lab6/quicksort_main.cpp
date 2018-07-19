#include <iostream>
using namespace std;

int Partition(int arr[], int i, int k);
void Quicksort(int arr[], int i, int k);

int main() {
   int arr[] = { 25, 31, 2, 4, 19, 21, 17, 10 };
   const int ARR_SIZE = 8;
   
   cout << "unsorted: ";
   for(int i = 0; i < ARR_SIZE; ++i)
      cout << arr[i] << " ";
   
   cout << "\nsorted: ";
   Quicksort(arr, 0, ARR_SIZE - 1);
   for(int i = 0; i < ARR_SIZE; ++i) 
      cout << arr[i] << " ";
   cout << "\n";
   
   return 0;
}
int Partition(int arr[], int i, int k){
  int l = i, 
      h = k, 
      mid = i + (k - i) / 2,
      pivot = arr[mid], 
      temp = 0;
  while(true){
    while(arr[l] < pivot) ++l;
    while(pivot < arr[h]) --h;
    if(l >= h) break; 
    else{
      temp = arr[l];
      arr[l] = arr[h];
      arr[h] = temp;
      ++l;
      --h;
    }
  }
  return h;
}

void Quicksort(int arr[], int i, int k){
  int j = 0;
  if(i >= k) return;
  j = Partition(arr, i, k);
  Quicksort(arr, i, j);
  Quicksort(arr, j + 1, k);
}

