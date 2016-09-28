/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on September 25, 2016, 8:55 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare Variables
    const float ClassAPri = 15.00;//Class A seats cost
    const float ClassBPri = 12.00;//Class B seats cost
    const float ClassCPri = 9.00;//Class C seats cost
    
    int NumClassA;//Tickets sold in Class A
    int NumClassB;//Tickets sold in Class B
    int NumClassC;//Tickets sold in Class C
    float income;//Total ticksts in three Classes
    
    //Input
    cout <<"Enter the number of Class A tickets sold: ";
    cin >>NumClassA;
    
    cout <<"Enter the number of Class B tickets sold: ";
    cin >>NumClassB;
    
    cout <<"Enter the number of Class C tickets sold: ";
    cin >>NumClassC;
    
    //Calculations
    income=(ClassAPri*NumClassA)+(ClassBPri*NumClassB)+(ClassCPri*NumClassC);
    
    //Output
    cout <<"Total income from sale of tickets is $ ";
    cout << fixed << showpoint << setprecision(2) << income <<endl;
    
    
    
    return 0;
}

