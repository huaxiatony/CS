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
 * Filename : hash_function.cc
 *
 * I hereby certify that the contents of this file represent
 * my own original individual work. Nowhere herein is there 
 * code from any outside resources such as another individual,
 * a website, or publishings unless specifically designated as
 * permissible by the instructor or TA.
 */ 
#include "hash_function.h"
#include <cmath>
#include <fstream>
using namespace std;

hash_function::hash_function() : capacity(10) {
  v.resize(capacity);
}

int hash_function::hash_ascii( string key ){
  int count = 0;
  for(int i = 0; i < (int)key.length(); ++i) count += (int)key[i];
  return count;
}

int hash_function::hash_first_three( string key ){
  return key[0] + 27*key[1] + 729*key[2];
}

int hash_function::hash_all( string key ){
  int count = 0;
  for(int i = 0; i < (int)key.length() - 1; ++i)
    count += key[key.length() - i - 1] * pow(37,i);
  return count;
}

void hash_function::hash_arrange(){
  int loc;
  for(int i = 0; i < (int)words.size(); i++){
    loc = hash_first_three( words.at(i) ) % capacity;
    switch(loc){
      case 0: v.at(0).push_back(words.at(i)); break;
      case 1: v.at(1).push_back(words.at(i)); break;
      case 2: v.at(2).push_back(words.at(i)); break;
      case 3: v.at(3).push_back(words.at(i)); break;
      case 4: v.at(4).push_back(words.at(i)); break;
      case 5: v.at(5).push_back(words.at(i)); break;
      case 6: v.at(6).push_back(words.at(i)); break;
      case 7: v.at(7).push_back(words.at(i)); break;
      case 8: v.at(8).push_back(words.at(i)); break;
      case 9: v.at(9).push_back(words.at(i)); break;
    }
  }
}

void hash_function::print( ){
  for(int i = 0; i < (int)v.size(); ++i){
    cout << i << ": ";
    for(int j = 0; j < (int)v.at(i).size(); ++j)
      cout << v.at(i).at(j) << ", ";
    cout << endl;
  }
}

void hash_function::processFile( string filename ){
  ifstream in;
  string input;
  in.open(filename.c_str());
  if(in.is_open()){
    while(in >> input)
      words.push_back(input);
  } else {
    cout << "Error opening " << filename << endl;
    exit(1);
  }
  in.close();
}

void hash_function::printStats( ){
  double avg = 0.0;
  int max = 0,
      max_index = 0,
      collisions = 0;
  
  for(int i = 0; i < (int)v.size(); ++i)
    for(int j = 0; j < (int)v.at(i).size(); ++j)
      if(v.at(i).front() != v.at(i).at(j))
       ++collisions;
  cout << "total number of collisions: " << collisions << endl;
  for(int i = 0; i<(int)capacity; ++i){
    avg += v.at(i).size();
    if((int)v.at(i).size() > max){
      max = v.at(i).size();
      max_index = i;
    }
  }
  cout << "largest (and 1st if multiple) amount at index: " << max_index << endl;
  cout << "average size of a heap: " << avg/capacity << endl;
}
