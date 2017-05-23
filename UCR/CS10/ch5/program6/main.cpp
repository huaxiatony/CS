#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int PLAYER1 = 0;
const int PLAYER2 = 1;
const int WINNING_SCORE = 100;

//FIXME (1): Implement the printIntro function
void printIntro(){
    cout << "Welcome to the dice game Pig!" << endl << "The objective is to be first to score 100 points." << endl << endl;
    return;}
    
int rollDice(){ int r = 0; r = 1 + rand() % 6; return r;}
    
//FIXME (4, 5, 6): Implement the humanTurn function
int humanTurn(string playerName, int playerScore){
    int previousRoll = 0, currentScore = 0, tempScore = 0;
    char input = 'y';
    bool runLoop = true;
    
    currentScore = playerScore;

    while(runLoop){
       previousRoll = rollDice(); tempScore = 0;
       if(previousRoll > 1){
           currentScore += previousRoll; tempScore = currentScore - playerScore;
           cout << playerName << endl << "You rolled a " << previousRoll << endl << "Your score: " << currentScore << endl;
           if(currentScore >= 100){ return currentScore;}
           cout << "Do you want to roll again? (y/n): " << endl; cin >> input;
           if(input == 'n'){ runLoop = false;}
       }
       else{
           cout << playerName << endl << "You rolled a " << previousRoll << " (PIG!)" << endl << "Your turn is over" << endl;
           cout << "Your score: " << playerScore - tempScore << endl << endl; return playerScore - tempScore;
           runLoop = false;
        }
    }
    return tempScore;
}
        
int main(){
    srand(4444);

    // setup and initialize variables
    int turn = PLAYER1, player1score = 0, player2score = 0;
    string player1name, player2name;

    printIntro();

    // FIXME (2): get names of players
    cout << "Player 1 - Enter your name: " << endl;
    cin >> player1name;
    cout << "Player 2 - Enter your name: " << endl;
    cin >> player2name;
    //play game
    while (player1score < WINNING_SCORE && player2score < WINNING_SCORE) {

        //player 1's turn or player 2's turn
        if(turn == PLAYER1){  player1score = humanTurn(player1name, player1score);}
        else{   player2score = humanTurn(player2name, player2score);}

        //FIXME (3): update turn value
        //         based on whose turn it is, update the turn variable to other player
        if(turn == PLAYER1){    turn = PLAYER2;}
        else if(turn == PLAYER2){   turn = PLAYER1;}
    
    }
    // FIXME (7): Output who won the game.
    if(player1score >= WINNING_SCORE){    cout << endl << player1name << " wins!";}
    else{   cout << endl << player2name << " wins!";}
    
    return 0;
}