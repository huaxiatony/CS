#include "WordLadder.h"
#include <iostream>
using namespace std;

WordLadder::WordLadder(){}
WordLadder::~WordLadder(){}

WordLadder::WordLadder(const string& listFile){
    ifstream in;
    in.open(listFile.c_str());
    if(!in.is_open()){
        cout << "Error opening " << listFile << endl;
    } else {
        string input = "";
        while(!in.eof()){
            getline(in , input);
            dict.push_back(input);
        }
    }
    in.close();
}

void WordLadder::outputLadder(const string& start, const string& end){
    stack<string> word_stack;
    word_stack.push(start);
    queue<stack<string> > qs;
    qs.push(word_stack);
    dict.remove(start);
    while(!qs.empty()){

        for(list<string>::iterator i = dict.begin(); i != dict.end(); ++i){
            if(offByOne(*i , qs.front().top())){
                if(*i == end){
                    cout << end << endl;
                    while(!qs.front().empty()){
                        cout << qs.front().top() << endl;
                        qs.front().pop();
                    }
                    return;
                } else {
                    stack<string> temp = qs.front();
                    temp.push(*i);
                    qs.push(temp);
                    dict.erase(i);
                    --i;
                }
            } 
        }
    qs.pop();
    }
    cout << "No word ladder found" << endl;
}

// void WordLadder::outputLadder(stack<string>& s, const string& start){
        /*
    Create a stack of strings.
    Push the start word on this stack.
    Create a queue of stacks.
    Enqueue this stack.
    while the queue is not empty
        for each word in the dictionary
            if a word is exactly 1 letter different than the top string of the front stack
            then 
                if this word is the end word
                    then 
                    word ladder found, it is the front stack plus the end word
                else
                    Make a copy of the front stack.
                    Push the found word onto the copy.
                    Enqueue the copy.
        Dequeue front stack.
    end while loop
    */
//     s.push(start);
//     queue<stack<string> > qs;
//     qs.push(s);
//     while(!qs.empty()){
//         for(list<string>::iterator i = dict.begin(); i != dict.end(); ++i){
//             if(offByOne(*i, qs.front().top())){
//                 if(*i == )
//             }
//             stack<string> temp = qs.front();
//             temp.push(*i);
//             qs.push(temp);
//             dict.erase(i);
//             --i;
//         }
//         qs.pop();
//     }
// }

void WordLadder::printDictionary(){
    for(list<string>::iterator i = dict.begin(); i != dict.end(); ++i){
        cout << *i << " ";
    }
    cout << endl;
}

bool WordLadder::offByOne(const string& s1, const string& s2){
    // naive method
    unsigned counter = 0;
    for(unsigned i = 0; i < s1.size(); ++i){
        if(s1[i] != s2[i]){
            ++counter;
        }
        if(counter > 1){
            return false;
        }
    }
    return true;
    // return (counter != 1);
}