/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on September 25, 2016, 10:32 PM
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare the Variables
    string Month1,Month2,Month3;//Give three Months' Name
    float Rainfall1,Rainfall2,Rainfall3,RainfallAve;//Give three Months' rainfall
    int N=3; //Number of months
    
    
    cout <<"This program calculates the average"<<"rainfall for three months"<<endl; 
    
    //Input the first month's name
    cout <<"Enter the name of 1st month : ";
    cin >> Month1;
    
    //Input the first month's rainfall
    cout <<"Enter the rainfall for " << Month1 <<":";
    cin >> Rainfall1;
    
    //Input the second month's name
    cout <<"Enter the name of 2nd month : ";
    cin >> Month2;
    
    
    //Input the second month's rainfall
    cout <<"Enter the rainfall for " << Month2 <<":";
    cin >> Rainfall2;
    
    //Input the third month's name
    cout <<"Enter the name of 3th month : ";
    cin >> Month3;
    
    //Input the third month's rainfall
    cout <<"Enter the rainfall for " << Month3 <<":";
    cin >> Rainfall3;
    
    //Calculations 
    RainfallAve=(Rainfall1+Rainfall2+Rainfall3)/N;
    
    //Output the average rainfall
    cout <<"The average ranifall for "<< Month1 << "," << Month2 <<","<< Month3 << " is "
            <<setprecision(2)<< fixed << RainfallAve << " inches "<<endl;
    
    
    return 0;
}

