/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on October 12, 2016, 10:54 PM
 * Purpose: Calculate the calories
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const float cal_per_minute=3.6;//burn 3.6 calories per minute
    const int min_minute=5;//five minutes
    const int max_minute=30;//30 minutes
    const int inc=5;//increas minutes
    float calories;
    
    cout<<"Mintutes"<<"      Calories"<<endl;
    cout<<"----------------------\n";
    
    //Set the calories
    cout<<fixed<<showpoint<<setprecision(1)<<endl;
    
    //Display the output
    for (int min=min_minute;min<=max_minute;min+=inc)
    {
        calories=cal_per_minute*min;
        cout<<min<<"\t\t"<<calories<<endl;
    }
    
    
    return 0;
}

