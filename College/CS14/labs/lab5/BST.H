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
 * Assignment: lab5
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
    // Needed char value to implement another part of the BinaryNode to do the coloring part for the dot files. 
    int value;
    char id;    
    BinaryNode* left;
    BinaryNode* right;
    BinaryNode(int& v) : value(v), id('a'), left(NULL), right(NULL) {} // Initially starts at 'a' bc that's the format for all the dot files
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
  ~BST() { deleteAll(root); }
  void deleteAll(BinaryNode* t){
    // Recursively deletes from leaf up to root
    if(t){
      deleteAll(t->right);      
      deleteAll(t->left);
      delete t;
    }
  }
   void insert(int v) { if(search(root,v)){ cout << "Error. Can't insert same thing. \n"; return; }root = BinaryNode::insert(v, root); }
  void remove(int v) { if(!search(root,v)){ cout << "Error! Can't remove nonexistences.\n"; return; }root = BinaryNode::remove(v, root); }
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
  
  void mode_height(){
    ofstream ofs("output.dot");
    if(!ofs) {
      cout << "output.dot could not be opened." << endl;
      exit(1);
    }
    // Split the ofs into 2 parts. (1) The part w/ all the color instructions (2) The actual instructions needed for webgraphviz
    ofs << "digraph G {" << endl << endl;
    mode_height(ofs , root);
    ofs << endl << endl;
    mode_height_2(ofs , root);
    ofs << endl << "}";
    ofs.close();
  }
  void mode_height( ofstream &ofs , BinaryNode* t){
    // the height of each node is the difference between the total depth and that current level of depth
    //   a [color = lightblue, style = filled, label="key=4, h=2"];
    static char a = 'a';
    static int curr_depth = 0;
    static int max_depth = maxDepth();
    ++curr_depth;
    int h = max_depth - curr_depth;
    ofs << "\t" << t->id << " [color = lightblue, style = filled, label=\"key=" << t->value << ", h=" << h << "\"];" << endl;
    if(t->right){
      ++a;
      t->right->id = a;
      mode_height(ofs, t->right);
    }
    if(t->left){
      ++a;
      t->left->id = a;
      mode_height(ofs, t->left);
    }
  }
  int maxDepth(){ cout << "max depth is " << maxDepth(root) << endl; return maxDepth(root);}
  int maxDepth(BinaryNode* t){
    if(t == NULL) return 0; // else {
    int r_depth = maxDepth(t->right);
    int l_depth = maxDepth(t->left);
    return l_depth > r_depth ? l_depth + 1 : r_depth + 1; // }
  }
  void mode_height_2( ofstream &ofs, BinaryNode* t){
    if(t->right)
      ofs << "\t" << t->id << " -> " <<  t->right->id << ";" << endl;
    if(t->left)
      ofs << "\t" << t->id << " -> " << t->left->id << ";" << endl;
    if(t->right) mode_height_2(ofs, t->right);
    if(t->left) mode_height_2(ofs, t->left);
  }
  
  void mode_pre(){ 
    ofstream ofs("output.dot");
    if(!ofs) {
      cout << "output.dot could not be opened." << endl;
      exit(1);
    }    
    // Split the ofs into 2 parts. (1) The part w/ all the color instructions (2) The actual instructions needed for webgraphviz
    // Switched from endl to \n after getting tired of writing " << endl << endl " constantly. 
    ofs << "digraph G {\n\n";
    mode_pre( ofs , root );
    ofs << "\n\n";
    mode_pre_2( ofs , root );
    ofs << "\n}";
    ofs.close();
  }
  void mode_pre( ofstream &ofs, BinaryNode* t){
    //   a [color = orange, peripheries=2, style = filled, label="key=4, pre=1"];
    static int pre = 0;
    static char a = 'a';
    ++pre;
    ofs << "\t" << t->id << " [color = orange, peripheries=2, style = filled, label=\"key=" << t->value << ", pre=" << pre << "\"];" << endl;
    if(t->left){
      ++a;
      t->left->id = a;
      mode_pre( ofs , t->left );
    }
    if(t->right){
      ++a;
      t->right->id = a;
      mode_pre( ofs , t->right );
    }

  }
  void mode_pre_2( ofstream &ofs , BinaryNode* t ){
    //   a -> b [color=blue];
    if(t->left)
      ofs << "\t" << t->id << " -> " << t->left->id << " [color=blue];" << endl;
    if(t->right)
      ofs << "\t" << t->id << " -> " << t->right->id << " [color=blue];" << endl;

    if(t->right) mode_pre_2( ofs , t->right );
    if(t->left) mode_pre_2( ofs , t->left);
  }
  
  void mode_in(){
    ofstream ofs("output.dot");
    if(!ofs) {
      cout << "output.dot could not be opened." << endl;
      exit(1);
    }
      // Split the ofs into 2 parts. (1) The part w/ all the color instructions (2) The actual instructions needed for webgraphviz
    ofs << "digraph G {\n\n";
    mode_in( ofs , root );
    ofs << "\n\n";
    mode_in_2( ofs , root );
    ofs << "\n}";
    ofs.close();
  }
  void mode_in(ofstream &ofs , BinaryNode* t){
    //  a [color = red, peripheries=2, style = filled, label="key=4, in=4"];
    static int in = 0;
    static char a = 'a';

    if(t->left){
      ++a;
      t->left->id = a;
      mode_in( ofs , t->left );
    }
    ++in;
    ofs << "\t" << t->id << " [color = red, peripheries=2, style = filled, label=\"key=" << t->value << ", in=" << in << "\"];" << endl;
    if(t->right){
      ++a;
      t->right->id = a;
      mode_in( ofs , t->right );
    }
    
  }
  void mode_in_2(ofstream &ofs , BinaryNode* t){
    if(t->left)
      ofs << "\t" << t->id << " -> " << t->left->id << ";\n";
    if(t->right)
      ofs << "\t" << t->id << " -> " << t->right->id << ";\n";

    if(t->left) mode_in_2( ofs , t->left );
    if(t->right) mode_in_2( ofs , t->right );

  }
  
  void mode_post(){
    ofstream ofs("output.dot");
    if(!ofs) {
      cout << "output.dot could not be opened." << endl;
      exit(1);
    }
      // Split the ofs into 2 parts. (1) The part w/ all the color instructions (2) The actual instructions needed for webgraphviz
    ofs << "digraph G {\n\n";
    mode_post( ofs , root );
    ofs << "\n\n";
    mode_post_2( ofs , root );
    ofs << "\n}";
    ofs.close();    
  }
  void mode_post( ofstream &ofs , BinaryNode* t){
    static int pos = 0;
    static char a = 'a';
    if(t->left){
      ++a;
      t->left->id = a;
      mode_post( ofs , t->left );
    }
    if(t->right){
      ++a;
      t->right->id = a;
      mode_post( ofs , t->right );
    }
    ++pos;
    ofs << "\t" << t->id << " [color = gray, peripheries=2, style = filled, label=\"key=" << t->value << ", pos=" << pos << "\"];" << endl;
  }
  void mode_post_2( ofstream &ofs , BinaryNode* t){
    if(t->left)
      ofs << "\t" << t->id << " -> " << t->left->id << ";\n";
    if(t->right)
      ofs << "\t" << t->id << " -> " << t->right->id << ";\n";

    if(t->right) mode_post_2( ofs , t->right );
    if(t->left) mode_post_2( ofs , t->left );
  }
  
  bool search( BinaryNode* root,  int str){
    if(root == NULL || root->value == str) return root;
    if(root->value < str) return search(root->right , str);
    return search(root->left , str);
}
  
  
  
    
private:
  BinaryNode* root;
};

#endif /* BST_H_ */

