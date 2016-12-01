/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on November 17, 2016, 5:57 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const int num=10;//10 elements
    int values[num];//Array of values
    int highest;//The highest value
    int lowest;//The lowest value
    int count;//For loop
    
    //Get the 10 elements
    for(count=0; count<num; count++)
    {
        cout<<"Enter values: ";
        cin>>values[count];
    }
  
    
    //Find the highest
    highest=values[0];
    
    for (count=1; count<num; count++)
    {
        if (values[count]>highest) 
            highest=values[count];
    }
    cout<<"\nThe highest is: "<<highest<<endl;
    
    //Find the lowest
    lowest=values[0];
    
    for (count=1; count<num; count++)
    {
        if (values[count]<lowest)
            lowest=values[count];
    }
    cout<<"The lowest is: "<<lowest<<endl;
    
    return 0;
}

