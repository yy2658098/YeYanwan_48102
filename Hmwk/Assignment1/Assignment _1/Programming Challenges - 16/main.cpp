/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on September 18, 2016, 9:17 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char a=' ';
    char b;
    
    cout <<"What charactor would you like to make a diamond?"<<endl;
    cin >>b;
    
    cout <<a<<a<<a<<b<<a<<a<<a<<endl;
    cout <<a<<a<<b<<b<<b<<a<<a<<endl;
    cout <<a<<b<<b<<b<<b<<b<<a<<endl;
    cout <<b<<b<<b<<b<<b<<b<<b<<endl;
    cout <<a<<b<<b<<b<<b<<b<<a<<endl;
    cout <<a<<a<<b<<b<<b<<a<<a<<endl;
    cout <<a<<a<<a<<b<<a<<a<<a<<endl;
    
    return 0;
}

