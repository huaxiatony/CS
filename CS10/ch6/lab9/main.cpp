// FIXME - VECTOR LIBRARY
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

void fillVector(vector<double>& myVector) //(3) FIXME - Add Parameter
{
    double userDouble = 0.0;
    cout << "Enter numbers to populate the vector (enter any other character to end user input): "; 
    //(3) FIXME - Add numbers to vector
    while(cin >> userDouble){myVector.push_back(userDouble);}
    cout << endl;
    return;}

double meanVector(const vector<double> myVector) {

   //(4) FIXME - Calculate mean of vector numbers
   double avg = 0.0;
   for(int i = 0; i < myVector.size(); ++i){avg += myVector.at(i);}
   return avg /= myVector.size();}

double varianceVector(double vectorAvg, const vector <double> &v) {
   //(5) FIXME - Calculate variance of vector numbers
   vector<double>temp;
   for(int i = 0; i < v.size(); ++i){temp.push_back(pow((v.at(i) - vectorAvg),2));}
   return meanVector(temp);}

double standardDeviationForVariance(double vectorVariance) {
   //(6) FIXME - Calculate standard deviation
   return sqrt(vectorVariance);}

int main() {
   //(3) FIXME - Declare vector of doubles
   double avg = 0.0, var = 0.0, stdDev = 0.0;
   unsigned int i = 0;
   vector<double> myVector;

   //(3) FIXME - Call fillVector() function
   fillVector(myVector);
   cout << "You entered: ";
   //(3) FIXME - Print vector values (use i variable)
   for(i = 0; i < myVector.size(); ++i){    cout << myVector.at(i) << " ";}
   cout << endl;
   //(4) FIXME - Call meanVector() function
   avg = meanVector(myVector);
   //(5) FIXME - Call varianceVector() function
   var = varianceVector(avg, myVector);
   //(6) FIXME - Call standardDeviationForVariance() function
   stdDev = standardDeviationForVariance(var);

   cout << "The mean is: " << avg << endl;
   cout << "The variance is: " << var << endl;
   cout << "The standard deviation is: " << stdDev << endl;

   return 0;
}