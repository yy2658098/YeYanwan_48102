/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on September 25, 2016, 9:50 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare the Variables
    float TestSco1,TestSco2,TestSco3,TestSco4,TestSco5,average;
    
    //Input the first test score
    cout <<"Enter the 1st test score ";
    cin >>TestSco1;
    
    //Input the second test score
    cout <<"Enter the 2nd test score ";
    cin >>TestSco2;
    
    //Input the third test score
    cout <<"Enter the 3th test score ";
    cin >>TestSco3;
    
    //Input the fouth test score
    cout <<"Enter the 4th test score ";
    cin >>TestSco4;
    
    //Input the fifth test score
    cout <<"Enter the 5th test score ";
    cin >>TestSco5;
    
    //Claculations
    average =  (TestSco1+TestSco2+TestSco3+TestSco4+TestSco5)/5;
    
    //Output the average test score
    cout <<"The average test score is ";
    cout << fixed << showpoint << setprecision(1) <<average << endl;
    
    return 0;
}

