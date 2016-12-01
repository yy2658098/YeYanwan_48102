/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on October 15, 2016, 2:44 PM
 * Purpose: Average rainfall
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int years;//the number of years
    float inches;//The rainfall
    float total_inches = 0;//Total inches of rainfall
    float average;//The average of rainfall
    int total_monthes;//Total monthes
    
    //Get the number of years
    cout<<"How many years? ";
    cin>>years;
    
    //Get a positive number
    while (years < 1)
    {
        cout<<"Please enter a positive number of year \n";
    }
    
    //Display the output
    for (int year = 1; year <= years; year++)
    {
        cout<<"Year "<<year<<endl;
        
        //Get the rainfall for each month
        for (int month = 1; month <= 12; month++)
        {
            cout<<"The inches of rainfall for month "<<month<<" :";
            cin>>inches;
        }
        
        total_monthes = years * 12;
        total_inches += inches;
    }
    
    average = total_inches / total_monthes;
    
    //Display the total monthes
    cout<<"\nThe total monthes is "<<total_monthes<<" ."<<endl;
    
    //Display the total ranifall
    cout<<"\nThe total rainfall is "<<total_inches<<" inches"<<" ."<<endl;
    //Display the average of ranifall
    cout<<"\nThe average of rainfall for each month is "<<average<<" inches"<<endl;
    
    
    
    return 0;
}

