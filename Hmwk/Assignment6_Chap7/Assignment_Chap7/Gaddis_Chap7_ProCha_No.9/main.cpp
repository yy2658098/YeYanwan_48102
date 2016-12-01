/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on November 23, 2016, 12:27 AM
 */

#include <iostream>

using namespace std;

const int size=7;

void getInfor(long[], int [], float [], float [], int);

/*
 * 
 */
int main(int argc, char** argv) {

    long empId[size]={5658845, 4520125, 7895122,8777541, 8451277, 1302850, 7580489};
    int hours[size];
    float payRate[size];
    float wages[size];
    
    getInfor(empId, hours, payRate, wages, size);
    
    
    return 0;
}

void getInfor(long empId[], int hours[], float payRate[], float wages[], int size)
{
    for(int count=0; count<size;count++)
    {
        //Get each employee's work hours
        cout<<"Employee # "<<empId[count]<< " worked hours: ";
        cin>>hours[count];
        
        //Get the pay rate
        cout<<"Employee # "<<empId[count]<< " pay rate: ";
        cin>>payRate[count];
       
       //Valid the pay rate 
        if(payRate[count] < 15)
        {
            cout<<"Enter the pay rate lager than 15.0: ";
            cin>>payRate[count];
        }
        
        wages[count]=hours[count]*payRate[count];
        
        //Get each employee's gross wages
        cout<<"Employee # "<<empId[count]<< " wages: "<<wages[count]<<endl<<endl;
    }
}

void getWages()
{
    
}