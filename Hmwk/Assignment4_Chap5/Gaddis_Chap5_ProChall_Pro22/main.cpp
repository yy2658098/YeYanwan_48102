/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on October 15, 2016, 5:28 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int number;//Get a number
    
    //Get the number
    cout<<"Enter a number between 1 to 15.";
    cin>>number;
    cout<<endl;
    
    //Validate the number
    while (number<1 || number>15)
    {
        cout<<"Please enter a number between 1 to 15.";
        cin>>number;
    }
    

    //Display the output    
    for (int row=1; row<=number; row++)
    {
        for (int column=1; column<=number; column++)
        {
           cout<<"X"; 
        }
        cout<<endl;
    }
    
    
    return 0;
}

