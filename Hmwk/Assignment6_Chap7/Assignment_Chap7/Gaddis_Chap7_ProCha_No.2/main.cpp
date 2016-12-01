#include <iostream>

using namespace std;
void total(float [], int);
void average();

float sum=0.0;
/*
 * 
 */

int main(int argc, char** argv) {

    const int months=12;//12 elements
    float rainfall[months];//Array of each month rainfall
    int element;
    
    //Get 12 months rainfall
    for(int count=0; count<months; count++)
    {
        cout<<"Enter month "<<(count+1)<<" rainfall: ";
        cin>>rainfall[count];
        
        //Valid the rainfall
        while(rainfall[count]<0)
        {
            cout<<"Re-enter month "<<(count+1)<<" rainfall: ";
            cin>>rainfall[count];
        } 
    }
    
    
    //Get the highest
    float highest=rainfall[0];
    
    for(int count=1; count<months; count++)
    {
        if(rainfall[count]>highest)
        {
            highest=rainfall[count];
            element=count+1;
        }
    }
    cout<<"\nThe highest rainfall "<<highest<<" is on Month "<<element<<endl;
    
    //Get the lowest
    float lowest=rainfall[0];
    
    for(int count=1; count<months; count++)
    {
        if(rainfall[count]<lowest)
        {
            lowest=rainfall[count];
            element=count+1;
        }
    }
    cout<<"\nThe lowest rainfall "<<lowest<<" is on Month "<<element<<endl;
    
    total(rainfall,months);    
    average();
    
    
    return 0;
}

// ********************************************************
// The total function calculates the                      *
// total of the values stored in the array parameter.     *
// ********************************************************
void total(float rainfall[], int months)
{
    
    for(int count=0; count<months; count++)
        sum += rainfall[count];

    cout<<"The total rainfall is: "<<sum<<endl;

}

// ********************************************************
// The average function calculates the                    *
// average of the values stored in the array parameter.   *
// ********************************************************
void average()
{
    float averageVal;
    
    averageVal = sum/12.0;

    cout<<"The average rainfall is: "<<averageVal<<endl;

}