/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on December 2, 2016, 8:49 PM
 */

#include <iostream>
using namespace std;

// Function prototype
bool searchList(long[], int, long);

// Constant for the array size
const int size=18;

int main()
{
    long accNum[size]={5658845,  4520125,  7895122,8777541,  8451277,  1302850,
                8080152,  4562555,  5552012,5050552,  7825877,  1250255,
                1005231,  6545231,  3852085,7576651,  7881200,  4581002};
    
    int number;
    
    //Get account number
    cout<<"Please enter account number: ";
    cin>>number;
    
    if(searchList(accNum, size, number))
        cout<<"The number you enter is valid"<<endl;
    else
        cout<<"The number you enter is invalid"<<endl;
    
}

bool searchList(long list[], int size, long value)
{
    int index=0;
    bool found=false;
    
    while(index<size && !found)
    {
        if(list[index]==value)
            found=true;
        index++;
    }
    return found;
}





