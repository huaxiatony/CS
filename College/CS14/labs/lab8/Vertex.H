/**
 * Course: CS014 Summer 2018
 *
 * First Name: Benjamin 
 * Last Name: Lee
 * Username: blee073
 * email address: this must be your cs or UCR student email address
 *
 *
 * Assignment: lab8
 * Filename : Vertex.H
 *
 * I hereby certify that the contents of this file represent
 * my own original individual work. Nowhere herein is there 
 * code from any outside resources such as another individual,
 * a website, or publishings unless specifically designated as
 * permissible by the instructor or TA.
 */ 

/*
 * 
 * Vertex.H
 */

#ifndef VERTEX_H_
#define VERTEX_H_

#include <string>
#include <list>
// #include <limits>

using namespace std;

class Vertex {
	friend class Graph;
public:
	Vertex() : label("") , distance(9999) , id(0) { /* implement constructor*/ }
	~Vertex(){}
	string label;
	int distance;
	list<int> neighbors;
	int id;
	// vector<int> neighbors;
};

#endif /* VERTEX_H_ */
