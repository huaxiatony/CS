#include "Tree.h"
#include <iostream>
#include <algorithm>

using namespace std;

Tree::Tree(){   root = NULL; }
Tree::~Tree(){ while(root) remove(root->str);}

bool Tree::search( const string & str ){
    Node* t = root;
    bool found = false;
    if(root == NULL) return false;
    else if(root->str == str) return true;
    else if(str <= root->str){
        root = root->left;
        found = search( str );
    } else {
        root = root->right;
        found = search( str );
    }
    root = t;
    return found;
}

void Tree::insert( const string & str ){
    if(search(str)) increment( str , root );
    else root = insert(str , root);
}

void Tree::inOrder( ){
    inOrder(root); 
    cout << endl;
}

void Tree::postOrder( ){
    postOrder(root);
    cout << endl;
}

void Tree::preOrder( ){
    preorder(root);    
    cout << endl;
}

string Tree::largest( ){
    return root == NULL ? "" : largest(root);
}

string Tree::smallest( ){
    return root == NULL ? "" : smallest(root);
}

int Tree::height( const string & str ){
    return (!search(str)) ? -1 : height( str , root );
}
void Tree::remove( const string & str ){
    root = remove( str , root );
}

// Private helper functions. 
void Tree::increment( const string & str, Node * t ){
    Node* temp = t;
    if(temp->str == str)
      temp->count = t->count + 1;
    else if( str <= temp->str)
      increment(str, temp->left);
    else
      increment(str, temp->right);
}

void Tree::preorder( Node * t ){
    if(!t) return;
    cout << t->str << "(" << t->count << "), ";
    if(t->left) preorder(t->left);
    if(t->right) preorder(t->right);
}

void Tree::inOrder( Node * t ){
    if(!t) return;
    if(t->left) inOrder(t->left);
    cout << t->str << "(" << t->count << "), ";
    if(t->right) inOrder(t->right);
}

void Tree::postOrder( Node * t ){
    if(!t) return;
    if(t->left) postOrder(t->left);
    if(t->right) postOrder(t->right);
    cout << t->str << "(" << t->count << "), ";
}

string Tree::largest( Node * t ){
    if(t->right == NULL) return t->str;
    return largest(t->right);
}

string Tree::smallest( Node * t ){
    if(t->left == NULL) return t->str;
    return smallest(t->left);
}

Node* Tree::insert( const string & str , Node * t ){
    if(t == NULL) t = new Node(str);
    else if(str < t->str) t->left = insert( str , t->left );
    else if(str > t->str) t->right = insert( str , t->right );
    else t->str = str;
    return t;
}

int Tree::height( const string & str, Node * t ){
    return curr_depth(str,t,1);
}

int Tree::total_depth( Node * t ){
    if(t == NULL) return 0;
    else {
        int l = total_depth(t->left);
        int r = total_depth(t->right);
        // if(r < l) return(l + 1);
        // else return(r + 1);
        return l > r ? l + 1 : r + 1;
    }
}


int Tree::curr_depth( const string & str , Node * t, int d ){
    if(!t) return 0;
    if(t->str == str) return d;
    int lvl = curr_depth(str , t->left , d + 1);
    if(lvl != 0) return lvl;
    return curr_depth(str,t->right,d+1);
}

Node* Tree::remove( const string & str, Node * t ){
    if(t){
      if(str > t->str) t->right = remove(str , t->right);
      else if(str < t->str) t->left = remove(str , t->left);
      else{
        if(t->left){
          Node* temp = t->left;
          while(temp->right)
            temp = temp->right;
          t->str = temp->str;
          t->left = remove(t->str , t->left);
        } else if(t->right){
          Node* temp = t->right;
          while(temp->left)
            temp = temp->left;
          t->str = temp->str;
          t->right = remove(t->str , t->right);
        } else {
          delete t;
          t = NULL;
        }
      }
    }
    return t;
}

void Tree::printTreeSideways ( ){
    display(root);
}

void Tree::display( Node * t ){
    static int depth = 0;
    ++ depth;
    if ( t == NULL ) return;
    if ( t->right != NULL ) display(t->right);
    for( int i = 0; i != depth - 1; ++i )
      cout << "\t";
    cout << t->str << "(" << t->count << ")" << endl << endl;
    if ( t->left != NULL )
      display(t->left);
    --depth;
}