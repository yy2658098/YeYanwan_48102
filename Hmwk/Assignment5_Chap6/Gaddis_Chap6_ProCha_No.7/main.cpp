/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on November 8, 2016, 12:13 AM
 * Purpose: This program calculate the celsius temperature.
 */

#include <iostream>
#include <iomanip>

using namespace std;

float const m=5.0/9.0;
float celsius(float);
/*
 * 
 */
int main(int argc, char** argv) {
    cout<<"Fahrenheit\tCelsius"<<endl;
    cout<<"=========================\n";
    cout<<setprecision(2)<<fixed<<showpoint;
    
    for(int i=0; i<=20; i++)
        cout<<setw(5)<<right<<i<<"\t\t"<<celsius(i)<<endl;
                
    return 0;
}

//***************************************************************************
//Definition of function celsius temperature.The function put fahrenheit    *
//and translated to celsius finally.This function return to celsius         *
//***************************************************************************

float celsius(float f)
{
    float c;//Celsius
    c=m*(f-32);
    return c;
}