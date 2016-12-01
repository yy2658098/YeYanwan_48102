/* 
 * File:   main
 * Author: Yanwan Ye
 *
 * Created on November 3, 2016, 11:36 AM
 * Purpose: Which division had the greatest sales for a quarter.
 */

#include <iostream>
#include <string>

using namespace std;
float getSales(string);
void findHighest(float, float, float,float);
/*
 * 
 */
int main(int argc, char** argv) {

    //Display the output
    findHighest(getSales("Northeast"),
                getSales("Southeast"),
                getSales("Northwest"),
                getSales("Southwest"));

    
    return 0;
}

//**************************************************************
//Definition of function getSale.The function get each sale    *
//of divisions and return the sale.                            *
//**************************************************************

float getSales(string division)
{
    float sale;//Sale of division
    
    cout<<"What is the sale of "<<division<<" division? ";
    cin>>sale;

    //Make the valid value
    while (sale <0)
    {
        cout<<"Please enter a valid sale of "<<division<<" division. ";
        cin>>sale;
    }
    
    return sale;
}

//**************************************************************
//Definition of function findHighest.The function              *
//determine the highest sale and display it.                   *
//**************************************************************

void findHighest(float Ne, float Se, float Nw, float Sw)
{
    float hightest;//The highest sale
    string division;//The name of division
    
    if (Ne>Se && Ne>Nw && Ne>Sw)
    {
        hightest=Ne;
        division="Northeast";
    }
    
    if (Se>Ne && Se>Nw && Se>Sw)
    {
        hightest=Se;
        division="Southeast";
    }
    
    if (Nw>Ne && Nw>Se && Nw>Sw)
    {
        hightest=Nw;
        division="Northwest";
    }
    
    if (Sw>Ne && Sw>Se && Sw>Nw)
    {
        hightest=Sw;
        division="Southwest";
    }
    
    //Display the output
    cout<<"\nThe highest sale division is: "<<division<<endl;
    cout<<"The sale is: "<<hightest<<endl;
}