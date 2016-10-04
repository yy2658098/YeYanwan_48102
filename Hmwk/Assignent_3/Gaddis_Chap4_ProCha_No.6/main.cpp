/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on October 1, 2016, 10:42 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float weight,mass;
    
    //Get a weight
    cout<<"Enter the mass in kilograms\n";
    cin>>mass;
    
    //Calculation
    weight=mass*9.8;
    cout<<"The weight is "<<weight<<" newtons.\n";
    
    //Determine your weight 
    if (weight>1000)
        cout<<"The object is too heavy.\n";
    else
        cout<<"The object is too light.\n";
    
    
    return 0;
}

