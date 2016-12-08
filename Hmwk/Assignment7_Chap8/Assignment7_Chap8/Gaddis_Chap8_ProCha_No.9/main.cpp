/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on December 6, 2016, 1:07 AM
 */

#include <iostream>

using namespace std;

const int SIZE=20;

int bubbleSort(long [], int);
int selectSort(long [], int);
/*
 * 
 */
int main(int argc, char** argv) {
    
    int exchanges;
    
    long account1[SIZE]={5658845,  4520125,  7895122, 8777541,  8451277,  1302850,
                      8080152,  4562555,  5552012, 5050552,  7825877,  1250255,
                      1005231,  6545231,  3852085, 7576651,  7881200,  4581002};

    long account2[SIZE]={5658845,  4520125,  7895122, 8777541,  8451277,  1302850,
                      8080152,  4562555,  5552012, 5050552,  7825877,  1250255,
                      1005231,  6545231,  3852085, 7576651,  7881200,  4581002};

    exchanges = bubbleSort(account1, SIZE);
    cout << "\n" << exchanges << " exchanges were made by Bubble Sort."<< endl;

    exchanges = selectSort(account2, SIZE);
    cout << "\n" << exchanges <<  " exchanges were made by Selection Sort." << endl;

    
    return 0;
}

int bubbleSort(long values[], int size)
{
    bool swap;
    long temp; 
    int exchanges=0;
    
    do
    {
        swap=false;
        
        for(int count=0; count<size; count++)
        {
            if(values[count]>values[count+1])
            {
                temp=values[count];
                values[count]=values[count+1];
                values[count+1]=temp;
                swap=true;
                exchanges++;
            }
        }
    }while(swap);
    return exchanges;
}

int selectSort(long values[], int size)
{
    int startScan;
    int minIndex;
    int exchanges=0;
    long minValue;
    
    for(startScan=0; startScan<(size-1); startScan++)
    {
        minIndex=startScan;
        minValue=values[startScan];
        
        for(int index=startScan+1; index<size; index++)
        {
            if(values[index] < minValue)
            {
                minValue=values[index];
                minIndex=index;
            }
        }
        values[minIndex]  = values[startScan];
        values[startScan] = minValue;
        exchanges++;
    }
    return exchanges;
}




