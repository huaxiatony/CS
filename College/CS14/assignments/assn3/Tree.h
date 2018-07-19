#ifndef __TREE_H
#define __TREE_H

#include "Node.h"

using namespace std;

class Tree {

private:
  Node *root;

private:
  void preOrder( Node * );

public:
  Tree();
  ~Tree();
  void insert( const string & );
  bool search( const string & );
  void inOrder( );
  void postOrder( );
  void preOrder( );
  string largest( );
  string smallest( );
  int height( const string & );
  void remove( const string & );
  void printTreeSideways ( );

  // Add any additional variables/functions here
private:
 void increment( const string & , Node * );
 void preorder( Node * );
 void inOrder( Node * );
 void postOrder( Node * );
 string largest( Node * );
 string smallest( Node * );
 static Node* insert( const string & , Node * );
 int height( const string & , Node * );
 int total_depth( Node * );
 int curr_depth( const string & , Node * , int );
 Node* remove( const string & , Node * );
 void display( Node * );

};

#endif
