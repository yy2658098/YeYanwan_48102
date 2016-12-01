/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on October 15, 2016, 12:24 PM
 * Purpose: Membership fee increase
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float per_year=2500.00;//Each year membershiop fee
    const float percent=0.04f;//Increase 4% each year
    int year_start=1;//First year
    int year_end=6;//Six year
    float increase,fee;
   
    //Display the ouput
    cout<<"Year"<<"\t"<<" Membership Fee"<<endl;
    cout<<"------------------------"<<endl;
    
    for(int year=year_start;year<=year_end;year++){
        increase=year*percent*per_year;
        fee=per_year+increase;
        cout<<fixed<<showpoint<<setprecision(2)<<endl;
        cout<<year<<"\t\t"<<"$"<<fee<<endl;
    }
    
    
    
    
    
    
    return 0;
}

