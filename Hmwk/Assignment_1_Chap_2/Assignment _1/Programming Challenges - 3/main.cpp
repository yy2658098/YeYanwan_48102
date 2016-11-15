/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on September 18, 2016, 9:48 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float perstate = 0.04f,
    percounty = 0.02f,
    purchase = 95.0f;
    
    float perTotal, totalTax;
    
    perTotal = percounty + perstate;
    totalTax = purchase * perTotal;
    
    cout << "The total sales tax on a $95 purchase is " << totalTax <<endl;
    

    return 0;
}

