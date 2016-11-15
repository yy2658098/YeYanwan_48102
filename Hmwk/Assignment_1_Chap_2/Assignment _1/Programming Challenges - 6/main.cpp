/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on September 18, 2016, 6:57 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    float payamount = 2200.0;
    int payper =26;
    
    float annuPay;
    
    annuPay = payamount * payper;
    
    cout << " The total annual pay on the screen is $ " << annuPay <<endl;
    
    return 0;
}

