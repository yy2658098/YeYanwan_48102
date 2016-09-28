/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on September 26, 2016, 9:48 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare the Variables
    int bagcookies = 30;//A bag of cookies
    int bagserv = 10;//A bag of servings
    int bagcalo = 300;//A serving of calories
    int eatcookies;//Cookies want to eat
    float serv,calo;//Servings and Calories in the eatcookies
    
    //Input
    cout << "How many cookies you eat ?";
    cin >> eatcookies;
    
    //Calculations
    serv = eatcookies * bagserv / bagcookies;
    calo = serv * bagcalo;
    
    //Output
    cout << "Total calories were " << calo <<endl; 
    
    return 0;
}

