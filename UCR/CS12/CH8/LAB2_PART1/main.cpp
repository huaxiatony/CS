#include <fstream>
#include <iostream>
#include <cstdlib> //needed for exit function
#include <string>

using namespace std;

// Place fileSum prototype (declaration) here
int fileSum(string filename);

int main() {
   string filename = "";
   
   //Prompt user for filename
   cout << "Enter the name of the input file: ";
   cin >> filename;
   cout << endl;
   cout << "Sum: " << fileSum(filename) << endl;

   return 0;
}

// Place fileSum implementation here
int fileSum(string filename){
    ifstream in; //Input file stream
    int sum = 0, num = 0;
    in.open(filename.c_str());
    if(in.is_open()){
        while(in >> num){
            if(!in.bad()){
                sum+=num;}}}
    else{
        cout << "Error opening " << filename << endl; exit(1);}
    in.close();
    return sum;
    
}


/*


*/