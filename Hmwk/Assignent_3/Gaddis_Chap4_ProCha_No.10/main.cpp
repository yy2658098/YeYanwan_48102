/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on October 2, 2016, 4:57 PM
 * Purpose: This program is used to calculate a year whether it is a leap year 
 *          or not.
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int Month,Year;//Input the month and year in integer
    
    //Get the month
    cout<<"Enter a month (1-12):";
    cin>>Month;
    
    //Get the year
    cout<<"Enter a year:";
    cin>>Year;
    switch (Month)
    {
        case 1:cout<<"31 days\n";
               break;
        case 2:
            if (Year%100==0&&Year%400==0)
            {
                cout<<"29 days\n";
            }
            else if (Year%4==0)
            {
                cout<<"29 days\n";
            }
            else
            {
                cout<<"28 days\n";
            }
                break;
        case 3:cout<<"31 days\n";
               break;
        case 4:cout<<"30 days\n";
               break;
        case 5:cout<<"31 days\n";
               break;
        case 6:cout<<"30 days\n";
               break;
        case 7:cout<<"31 days\n";
               break;
        case 8:cout<<"31 days\n";
               break;
        case 9:cout<<"30 days\n";
               break;
        case 10:cout<<"31 days\n";
               break;
        case 11:cout<<"30 days\n";
               break;
        case 12:cout<<"31 days\n";
               break;

    }
   
    return 0;
}

