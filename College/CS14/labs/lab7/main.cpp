/**
 * Course: CS014 Summer 2018
 *
 * First Name: Benjamin
 * Last Name: Lee
 * Username: blee073
 * email address: this must be your cs or UCR student email address
 *
 *
 * Assignment: lab7
 * Filename : main.cpp
 *
 * I hereby certify that the contents of this file represent
 * my own original individual work. Nowhere herein is there 
 * code from any outside resources such as another individual,
 * a website, or publishings unless specifically designated as
 * permissible by the instructor or TA.
 */ 
#include "hash_function.h"
using namespace std;
#include <iostream>

int main(int argc, char* argv[]){
  if(argc != 2) {
    cerr << "ERROR: expecting main.cpp hash_function.cc <file.txt>" << endl;
    exit(1);
  }
// int main(){
  hash_function a;

  a.processFile(argv[1]);
  a.hash_arrange();
  a.print();
  cout << endl;
  a.printStats();
}