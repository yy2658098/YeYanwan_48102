/* 
 * File:   main
 * Author: Yanwan Ye
 *
 * Created on October 4, 2016, 11:24 AM
 * Purpose: Compare the value of two numbers 
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int a,b;
    
    //Get first number
    cout<<"Enter first number\n";
    cin>>a;
    
    //Get second number
    cout<<"Enter second number\n";
    cin>>b;
    
    //Determine the lager or smaller value
    if (a>b)
        cout<<a<<" is lager than "<<b<<endl;
    else 
        cout<<a<<" is smaller than "<<b<<endl;
    
    return 0;
}

