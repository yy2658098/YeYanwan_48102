
/* 
 * File:   main
 * Author: Yanwan Ye
 *
 * Created on October 13, 2016, 12:23 PM
 * Purpose: Guessing Game
 */

#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables
    int range,nGuess;
    int number,answer;
    
    //Input values
    cout<<"This is the guessing game"<<endl;
    cout<<"Choose a rang for the number to guess"<<endl;
    cin>>range;
            
    //Process values -> Map inputs to Outputs
    nGuess=log(range)/log(2)+1;
    cout<<"You have "<<nGuess<<" guesses to find the random number"<<endl;
    number=rand()%(range+1);//[0,range]
    
    //Display Result of each Guess
    for(int guess=1;guess<=nGuess;guess++){
        cout<<"Input your guess"<<endl;
        cin>>answer;
        if(answer>number)cout<<"Guess too High"<<endl;
        else if (answer<number)cout<<"Guess too Low"<<endl;
        else {
            cout<<"You guessed the number"<<endl;
            exit(0);
        }
    }
    cout<<"Sorry too many guesses"<<endl;
    
    
    return 0;
}

