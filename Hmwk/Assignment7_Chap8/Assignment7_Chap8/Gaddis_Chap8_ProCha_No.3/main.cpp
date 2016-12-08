/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on December 5, 2016, 8:48 PM
 */

#include <iostream>

using namespace std;

const int SIZE=10;

bool binarySearch(long [], int, long);

/*
 * 
 */
int main(int argc, char** argv) {

    long winNum[SIZE]={13579,  26791,  26792,  33445,  55555,  62483,  
                                        77777,  79422,  85647,  93121};
    
    long number;
    
    cout<<"Please enter a 5-digit win number: ";
    cin>>number;
    
    if(binarySearch(winNum, SIZE, number))
        cout<<"You win.\n";
    else
        cout<<"You didn't win.\n";
    
    
    
    
    
    return 0;
}

bool binarySearch(long array[], int size, long value)
{
    int first=0;
    int last=size-1;
    int middle;
    bool found=false;
    
    while(!found && first<=last)
    {
        middle=(first+last)/2;
        
        if(array[middle]==value)
            found=true;
        else if (array[middle]>value)
            last=middle-1;
        else
            first=middle+1;
    }
    return found;
}
