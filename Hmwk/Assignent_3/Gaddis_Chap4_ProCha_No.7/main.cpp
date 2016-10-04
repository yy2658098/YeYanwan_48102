
/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on October 1, 2016, 11:01 PM
 * Purpose: This program is used to calculate time
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int seconds;//Get a number of seconds
    float min,hou,day;
    
    const int sec_min=60;//There are 60 seconds in a mintue
    const int sec_hou=3600;//There are 3600 seconds in an hour
    const int sec_day=86400;//There are 86400 seconds in a mday
    
    //Input a number of seconds
    cout<<"Enter a number of seconds\n";
    cin>>seconds;
    
    //Determine the seconds is in seconds, hours or days
    if (seconds>=sec_min)
    {
        min=static_cast<float>(seconds)/static_cast<float>(sec_min);
        cout<<"There are "<<fixed<<showpoint<<setprecision(2)<<min<<" mintues in the "<<seconds<<" seconds.\n";
    }
    if (seconds>=sec_hou)
    {
        hou=static_cast<float>(seconds)/static_cast<float>(sec_hou);
        cout<<"There are "<<fixed<<showpoint<<setprecision(2)<<hou<<" hours in the "<<seconds<<" seconds.\n";
    }
    if (seconds>=sec_day)
    {
        day=static_cast<float>(seconds)/static_cast<float>(sec_day);
        cout<<"There are "<<fixed<<showpoint<<setprecision(2)<<day<<" days in the "<<seconds<<" seconds.\n";
    }
    
    return 0;
}

