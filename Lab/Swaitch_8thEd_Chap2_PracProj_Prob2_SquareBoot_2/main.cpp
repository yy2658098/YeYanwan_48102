/* 
 * File:   main
 * Author: Yanwan Ye
 * Created on September 20, 2016, 11:24 AM
 * Purpose: Iteration to find Square Root
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

const float MAXRAND=pow(2,31)-1;
/*
 * 
 *
 * 
 */
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables
    float n,guess,r;
    float scale=90,shift=10;
    short counter=0;
    
    //Input values - float random number (10,100) vs.
    //               integer random number rand()%scale+shift [10,100]
    n=rand()/MAXRAND*scale+shift;
    guess=n/2;
    
    cout<<"The number to find the square root of = "<<n<<endl;
    cout<<"The initial guess = "<<guess<<endl;
    
    //First Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<"Pass "<<counter<<"  [r,guess]=["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;

    
    //Second Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<"Pass "<<counter<<"  [r,guess]=["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
    
    //Net Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<"Pass "<<counter<<"  [r,guess]=["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
    
    //Net Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<"Pass "<<counter<<"  [r,guess]=["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
    
    //Net Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<"Pass "<<counter<<"  [r,guess]=["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
    
    //Net Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<"Pass "<<counter<<"  [r,guess]=["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
    
    //Net Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<"Pass "<<counter<<"  [r,guess]=["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
    
    
    //The answer or solution is
    cout<<"The sqrt("<<n<<")="<<sqrt(n)<<endl;
    
    
    return 0;
}

