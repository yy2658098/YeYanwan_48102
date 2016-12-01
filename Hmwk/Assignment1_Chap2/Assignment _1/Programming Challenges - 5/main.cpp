/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on September 18, 2016, 9:54 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float num1 = 28;
    float num2 = 32;
    float num3 = 37;
    float num4 = 24;
    float num5 = 33;
    float N=5;
    
    float sum, ave;
    
    sum = num1 + num2 +num3 + num4 + num5;
    ave = sum/N;
    
    cout << "Sum = " << sum << endl;
    cout << "Average = " << ave << endl;
    
    return 0;
}

