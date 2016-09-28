/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 27, 2016, 12:01 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Declaration of Variables
    bool x,y;
    
    //Output the Heading of the truth table
    cout << "X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y\n";
    
    //Input values for first row of the truth table
    x= true;
    y= true;
    
    //Display the first row of the truth table
    cout << (x?'T':'F')<<" ";
    cout << (y?'T':'F')<<" ";
    cout << (!x?'T':'F')<<" ";
    cout << (!y?'T':'F')<<" ";
    cout << (x&&y?'T':'F')<<" ";
    cout << (x||y?'T':'F')<<" ";
    cout << (x^y?'T':'F')<<" ";   
    cout << (x^y^y?'T':'F')<<" ";    
    cout << (x^y^x?'T':'F')<<" ";
    cout << (!(x&&y)?'T':'F')<<" ";
    cout << ((!x||!y)?'T':'F')<<" ";
    cout << (!(x||y)?'T':'F')<<" ";
    cout << (!x&&!y?'T':'F')<<" ";        
    cout <<endl;
    
    //Input values for second row of the truth table
    y=false;
    
    //Display the second row of the truth table
    cout << (x?'T':'F')<<" ";
    cout << (y?'T':'F')<<" ";
    cout << (!x?'T':'F')<<" ";
    cout << (!y?'T':'F')<<" ";
    cout << (x&&y?'T':'F')<<" ";
    cout << (x||y?'T':'F')<<" ";
    cout << (x^y?'T':'F')<<" ";   
    cout << (x^y^y?'T':'F')<<" ";    
    cout << (x^y^x?'T':'F')<<" ";
    cout << (!(x&&y)?'T':'F')<<" ";
    cout << ((!x||!y)?'T':'F')<<" ";
    cout << (!(x||y)?'T':'F')<<" ";
    cout << (!x&&!y?'T':'F')<<" ";           
    cout <<endl;
    
    //Exit Program
    return 0;
}

