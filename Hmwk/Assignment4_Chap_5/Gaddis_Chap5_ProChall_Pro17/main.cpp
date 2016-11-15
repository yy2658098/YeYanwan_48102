/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on October 15, 2016, 12:38 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    float sale1,sale2,sale3,sale4,sale5;//Each store's sales
    
    //First store's sales
    cout<<"Enter today's sales for store 1 : ";
    cin>>sale1;
    
    //Second store's sales
    cout<<"Enter today's sales for store 2 : ";
    cin>>sale2;
    
    //Third store's sales
    cout<<"Enter today's sales for store 3 : ";
    cin>>sale3;
    
    //Fourth store's sales
    cout<<"Enter today's sales for store 4 : ";
    cin>>sale4;
    
    //Fiveth store's sales
    cout<<"Enter today's sales for store 5 : ";
    cin>>sale5;
    
    cout<<"\nSALES BAR CHART\n";
    cout<<"(Each * = $100)"<<endl;
    
    //Display the output
    cout<<"Store 1: ";
    for (int count=1; count <= sale1/100; count++)
        cout<<'*';
    cout<<endl;
    
    cout<<"Store 2: ";
    for (int count=1; count <= sale2/100; count++)
        cout<<'*';
    cout<<endl;
    
    cout<<"Store 3: ";
    for (int count=1; count <= sale3/100; count++)
        cout<<'*';
    cout<<endl;
    
    cout<<"Store 4: ";
    for (int count=1; count <= sale4/100; count++)
        cout<<'*';
    cout<<endl;
    
    cout<<"Store 5: ";
    for (int count=1; count <= sale5/100; count++)
        cout<<'*';
    cout<<endl;
    
	return 0;
}