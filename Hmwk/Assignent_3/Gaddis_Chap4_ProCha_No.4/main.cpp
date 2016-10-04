/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on October 1, 2016, 9:37 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int length1,length2,width1,width2,are1,are2;
    
    //Get a length for first rectangle
    cout<<"Enter first length\n";
    cin>>length1;
    
    //Get a width for first rectangle
    cout<<"Enter first width\n";
    cin>>width1;
    
    //Get a length for second rectangle
    cout<<"Enter second length\n";
    cin>>length2;
    
    //Get a width for second rectangle
    cout<<"Enter second width\n";
    cin>>width2;
    
    //Calculation the area
    are1=length1*width1;
    are2=length2*width2;
    
    //Determine which ractangle is greater or same
    if (are1>are2)
        cout<<"The first rectangle is greater than second rectangle.\n";
    else if (are1<are2)
        cout<<"The first rectangle is smaller than second rectangle.\n";
    else if (are1==are2)
        cout<<"The area are the same.";
                
    return 0;
}

