/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on November 7, 2016, 10:21 PM
 * Purpose: This program calculate the distance when an object is falling.
 */

#include <iostream>
#include <iomanip>
using namespace std;

float const g=9.8;
float fallingDistance(int);

/*
 * 
 */
int main(int argc, char** argv) {

    //Display the table
    cout<<"Seconds\t\tDistance"<<endl;
    cout<<"===========================\n";
    
    //Set the numeric output
    cout<<setprecision(2)<<fixed<<showpoint;
    
    for (int second=1; second<=10; second++)
        cout<<setw(2)<<right<<second<<"\t\t"<<
                setw(3)<<right<<fallingDistance(second)
                <<" meters"<<endl;
        
    return 0;
}


//*********************************************************************
//Definition of function fallingDistance.The function get distance    *
//when the object in diferent second.                                 *
//*********************************************************************

float fallingDistance(int time)
{
    float distance;
    
    distance=0.5*g*time*time;
    
    return distance;
        
}