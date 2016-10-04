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
        case 1:cout<<"There are 31 days in January "<< Year<<endl;
               break;
        case 2:
            if (Year%400==0)
            {
                cout<<"There are 29 days in February "<< Year<<endl;
            }
            else if (Year%100!=0&&Year%4==0)
            {
                cout<<"There are 29 days in February "<< Year<<endl;
            }
            else
            {
                cout<<"There are 28 days in February "<< Year<<endl;
            }
                break;
        case 3:cout<<"There are 31 days in March "<< Year<<endl;
               break;
        case 4:cout<<"There are 30 days in April "<< Year<<endl;
               break;
        case 5:cout<<"There are 31 days in May "<< Year<<endl;
               break;
        case 6:cout<<"There are 30 days in June "<< Year<<endl;
               break;
        case 7:cout<<"There are 31 days in July "<< Year<<endl;
               break;
        case 8:cout<<"There are 31 days in August "<< Year<<endl;
               break;
        case 9:cout<<"There are 30 days in September "<< Year<<endl;
               break;
        case 10:cout<<"There are 31 days in October "<< Year<<endl;
               break;
        case 11:cout<<"There are 30 days in November "<< Year<<endl;
               break;
        case 12:cout<<"There are 31 days in December "<< Year<<endl;
               break;

    }
   
    return 0;
}

