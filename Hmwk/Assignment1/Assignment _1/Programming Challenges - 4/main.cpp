/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on September 18, 2016, 9:52 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float mealchar = 88.67f;
    float tax = 0.0675f;
    float tip = 0.2f;
    
    float taxamount, tipamount, billtotl;
    
   
    taxamount = mealchar * tax;
    tipamount = (taxamount + mealchar) * tip;
    billtotl = mealchar + taxamount + tipamount;
    
    cout << "The meal cost is $ " << mealchar << endl;
    cout << "Tax amount is $ " << taxamount << endl;
    cout << "Tip amount is $ " << tipamount << endl;
    cout << "Total bill is $ " << billtotl << endl;
    return 0;
}

