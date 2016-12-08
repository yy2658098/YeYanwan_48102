/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on December 5, 2016, 12:47 PM
 */

#include <iostream>

using namespace std;

bool searchList(long[], int, long);

const int SIZE=10;
/*
 * 
 */
int main(int argc, char** argv) {

    long winNum[SIZE]={13579,  26791,  26792,  33445,  55555,  62483,  
                        77777,  79422,  85647,  93121 };
    
    long number;
    
    cout<<"Please enter a 5-digit win number: ";
    cin>>number;
    
    if(searchList(winNum, SIZE, number))
        cout<<"You have a win ticket.\n";
    else
        cout<<"You didn't win.\n";
        
    return 0;
}

bool searchList(long List[], int size, long value)
{
    bool found=false;
    
    for(int index=0; index<size; index++)
    {
        if(List[index]==value)
            found=true;
    }
    
    return found;
}