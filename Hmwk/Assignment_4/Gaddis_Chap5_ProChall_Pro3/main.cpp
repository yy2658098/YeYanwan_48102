/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on October 12, 2016, 9:47 PM
 * Purpose: Calculate the number of millimeters the oceam will rise each year
 *          for next 25 year
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const float Rise_Per_Year=1.5;//rise 1.5 millimeters per year
    const int Min_Year=1;//first year
    const int Max_Year=25;//until 25 year
    int year=Min_Year;//counter
    float ocean_rise;//each year ocean rise
    
    //set the number 
    cout<<fixed<<showpoint<<setprecision(2);
    
    //Display the table
    cout<<"Year  Ocean Rise \n";
    cout<<"================\n";
    while (year<=Max_Year)
    {
        ocean_rise=year*Rise_Per_Year;
        cout<<year<<"\t"<<ocean_rise<<endl;
        year++;
        cout<<"----------------"<<endl;
    }
    
    
    return 0;
}

