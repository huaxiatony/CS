#include <iostream>
// FIXME include vector library
#include <vector> 
using namespace std;

void outputRoster(const vector<int> &, const vector<int> &);
void addPlayer(vector<int> &, vector<int> &);
void removePlayer(vector<int> &, vector<int> &);
void updatePlayerRating(const vector<int> &, vector<int> &);
void outputPlayersAboveRating(const vector<int> &, const vector<int> &);
void menu(char& output);

int main() {

   /* Type your code here. */
   int MAX_SIZE = 5, vectorInput = 0;
   vector<int> jerseyNum(MAX_SIZE);
   vector<int> jerseyRat(MAX_SIZE);
   char input;
   
   //User input
   for(int i = 1; i < MAX_SIZE + 1; ++i){
      cout << "Enter player " << i << "'s jersey number:" << endl;
      cin >> vectorInput; jerseyNum.at(i-1) = vectorInput;
      cout << "Enter player " << i << "'s rating:" << endl;
      cin >> vectorInput; cout << endl; jerseyRat.at(i-1) = vectorInput;}
   
   //Roster
   cout << "ROSTER" << endl;
   for(int i = 0; i < MAX_SIZE; ++i){
      cout << "Player " << i+1 << " -- Jersey number: " << jerseyNum.at(i) << ", Rating: " << jerseyRat.at(i) << endl;
   }
   
   vector<int> originalJerseyNumber(MAX_SIZE); originalJerseyNumber = jerseyNum;
   vector<int> originalJerseyRating(MAX_SIZE); originalJerseyRating = jerseyRat; 
   
   //Roster Menu
   cout << endl; menu(input);
   
   //Determines what the user has inputted and calls a function accordingly
   
   while(input != 'q'){
    if(input == 'a'){
        addPlayer(jerseyNum, jerseyRat); menu(input);}
    else if(input == 'd'){
      removePlayer(jerseyNum, jerseyRat); menu(input);}
    else if(input == 'u'){
      updatePlayerRating(jerseyNum, jerseyRat); menu(input);}
    else if(input == 'r'){
        outputPlayersAboveRating(jerseyNum, jerseyRat);menu(input);}
    else if(input == 'o'){
        if(jerseyNum == originalJerseyNumber && jerseyRat == originalJerseyRating ){
            cin >> input;
            if(input == 'q'){ break;}else{ menu(input);}}
        outputRoster(jerseyNum, jerseyRat); menu(input);}}
   return 0;
}

void menu(char &a){
    cout << "MENU" << endl << "a - Add player" << endl << "d - Remove player" << endl << "u - Update player rating" << endl << "r - Output players above a rating" 
    << endl << "o - Output roster" << endl << "q - Quit" << endl << endl << "Choose an option:" << endl;
    cin >> a;
    return;}

void outputRoster(const vector<int> &a, const vector<int> &b){
   cout << "ROSTER" << endl;
   for(unsigned int i = 0; i < a.size(); ++i){
      cout << "Player " << i+1 << " -- Jersey number: " << a.at(i) << ", Rating: " << b.at(i) << endl;}
    cout << endl;
   return;}

void addPlayer(vector<int> &a, vector<int> &b){
   int jerseyNum = 0, jerseyRat = 0;
   cout << "Enter another player's jersey number:" << endl; cin >> jerseyNum;
   cout << "Enter another player's rating:" << endl; cin >> jerseyRat; cout << endl;
   a.push_back(jerseyNum); b.push_back(jerseyRat);
   return;}

void removePlayer(vector<int> &a, vector<int> &b){
    int rem = 0, indexNum = 0, tempA = 0, tempB = 0;
    cout << "Enter a jersey number:" << endl; cin >> rem;
    for(unsigned int i = 0; i < a.size(); ++i){
        if(a.at(i) == rem){     indexNum = i;   }}
    for(unsigned int i = indexNum; i < a.size() - 1; ++i){
        tempA = a.at(i+1); tempB = b.at(i+1);
        a.at(i+1) = a.at(i); b.at(i+1) = b.at(i);
        a.at(i) = tempA; b.at(i) = tempB;}
    a.pop_back(); b.pop_back();
    return;} 
    
void updatePlayerRating(const vector<int> &a, vector<int> &b){
    int jerseyNum = 0, indexNum = 0, newRating = 0; 
    cout << "Enter a jersey number:" << endl;
    cin >> jerseyNum; cout << endl;
    cout << "Enter a new rating for player:" << endl;
    cin >> newRating; cout << endl;
    for(unsigned int i = 0; i < a.size(); ++i){
        if(a.at(i) == jerseyNum){    indexNum = i;}}
    b.at(indexNum) = newRating;
    return;}
    
void outputPlayersAboveRating(const vector<int> &a, const vector<int> &b){
    int rateNum = 0; 
    cout << "Enter a rating:" << endl; cin >> rateNum;
    cout << endl << endl << "ABOVE " << rateNum << endl;
    for(unsigned int i = 0; i < a.size(); ++i){
        if(b.at(i) > rateNum){cout << "Player " << i+1 << " -- Jersey number: " << a.at(i) << ", Rating: " << b.at(i) << endl;}}
    cout << endl;
    return;}