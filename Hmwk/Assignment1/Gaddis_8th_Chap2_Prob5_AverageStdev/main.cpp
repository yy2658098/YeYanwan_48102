/* 
 * File:   main
 * Author: Dr.Mark E. Lehr
 * Created on September 13th, 2016, 12:28 PM
 * Purpose: Calculate Average/Mean and Standard Deviation
 */

#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declaration of Variables
    int x1,x2,x3,x4,x5;
    float avg,stdev;
    
    //Input values
    cout<<"This program calculates the mean and standard deviation"<<endl;
    cout<<"Input 5 values"<<endl;
    cin>>x1>>x2>>x3>>x4>>x5;
    
    //Process values ->Map inputs to Outputs
    avg=(x1+x2+x3+x4+x5)/5;
    stdev=((x1-avg)*(x1-avg)+(x2-avg)*(x2-avg)+(x3-avg)*(x3-avg)+(x4-avg)*(x4-avg)+(x5-avg)*(x5-avg))/4,0.5;
    
    //Display Output
    cout<<"The input values = "<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<" "<<x5<<endl;
    cout<<"The mean = "<<avg<<endl;
    cout<<"The standard Deviation = "<<stdev<<endl;
    
    //Exit Program
    return 0;
}

