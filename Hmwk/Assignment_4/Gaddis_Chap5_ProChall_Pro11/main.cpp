/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on October 15, 2016, 3:14 PM
 * Purpose: Population of organisms
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float start_number;//The start number   
    float daily_increase;//Daily increase in the percentage
    float days;//Days of multiply
    float increase;
    
    //Get the start number of organisms
    do
    {
        cout<<"What is the start number of organisms? ";
        cin>>start_number;
    
        //Get a start number of organisms bigger than 2
        if (start_number < 2)
            cout<<"Please enter a number bigger than 2."<<endl; 
    }while (start_number < 2);
    
    
    //Get the average increase of each year
    do 
    {
        cout<<"The average daily increase in the percentage? ";
        cin>>daily_increase;
    
        //Get a a positive number of increase
        if (daily_increase < 0)
            cout<<"Please enter a positive number."<<endl;
    }while (daily_increase < 0);
    
    //Get the number of days
    do
    {
        cout<<"How many days they will multiply? ";
        cin>>days;

        //Get days bigger than 1
        while (days < 1)
            cout<<"Please enter a number bigger than 1."<<endl;
    }while (days < 1);
    
    //Display the output
    cout<<"\nDay"<<setw(15)<<"Increase"<<setw(15)<<"Organisms"<<endl;
    cout<<"---------------------------------------\n";
    
    //Display the output
    for (int day = 1; day <= days; day++)
    {
        increase = start_number * daily_increase;
        start_number += increase;
        
        cout<<day<<setw(13)<<increase<<setw(15)<<start_number<<endl;
    }
        
        
    
    
    
    
    return 0;
}

