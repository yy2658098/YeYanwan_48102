/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on December 5, 2016, 9:49 PM
 */

#include <iostream>

using namespace std;

const int SIZE=12;

void selectionSort(float [], int);
void showArray(float [], int);
/*
 * 
 */
int main(int argc, char** argv) {

    float rainFall[SIZE];
    
    for(int count=0; count<SIZE; count++)
    {
        cout<<"Please enter the monthly raifall for month "<<(count+1)<<" : ";
        cin>>rainFall[count];
    
    }
    
    selectionSort(rainFall, SIZE);
    showArray(rainFall, SIZE);
    
    
    return 0;
}

void selectionSort(float value[], int size)
{
    int startScan, minIndex;
    float minValue;
    
    for(startScan=0; startScan<(size-1); startScan++)
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

void showArray(float array[], int size)
{
    for(int index=0; index<size; index++)
        cout<<array[index]<<"  "<<endl;
}