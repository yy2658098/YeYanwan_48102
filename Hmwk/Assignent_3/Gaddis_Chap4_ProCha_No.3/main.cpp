/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on October 1, 2016, 9:13 PM
 * Purpose: The program should determine whether the month times the day is
 *          equal to the year.
 */

#include <iostream>
#include<iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int Month,Day,Year,Date;
    
    //Get a month number
    cout<<"Enter a month\n";
    cin>>Month;
    
    //Get a day number
    cout<<"Enter a day in two-digit\n";
    cin>>Day;
    
    //Get a year number
    cout<<"Enter a year in two-digit\n";
    cin>>Year;
    
    //Calculate 
    Date==Month*Day;
    
    if (Date==Year)
        cout<<"The date is magic\n";
    else
        cout<<"The date is not magic\n";
    
    
    
    
    return 0;
}

