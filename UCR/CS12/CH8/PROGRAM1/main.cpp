#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

void readData(const string &filename, vector<double> &flightPathAngles, vector<double> &liftCoefficients);
double interpolation(double requestedFlightAngle, const vector<double> &flightPathAngles, const vector<double> &liftCoefficients);
bool isOrdered(const vector<double> &orderedVector);
void reorder(vector<double> &flightPathAngles, vector<double> &liftCoefficients);
int checkToContain(const vector<double> &a, double aa);
void printToTerminal(vector<double> &displayedVector, string vectorName);
int closestNumber(double requestedAngle, const vector<double> &flightPathAngles);

int main(){
    vector<double> flightPathAngles;
    vector<double> liftCoefficients;
    
    string filename;
    double angle, coefficient;
    
    cout << "Enter name of input data file:" << endl; cin >> filename; cout << endl;
    
    readData(filename, flightPathAngles, liftCoefficients);
    
    printToTerminal(flightPathAngles, "Flight Angles");
    printToTerminal(liftCoefficients, "Coefficients of Lift");
    
    cout << "Vector has been sorted: " << boolalpha << isOrdered(flightPathAngles) << endl;
    
    if(!isOrdered(flightPathAngles)){
        reorder(flightPathAngles, liftCoefficients);
        cout << "Resorted: " << endl;
        printToTerminal(flightPathAngles, "Flight Angles"); printToTerminal(liftCoefficients, "Coefficients of Lift");}
		
    cout << "Enter flight angle: " << endl; cin >> angle; cout << endl;
    
    coefficient = interpolation(angle, flightPathAngles, liftCoefficients);
    
    cout << angle << "has a coefficient of " << coefficient << endl;
    
    return 0;
}

void readData(const string& filename, vector<double>& flightPathAngles, vector<double>& liftCoefficients){
    ifstream input;
    double 
        angle = 0.0, 
        coefficient = 0.0;
    
    input.open(filename.c_str());
    if(input.is_open()){
        while(input >> angle >> coefficient){
            flightPathAngles.push_back(angle); liftCoefficients.push_back(coefficient);}}
    else{
        cout<<"Error opening " << filename << endl; exit(1);}
    
    input.close(); return;}

double interpolation(double requestedAngle, const vector<double> &flightPathAngles, const vector<double> &liftCoefficients){
	int storedVal = 0, aboveIndex = 0;
    
    bool unBounded = requestedAngle < flightPathAngles.at(0) || requestedAngle > flightPathAngles.at(flightPathAngles.size() - 1);
    
    if(unBounded){
        cout << "This flight angle is not in the bounds of the vector" << endl; exit(1);}
    
    storedVal = checkToContain(flightPathAngles, requestedAngle), aboveIndex = closestNumber(requestedAngle, flightPathAngles);
	
    if(storedVal != -1){
       return liftCoefficients.at(storedVal);}
    
    double
        a = flightPathAngles.at(aboveIndex - 1),
        b = requestedAngle,
        c = flightPathAngles.at(aboveIndex),
        f_a = liftCoefficients.at(aboveIndex - 1),
        f_c = liftCoefficients.at(aboveIndex);
    
    return f_a + (b - a)/(c - a) * (f_c - f_a);
}

int closestNumber(double requestedAngle, const vector<double>& flightPathAngles) {
    for(unsigned int i = 0; i < flightPathAngles.size(); ++i){
       if(flightPathAngles.at(i) > requestedAngle){
           return i;}}
    
    return -1;
}

bool isOrdered(const vector<double> &flightPathAngles) {
    bool order = true;
    
    for(unsigned int i = 0; i < flightPathAngles.size(); ++i){
        if(i+1 < flightPathAngles.size() && flightPathAngles.at(i+1) < flightPathAngles.at(i)) {
            order = false;}
    }  
    return order;
}

void reorder(vector<double> &flightPathAngles, vector<double> &liftCoefficients) {
    for (unsigned int i = 0; i < flightPathAngles.size(); ++i){
        unsigned int o = i;
        while (o > 0 && flightPathAngles.at(o) < flightPathAngles.at(o-1)){
          double temp = flightPathAngles.at(o);
          flightPathAngles.at(o) = flightPathAngles.at(o-1);
          flightPathAngles.at(o-1) = temp;

          temp = liftCoefficients.at(o);
          liftCoefficients.at(o) = liftCoefficients.at(o-1);
          liftCoefficients.at(o-1) = temp;

          o--;
        }
    }
}

int checkToContain(const vector<double> &a, double angle){
    for(unsigned int i = 0; i < a.size(); ++i){
        if(static_cast<int>(a.at(i)) - static_cast<int>(angle) == 0){
            return i;}}
    return -1;}
    
    
void printToTerminal(vector<double> &a, string aName){
    cout << aName << endl;

    for(unsigned int i = 0; i < a.size(); ++i){
        cout << a.at(i) << " ";}
    
    cout << endl;
    
   return; 
}