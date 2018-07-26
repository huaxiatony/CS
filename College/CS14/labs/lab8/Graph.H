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
 * Filename : Graph.H
 *
 * I hereby certify that the contents of this file represent
 * my own original individual work. Nowhere herein is there 
 * code from any outside resources such as another individual,
 * a website, or publishings unless specifically designated as
 * permissible by the instructor or TA.
 */ 
 

/*
 * lab 8
 * Graph.H
 */


#ifndef GRAPH_H_
#define GRAPH_H_

#include <vector>
#include <list>
#include <queue>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "Vertex.H"

using namespace std;

class Graph {

public:
	Graph(){}
	Graph(ifstream& ifs){ /* implement overloaded constructor */ build_graph(ifs);}
	~Graph(){}
	void build_graph(ifstream& ifs){ /* implement build_graph */ 
		int num_nodes,
			num_edges;
		string label,
			   source,
			   dest;
		Vertex blank;
		// Take in # of nodes and edges as input 
		ifs >> num_nodes >> num_edges; 

		// Make vertex N times
		for(int i = 0; i < num_nodes; ++i)
			vertices.push_back(blank);
		// Take in the next N lines for the labels
		for(int i = 0; i < num_nodes; ++i){
			ifs >> label;
			vertices.at(i).label = label;
			vertices.at(i).id = i;
		}
		// Add edges
		for(int i = 0; i < num_edges; ++i){ 
			ifs >> source >> dest;
			for(int j = 0; j < num_nodes; ++j){ 
				if(source == vertices.at(j).label){ 
					for(int k = 0; k < num_nodes; ++k){ 
						if(vertices.at(k).label == dest){
							vertices.at(j).neighbors.push_back((vertices.at(k).id)); 
						}
					}

				}

			}
		}
		
	}
	void output_graph(){ /* implement output_graph */ 
		ofstream ofs;
		string output = "output.dot";
		ofs.open(output.c_str());
		
		ofs << "digraph {\n";
		for(unsigned i = 0; i < vertices.size(); ++i)
			ofs << "\t" << i << " [label=\"" << vertices.at(i).label << ", distance = " << vertices.at(i).distance << "\"" << "];" << endl;
		ofs << endl;
		for(unsigned i = 0; i < vertices.size(); ++i){
			// for(unsigned j = 0; j < vertices.at(i).neighbors.size(); ++j)
			for(list<int>::iterator j = vertices.at(i).neighbors.begin(); j != vertices.at(i).neighbors.end(); ++j)
				ofs << i << " -> " << *j << endl;
		}
		ofs << "\n}";
		
		ofs.close();
	}
	void bfs(){ /* implement bfs */ 
		vertices.at(0).distance = 0;
		queue<Vertex> s;
		s.push(vertices.at(0));
		while(!s.empty()){
			Vertex u = s.front();
			s.pop();
			for(list<int>::iterator i = u.neighbors.begin(); i != u.neighbors.end(); ++i){
				if(vertices.at(*i).distance == 9999){
					vertices.at(*i).distance = u.distance + 1;
					s.push(vertices.at(*i));
				}
			}
		}
		
	}
private:
	vector<Vertex> vertices;
};

#endif /* GRAPH_H_ */
