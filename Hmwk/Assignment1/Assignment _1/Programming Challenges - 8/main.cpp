/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on September 18, 2016, 9:24 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const float taxpre=0.07;
    float pri1=15.95;
    float pri2=24.95;
    float pri3=6.95;
    float pri4=12.95;
    float pri5=3.95;
    
    float subsales,taxamount,total;
    
    subsales = pri1+pri2+pri3+pri4+pri5;
    taxamount = subsales*taxpre;
    total = taxamount+subsales;
            
    cout<<"The subtotal of the sale is "<<subsales<<endl;
    cout<<"The amount of sales tax is "<<taxamount<<endl;
    cout<<"The total is "<<total<<endl;
    
    return 0;
}

