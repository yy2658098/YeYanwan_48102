/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on October 12, 2016, 9:25 PM
 * Purpose: This program calculate sum of values
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int value;//Get a values
    int sum = 0;//Accumulator, initialized with o
    
    //Get the value
    cout<<"Enter a positive integer value: ";
    cin>>value;
    
    //Accumulate a total
    for (int count=1;count<=value;count++)
        sum+=count;
    
    //Display the sum
    cout<<"The sum of numbers from 1 to value is "<<sum<<endl;
    
    
    return 0;
}

