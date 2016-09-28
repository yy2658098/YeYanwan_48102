/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on September 26, 2016, 8:20 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare the Variables 
    const int cookie = 48;//Number of cookies
    const float cupsugar = 1.5;//Cups of suguar among 48 cookies 
    const float cupbutter = 1.0;//Cups of butter among 48 cookies
    const float cupflour = 2.75;//Cups of flour among 48 cookies
    int cookies;//Numbers of cookies you need to make
    float sugarcup,buttercup, flourcup;//Cups of sugar, butter and flour need
    
    //Input
    cout << "How many cookies you want to make ";
    cin >> cookies;
    
    //Cllculations
    sugarcup = cookies * cupsugar / cookie;
    buttercup = cookies * cupbutter / cookie;
    flourcup = cookies * cupflour / cookie;
    
    //Output the cups of sugar
    cout << setprecision(2) <<fixed << showpoint << sugarcup <<" cups of sugar" 
            <<endl;
    //Output the cups of butter
    cout << setprecision(2) <<fixed << showpoint << buttercup <<" cups of butter" 
            <<endl;
    //Output the cups of flour
    cout << setprecision(2) <<fixed << showpoint << flourcup <<" cups of flour" 
            <<endl;
    
    return 0;
}

