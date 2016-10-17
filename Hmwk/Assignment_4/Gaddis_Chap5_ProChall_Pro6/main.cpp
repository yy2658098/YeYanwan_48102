/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on October 15, 2016, 12:38 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int speed;//The vehicle speed
    int tral_hours;//Travel hours
    int distance;//Travel distance
    
    //Get th speed of vehicle
    cout<<"What is the speed of the vehicle in mph?";
    cin>>speed;
    
    //Make the speed is positive
    while (speed<0)
    {
        cout<<"Please enter a positive speed";
        cin>>speed;
    }
        
    //Get th tral_hours of vehicle
    cout<<"How many hours has it traveled?";
    cin>>tral_hours;
    
    //Make the tral_hours is positive
    while (tral_hours<1)
    {
        cout<<"Please enter  positive tral_hours";
        cin>>tral_hours;
    }
    //Display the output
    cout<<"Hour"<<setw(25)<<"Distance Traveled"<<endl;
    cout<<"------------------------"<<endl;
    
    for(int hour=1; hour <= tral_hours;hour++){
        distance=speed*hour;
        cout<<hour<<setw(20)<<distance<<endl;
    }
    
	return 0;
}

