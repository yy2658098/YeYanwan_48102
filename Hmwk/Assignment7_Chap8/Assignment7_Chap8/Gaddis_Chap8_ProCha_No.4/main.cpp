/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on December 5, 2016, 9:03 PM
 */

#include <iostream>

using namespace std;

const int SIZE=18;

void sortArray(long [], int);
bool binarySearch(long [], int, long);

/*
 * 
 */
int main(int argc, char** argv) {

    long accNum[SIZE]={5658845,  4520125,  7895122,8777541,  8451277,  1302850,
                        8080152,  4562555,  5552012,5050552,  7825877,  1250255,
                        1005231,  6545231,  3852085,7576651,  7881200,  4581002 };
    long number;
    
    cout<<"Please enter the account number: ";
    cin>>number;
    
    sortArray(accNum, SIZE);
    
    if (binarySearch(accNum, SIZE, number))   
        cout << "The number you entered is valid.\n";
    else
        cout << "The number you entered is invalid." << endl;
    
    return 0;
}

void sortArray(long array[], int size)
{
    int temp;
    bool swap;
    
    do
    {
        swap=false;
        
        for(int count=0; count<(size-1); count++)
        {
            if(array[count]>array[count+1])
            {
                temp=array[count];
                array[count]=array[count+1];
                array[count+1]=temp;
                swap=true;
            }
        }
    }while(swap);
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
        {
            found=true;
        }
        else if(array[middle]>value)
        {
            last=middle-1;
        }
        else
        {
            first=middle+1;
        }
    }
    return found;
}