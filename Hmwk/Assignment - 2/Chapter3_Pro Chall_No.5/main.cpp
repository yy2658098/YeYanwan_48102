/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on September 26, 2016, 7:47 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

const int PERCENT=100;//Precent number

int main(int argc, char** argv) {

    int MalesNum,FenNum,totlNum;//Numbers of Males and Females
    float MalesPer,FenPer;//Precents of Males and Females
    
    //Get the number of males 
    cout << "Enter the number of males ";
    cin >> MalesNum;
    
    //Get the number of females
    cout << "Enter the number of females ";
    cin >> FenNum;
    
    //Calculate
    totlNum = MalesNum + FenNum;
    MalesPer = static_cast<float>(MalesNum) / totlNum * PERCENT;
    FenPer = static_cast<float>(FenNum) / totlNum * PERCENT;
    
    //Display the percentage
    cout << "The percentage of males is " << setprecision(2) << fixed 
            << showpoint << MalesPer << "%" <<endl;
    cout << "The percentage of females is " << setprecision(2) << fixed 
            << showpoint << FenPer << "%" <<endl;
    
    
    return 0;
}

