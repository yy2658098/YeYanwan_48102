/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on December 5, 2016, 11:24 PM
 */

#include <iostream>
#include <string>

using namespace std;

const int SIZE=20;

void selectionSort(string [], int);
void displayArray(string [], int);
/*
 * 
 */
int main(int argc, char** argv) {

    string names[SIZE]={ "Collins, Bill", "Smith, Bart", "Allen, Jim",
                        "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                        "Taylor, Terri", "Johnson, Jill",
                        "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                        "James, Jean", "Weaver, Jim", "Pore, Bob",
                        "Rutherford, Greg", "Javens, Renee",
                        "Harrison, Rose", "Setzer, Cathy",
                        "Pike, Gordon", "Holland, Beth"};
    
    displayArray(names, SIZE);
    selectionSort(names, SIZE);
    
    cout<<"\nHere are the name sorted:\n";
    cout<<"--------------------------\n";
    displayArray(names, SIZE);
    
    
    return 0;
}

void selectionSort(string value[], int size)
{
    int startScan;
    int minIndex;
    string minValue;
    
    for(startScan=0; startScan<(size-1);startScan++)
    {
        minIndex=startScan;
        minValue=value[startScan];
        
        for(int index=startScan+1; index<size; index++)
        {
            if(value[index]<minValue)
            {
                minValue=value[index];
                minIndex=index;
            }
        }
        value[minIndex]=value[startScan];
        value[startScan]=minValue;
    }
}

void displayArray(string value[], int size)
{
    for(int i=0; i<size; i++)
        cout<<value[i]<<endl;
}