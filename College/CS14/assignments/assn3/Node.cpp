#include "Node.h"
#include <iostream>

using namespace std;
Node::~Node(){
    delete left;
    delete right;
    // count = 0;
    // str = "";
}