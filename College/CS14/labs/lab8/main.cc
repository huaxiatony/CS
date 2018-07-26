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
 * Filename : main.cc
 *
 * I hereby certify that the contents of this file represent
 * my own original individual work. Nowhere herein is there 
 * code from any outside resources such as another individual,
 * a website, or publishings unless specifically designated as
 * permissible by the instructor or TA.
 */ 

/*
 * lab 8
 * main.cc
 */

#include "Graph.H"

int main(int argc, char* argv[]) {

    if(argc != 2) {
      cerr << "Usage error: expected <executable> <input>" << endl;
      exit(1);
    }
    
    ifstream ifs(argv[1]);
    if(!ifs) {
      cerr << "Input file not found." << endl;
      exit(1);
    }

    Graph g(ifs);
    ifs.close();
    g.bfs();
    g.output_graph();
    cout << "The End." << endl;

    return 0;
}
