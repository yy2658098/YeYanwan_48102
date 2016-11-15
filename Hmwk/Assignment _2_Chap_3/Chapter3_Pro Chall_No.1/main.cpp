/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on September 26, 2016, 10:37 PM
 */

#include <iostream>
#include <iomanip>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Declare Variables
    float gallons, miles,  MilPerGas ;
    
    //Get the number of gallons
    cout << "Enter the number of gallons ";
    cin >> gallons ;
    
    //Get the number of miles
    cout << "Enter the number of miles";
    cin >> miles;
    
    //Claculations
    MilPerGas = miles / gallons ;
    
    //Output 
    cout <<"The number of miles that may be driven per gallon of gas :" << MilPerGas <<" mile/gas "<< endl;
    
    return 0;
}

