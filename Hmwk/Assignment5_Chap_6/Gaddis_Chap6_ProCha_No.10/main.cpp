/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on November 9, 2016, 10:44 PM
 */

#include <iostream>
#include<cmath>
using namespace std;

float futureValue(float,float,int);

/*
 * 
 */
int main(int argc, char** argv) {

    float f;//The future value
    float p;//The present value
    float i;//Monthly interest rate
    int t;//Number of months
    
    //Get the present value
    cout<<"Please enter the present value of the account: ";
    cin>>p;
    
    //Get the monthly interest rate
    cout<<"Please enter the monthly interest rate: ";
    cin>>i;
    
    //Get the number of months
    cout<<"Please enter the number of months: ";
    cin>>t;
    
    f=futureValue(p,i,t);
    
    cout<<"The future value is $ "<<f<<endl;
            
    return 0;
}

//***************************************************************************
//Definition of function futureValue.The function will calculate the        *
//future value of an account and return it.                                 *
//***************************************************************************

float futureValue(float p, float i,int t)
{
    float f;
    f=p*pow((1+i),t);
    return f;
}