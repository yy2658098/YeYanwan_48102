/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on October 1, 2016, 9:57 PM
 * Purpose: This program will claculate a person's body mass index and determine
 *           whether a person with a sedentary lifestyle.
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float weight,height,BMI;
    
    //Get a weight
    cout<<"Enter your weight in pounds\n";
    cin>>weight;
    
    //Get a height
    cout<<"Enter your height in inches\n";
    cin>>height;
    
    //Calculation
    BMI=weight*703/(height*height);
    
    //Give the result of BMI
    cout<<"Your BMI is "<<BMI<<endl;
    
    //Determine a person whether optimal or underweight or overweight
    if (BMI>=18.5&&BMI<=25)
        cout<<"This person has an optimal lifestyle.\n";
    else if (BMI<18.5)
        cout<<"This person is underweight.\n";
    else
        cout<<"This person is overweight.\n";
    
    return 0;
}

