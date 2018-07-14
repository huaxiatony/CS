#include <iostream>
#include <vector>
#include "MyList.h"

using namespace std;

int main() {
  MyList a;
  a.push_front('r');
  a.push_front('a');
  a.push_front('c');
  a.push_front('e');
  a.push_front('c');
  a.push_front('a');
  a.push_front('r');
  a.print();
  cout << endl;
    MyList b(a);
  b.print();

  cout << "\nB: ";
  b.print();
  cout << endl;
  b.print();
  
 /* char c = 'a';
  MyList l1;

  cout << "push_back z: " ;
  l1.push_back('z');
  l1.print();

  cout << endl; // to delete

  l1.pop_back();
  cout << "pop_back z: " ;
  l1.print();

  cout << endl; // to delete
  
  cout << "push_front 0 0 z 0 z: " ;
  l1.push_front('0');
  l1.push_front('0');
  l1.push_front('z');
  l1.push_front('0');
  l1.push_front('z');
  l1.print();

  int loc_size = l1.size();
  cout << "array style print: " ;
  for(int i = 0; i < loc_size; i++)
    cout << l1[i] << " ";
  cout << endl;
              
  cout << "insert_at_pos a 0 on left and right of middle z: " ;
  l1.insert_at_pos(2, '0');
  l1.insert_at_pos(5, '0');
  l1.print();
  
  cout << endl; // to delete

  cout << "push_back letters f-j: ";
  for(int i = 0; i < 10; i++)
    l1.push_back(c+i);
  l1.print();

    cout << endl; // to delete

  cout << "pop_front z z: ";
  for(int i = 0; i < 2; i++)
    l1.pop_front();
  l1.print();

    cout << endl; // to delete

  cout << "pop_back f-j: ";
  for(int i = 0; i < 5; i++)
    l1.pop_back();
  l1.print();

    cout << endl; // delet

  cout << "reverse odd sized list: ";
  l1.reverse();
  l1.print();

    cout << endl; // delete

  cout << "push_front f: ";
  l1.push_front('f');
  l1.print();

    cout << endl; // delet
    
  cout << "reverse even sized list: ";
  l1.reverse();
  l1.print();

    cout << endl; // delet
  // make some copies for later use

  cout << "Construct new lists l2,l3,l4:\n";
  cout << "MyList l4(l1);\nMyList l3 = l4;\nMyList l2(l3);" << endl;
  MyList l4(l1);
  MyList l3 = l4;
  MyList l2(l3);
  l4.print();
  cout << endl;
  l3.print();
  cout << endl;
  l2.print();
  cout << endl;
  
  cout << endl << endl; // delet
  
  // test pop_back
  cout << "pop_back entire list, l1: ";
  loc_size = l1.size();
  
  cout << endl; // delet;
  
  for(int i = 0; i < loc_size; i++)
    l1.pop_back();
  l1.print();
  
  cout << endl; // delet;
  
  // test reverse
  cout << "reverse empty list, l1: ";
  l1.reverse();
  l1.print();
  
    cout << endl; // delet;

  cout << "pop_back entire list but one item, l2: ";
  loc_size = l2.size();
  
    cout << endl; // delet;
  
  for(int i = 0; i < loc_size-1; i++)
    l2.pop_back();
  l2.print();;
  
    cout << endl; // delet;
  
  cout << "reverse one item list, l2: ";
  l2.reverse();
  l2.print();
  
    cout << endl; // delet;
  
  cout << "pop_back entire list but two items, l3: ";
  loc_size = l3.size();
  
    cout << endl; // delet;
  
  for(int i = 0; i < loc_size-2; i++)
    l3.pop_back();
  l3.print();
  
    cout << endl; // delet;
  
  cout << "reverse two item list, l3: ";
  l3.reverse();
  l3.print();
  
    cout << endl; // delet;
  
  cout << "list l4: ";
  l4.print();
  
    cout << endl; // delet;
  
  cout << "list l4 + l3: ";
  l4 + l3; 
  l4.print();
  
    cout << endl; // delet;
  
  cout << "list l4 + l2: ";
  l4 + l2; 
  l4.print();
  
    cout << endl; // delet;
  
  cout << "list l4 + l1: ";
  l4 + l1; 
  l4.print();
  
    cout << endl; // delet;
  
  cout << "Good Bye!" << endl;*/
  
  return 0;
}