/*
 * cs014_16sum1
 * lab 3
 * BST.H
 */
 /**
 * Course: CS014 Summer 2018
 *
 * First Name: Benjamin
 * Last Name: Lee
 * Username: blee073
 * email address: blee073@ucr.edu
 *
 *
 * Assignment: lab4
 * Filename : BST.H
 *
 * I hereby certify that the contents of this file represent
 * my own original individual work. Nowhere herein is there 
 * code from any outside resources such as another individual,
 * a website, or publishings unless specifically designated as
 * permissible by the instructor or TA.
 */ 
 

#ifndef BST_H_
#define BST_H_

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

class BST {

private:
  struct BinaryNode {

    int value;
    BinaryNode* left;
    BinaryNode* right;
    BinaryNode(int& v) : value(v), left(NULL), right(NULL) {}
    static BinaryNode* insert(int v, BinaryNode* t) {
      if(t == NULL){
	t = new BinaryNode(v);
      }
      else if (v < t->value)
	t->left = insert(v, t->left);
      else if (v > t->value)
	t->right = insert(v, t->right);
      else
	t->value = v;
      return t;
    }
    
    static BinaryNode* remove(int v, BinaryNode* t) {
      if(t) {
	if(v < t->value)
	  t->left = remove(v, t->left);
	else if(t->value < v)
	  t->right = remove(v, t->right);
	else if(t->left != NULL && t->right != NULL) {
	  t->value = find_min(t->right)->value;
	  t->right = remove(t->value, t->right);
	}
	else {
	  BinaryNode* oldNode = t;
	  t = (t->left != NULL) ? t->left
	    : t->right;
	  delete oldNode;
	}
      }
      return t;
    }
    
    static BinaryNode* find_min(BinaryNode* t) {
      if(t == NULL)
	return NULL;
      if(t->left == NULL)
	return t;
      return find_min(t->left);
    }
  };

public:
  BST(): root(NULL) {}
  ~BST() {}
  void insert(int v) { root = BinaryNode::insert(v, root); }
  void remove(int v) { root = BinaryNode::remove(v, root); }
  void display() { display(root); }
  void display( BinaryNode* t ) {
    // in-order traversal with indented display.
    static int depth = 0;
    ++ depth;
    if ( t == NULL ) return;
    if ( t->right != NULL ) display(t->right);
    for( int i = 0; i != depth; ++i )
      cout << " ";
    cout << t->value << " " << endl;
    if ( t->left != NULL )
      display(t->left);
    --depth;
  }
  void dotty(){
    ofstream ofs("output.dot");
    if(!ofs) {
      cout << "output.dot could not be opened." << endl;
      exit(1);
    }
    ofs << "digraph G {" << endl << endl;
    dotty(ofs , root);
    ofs << endl << "}";
    ofs.close();
  }
  void dotty( ofstream &ofs, BinaryNode* t ){
    // The identifier for each node is that node's label, for example "key25" 
    if(t->right)
      ofs << "\tkey" << t->value<< " -> key" << t->right->value << ";" << endl;
    if(t->left)
      ofs << "\tkey" << t->value << " -> key" << t->left->value << ";" << endl;
    if(t->right) dotty(ofs, t->right);
    if(t->left) dotty(ofs, t->left);
  }
private:
  BinaryNode* root;
};

#endif /* BST_H_ */

