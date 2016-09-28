/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on September 26, 2016, 10:14 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Declare the Variables
    float radian;//Enter an angle with radian
    
    //Input
    cout << "Enter an angle with radians ";
    cin >> radian;
    
    //Output
    cout <<fixed << showpoint << setprecision(4);
    cout << "Sine = " << sin(radian) << endl;
    cout << "Cosine = " << cos(radian) <<endl;
    cout << "Tangent = " << tan(radian) <<endl;
    
    
    return 0;
}

