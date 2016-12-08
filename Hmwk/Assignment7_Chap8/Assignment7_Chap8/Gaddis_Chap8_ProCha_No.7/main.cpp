/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on December 5, 2016, 11:56 PM
 */

#include <iostream>
#include <string>

using namespace std;

const int SIZE= 20;

void selectionSort(string [], int);
void showArray(string [], int);
int binarySearch(string [], int, string);

/*
 * 
 */
int main(int argc, char** argv) {
    
    string names[SIZE]={"Collins, Bill", "Smith, Bart", "Allen, Jim",
                        "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                        "Taylor, Terri", "Johnson, Jill",
                        "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                        "James, Jean", "Weaver, Jim", "Pore, Bob",
                        "Rutherford, Greg", "Javens, Renee",
                        "Harrison, Rose", "Setzer, Cathy",
                        "Pike, Gordon", "Holland, Beth" } ;
    string search;
    selectionSort(names, SIZE);
    
    cout<<"Here are the names sorted:\n";
    cout<<"---------------------------\n";
    showArray(names, SIZE);
    
    cout<<"\nPlease enter a name to search for: ";
    getline(cin, search);
    
    int results=binarySearch(names, SIZE, search);
    
    if(results==-1)
        cout<<"That name does not exist in the array.\n";
    else
    {
        cout<<"That name is foun at element " <<results<<" in the array.\n";
    }
    
    return 0;
}

void selectionSort(string values[], int size)
{
    int startScan;
    int minIndex;
    string minValue;
    
    for(startScan=0; startScan<(size-1); startScan++)
    {
        minIndex=startScan;
        minValue=values[startScan];
        
        for(int index=startScan+1; index<size; index++)
        {
            if(values[index]<minValue)
            {
                minValue=values[index];
                minIndex=index;
            }
        }
        values[minIndex]=values[startScan];
        values[startScan]=minValue;
    }
}

void showArray(string array[], int size)
{
    for(int i=0; i<size; i++)
        cout<<array[i]<<"  "<<endl;
}

int binarySearch(string values[], int size, string value)
{
    bool found=false;
    
    int first=0;
    int middle;
    int last=size-1;
    int position=-1;
    
    while(!found && first<=last)
    {
        middle=(first+last)/2;
        
        if(values[middle]==value)
        {
            position=middle;
            found=true;
        }
        else if(values[middle]>value)
            last=middle-1;
        else
            first=middle+1;
    }
    return position;
}