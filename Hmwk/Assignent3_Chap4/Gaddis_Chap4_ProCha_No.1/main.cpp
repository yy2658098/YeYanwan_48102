/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on October 1, 2016, 7:39 PM
 * Purpose: Compare two numbers
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Enter two numbers
    int Number1, Number2;
    cout <<"Enter two numbers\n";
    cin>>Number1 >>Number2;
    
    if (Number1>Number2)
      cout<<Number1 << " is lager than " <<Number2<<endl;
    else
      cout<< Number1 << " is smaller than "<< Number2<<endl;
    
    
    return 0;
}

