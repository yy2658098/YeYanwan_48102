/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on November 22, 2016, 7:36 PM
 */

#include <iostream>
#include <fstream>

using namespace std;
void readNumbers(ifstream &, int [], int);
int getHighest(int [], int);
int getLowest(int [], int);
int getTotal (int [], int);
float getAverage (int [], int);

const int size=12;
/*
 * 
 */
int main(int argc, char** argv) {

    //File stream object
    ifstream inFile;
    
    //Array to hold the numbers
    int numbers[size];
    
    //Open the file
    inFile.open("numbers.txt");
    
    //Test the errors
    if(!inFile)
    {
        cout<<"Error open the file\n";
        return 0;
    }
    
    //Read the number into the array
    readNumbers(inFile,numbers,size);
    
    //Display the data
    cout<<"The highest number is "<<getHighest(numbers,size)<<endl;
    cout<<"The lowest number is "<<getLowest(numbers,size)<<endl;
    cout<<"The total is "<<getTotal(numbers,size)<<endl;
    cout<<"The average is "<<getAverage(numbers,size)<<endl;
    
    
    return 0;
}

void readNumbers(ifstream &inFile, int numbers[], int size)
{
    for (int i=0; i<size; i++)
        inFile >> numbers[i];
}

int getHighest (int value[], int size)
{
    int highest=value[0];
    
    for(int i=1; i<size; i++)
    {
        if(value[i]>highest)
            highest=value[i];
    }
    return highest;
}

int getLowest (int value[], int size)
{
    int lowest=value[0];
    
    for(int i=1; i<size; i++)
    {
        if(value[i]<lowest)
            lowest=value[i];
    }
    return lowest;
}

int getTotal (int value[], int size)
{
    int sum=0;
    
    for(int i=1; i<size; i++)
    {
        sum += value[i];
    }
    return sum;
}

float getAverage (int value[], int siz)
{
    return getTotal(value,size)/static_cast<float>(size);
}
