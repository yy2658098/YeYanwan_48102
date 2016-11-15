/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on October 2, 2016, 6:37 PM
 * Purpose: This program will calculate a software company  sell how much packages
 *          and the total amount.
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const int retail=99;//The retail price for per package
    const float discount1=0.2;//The discount for qutity between 10 and 19
    const float discount2=0.3;//The discount for qutity between 20 and 49
    const float discount3=0.4;//The discount for qutity between 50 and 99
    const float discount4=0.5;//The discount for qutity equal or more than 100
    float total1,total2,total3,total4;
    int packages;//The qutity of packages
    
    //Input the qutity
    cout<<"Enter the units of packages\n";
    cin>>packages;
    
    //Calculate the total cost
    total1=retail*(1-discount1)*packages;
    total2=retail*(1-discount2)*packages;
    total3=retail*(1-discount3)*packages;
    total4=retail*(1-discount4)*packages;
    
    //Calculate the total cost of packages
    if (packages>=10&&packages<=19)
        cout<<"The total cost is "<<total1<<endl;
        
    else if (packages>=20&&packages<=49)
        cout<<"The total cost is "<<total2<<endl;
        
    else if (packages>=50&&packages<=99)
        cout<<"The total cost is "<<total3<<endl;
        
    else if (packages>=100)
        cout<<"The total cost is "<<total4<<endl;
        
    else
        cout<<"You enter a wrong units, please run the program again.\n";
    
    return 0;
}

