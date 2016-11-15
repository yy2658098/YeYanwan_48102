/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on November 2, 2016, 10:19 PM
 * Purpose: Calculate the retail cost
 */

#include <iostream>
#include <iomanip>

using namespace std;

//Prototype
float calculateRetail(float, float);
/*
 * 
 */
int main(int argc, char** argv) {

    float cost,//the wholesale cost
           per;//it makeup precentage
    
    //Get the wholesale cost
    cout<<"Please enter the wholesale cost: ";
    cin>>cost;
    
    //Make the wholesale cost valide
    while (cost<0)
    {
        cout<<"Please re-enter the wholesale cost: ";
        cin>>cost;
    }
    
    //Get the makeup precentage
    cout<<"Please enter it makeup precentage: ";
    cin>>per;
    
    //Make makeup precentage valide
    while (per<0)
    {
        cout<<"Please re-enter it makeup precentage: ";
        cin>>per;
    }
    
    //Display Output
    cout<<"The item's retail price is "<<calculateRetail(cost, per)<<endl;
    
    return 0;
}

//********************************************************************
//Definition of function accepts the wholesale cost and the makeup   *
//precentage, and returns the retail price of the item.              *
//********************************************************************

float calculateRetail(float cost, float per)
{
    return cost*(1+per);
}