/* 
 * File:   main
 * Author: Yanwan Ye
 *
 * Created on October 4, 2016, 11:24 AM
 * Purpose: Compare the value of three numbers 
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int a,b,c;//Enter three numbers
    
    //Get three numbers
    cout<<"Enter three numbers\n";
    cin>>a>>b>>c;
    
    //Determine which number is maximum and which number is smaller and which 
    //one is minimum
    
    
    if(a>b&&b>c)
        cout<<a<<" is lager than "<<b<<" lager than "<<c<<endl;
    
    else if (a>c&&c>>b)
        cout<<a<<" is lager than "<<c<<" lager than "<<b<<endl;
    
    else if (b>a&&a>>c)
        cout<<b<<" is lager than "<<a<<" lager than "<<c<<endl;
    
    else if (b>c&&c>a)
        cout<<b<<" is lager than "<<c<<" lager than "<<a<<endl;
    
    else if (c>a&&a>b)
        cout<<c<<" is lager than "<<a<<" lager than "<<b<<endl;
    
    else if (c>b&&b>a)
        cout<<c<<" is lager than "<<b<<" lager than "<<a<<endl;
    
    return 0;
}

