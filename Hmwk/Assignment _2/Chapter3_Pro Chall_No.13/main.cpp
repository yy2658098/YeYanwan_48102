/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on September 26, 2016, 10:46 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {

    //Declare the Variables
    const float YEN_PER_DOLLAR = 98.93;//A dollar equal the Yen
    const float EUROS_PER_DOLLAR = 0.74;//A dollarequal the Euros
    float dollars,Yen, Euros;//Enter the dollars want and exchange to Yen, Euros
    
    //Input the dollars
    cout << "Enter dollars :";
    cin >> dollars;
    
    //Calculations
    Yen = dollars * YEN_PER_DOLLAR ;
    Euros = dollars * EUROS_PER_DOLLAR ;
    
    //Output
    cout << "Yen :" << Yen <<endl;
    cout <<"Euros :" << Euros << endl;
            
    return 0;
}

