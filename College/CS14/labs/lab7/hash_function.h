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
 * Filename : hash_function.h
 *
 * I hereby certify that the contents of this file represent
 * my own original individual work. Nowhere herein is there 
 * code from any outside resources such as another individual,
 * a website, or publishings unless specifically designated as
 * permissible by the instructor or TA.
 */ 
#ifndef HASH_FUNCTION
#define HASH_FUNCTION
using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <cstdlib>

class hash_function{
private:
  vector< vector<string> > v;
  vector< string > words;
  unsigned capacity;
public:
  hash_function();
  int hash_ascii( string key );
  int hash_first_three( string key );
  int hash_all( string key );
  void hash_arrange();
  void print();
  void processFile( string filename );
  void printStats();
};
#endif