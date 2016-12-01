/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on November 4, 2016, 8:38 PM
 */

#include <iostream>
#include <string>

using namespace std;

int getNumAccidents(string);
void findLowest(float,float,float,float,float);
        
/*
 * 
 */
int main(int argc, char** argv) {

    findLowest(getNumAccidents("North"),
                getNumAccidents("South"),
                getNumAccidents("East"),
                getNumAccidents("West"),
                getNumAccidents("Central"));
    
    return 0;
}

//**************************************************************
//Definition of function getNumAccidents.The function get      *
//each city report times and return the sale.                  *
//**************************************************************

int getNumAccidents(string city)
{
    int times;
    
    cout<<"Please enter the major city "<<city<<" report times: ";
    cin>>times;
    
    return times;
}

//**************************************************************
//Definition of function findLowest.The function get           *
//determine the lowest report times and display it.            *
//**************************************************************

void findLowest(float Nor,float Sou,float Eas,float Wes,float Cen)
{
    int Lowest;
    string city;
    
    if(Nor<Sou && Nor<Eas && Nor<Wes && Nor<Cen)
    {
        Lowest=Nor;
        city="North";
    }
        
    if(Sou<Nor && Sou<Eas && Sou<Wes && Sou<Cen)
    {
        Lowest=Sou;
        city="South";
    }
    
    if(Eas<Nor && Eas<Sou && Eas<Wes && Eas<Cen)
    {
        Lowest=Eas;
        city="East";
    }
    
    if(Wes<Nor && Wes<Sou && Wes<Eas && Wes<Cen)
    {
        Lowest=Wes;
        city="West";
    }
    
    if(Cen<Nor && Cen<Sou && Cen<Eas && Cen<Wes)
    {
        Lowest=Cen;
        city="Central";
    }
    
    cout<<"\nThe lowest city is "<<city<<endl;
    cout<<"The report times is "<<Lowest<<endl; 
}