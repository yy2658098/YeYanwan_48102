/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on December 6, 2016, 12:32 AM
 */

#include <iostream>

using namespace std;

const int SIZE=20;
int linearSeachBench(int [], int, int);
int binarySearchBench(int [], int, int);
/*
 * 
 */
int main(int argc, char** argv) {

    int numbers[SIZE]={101, 142, 147, 189, 199, 207, 222,
                      234, 289, 296, 310, 319, 388, 394,
                      417, 429, 447, 521, 536, 600 };
    int value;
    int comparisons;
    
    cout<<"Which value you want to search: ";
    cin>>value;
    
    comparisons=linearSeachBench(numbers, SIZE, value);
    cout<<"The linear search made "<<comparisons<< " comparision.\n";
    
    comparisons=binarySearchBench(numbers, SIZE, value);
    cout<<"The binary search made "<<comparisons<< " comparision.\n";
    
    return 0;
}

int linearSeachBench(int values[], int size, int value)
{
    bool found=false;
    
    int comparisons=0;
    int index=0;
    
    while(!found && index<size)
    {
        comparisons++;
        
        if(values[index++]==value)
            found=true;
    }
    return comparisons;
}

int binarySearchBench(int values[], int size, int value)
{
    bool found=false;
    int first=0;
    int middle;
    int last=size-1;
    int comparisons=0;
    
    while(!found && first<=last)
    {
        middle=(first+last)/2;
        comparisons++;
        
        if(values[middle]==value)
            found=true;
        else if(values[middle]>value)
            last=middle-1;
        else
            first=middle+1;
    }
    return comparisons;
}














