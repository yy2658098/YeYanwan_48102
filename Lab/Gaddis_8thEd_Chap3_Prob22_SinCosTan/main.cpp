/* 
 * File:   main
 * Author: Yanwan Ye
 *
 * Created on September 20, 2016, 12:15 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const float PI=4*atan(1.0);
const float CNVDEGR=PI/180;


/*
 * 
 */
int main(int argc, char** argv) {
    float deg,radians;
    
    deg=0;
    radians=deg*CNVDEGR;
    
    cout<<"[ Degrees, Radians,     Sine,   Cosine,   Tanget]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians<<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    
    deg+=5;
    radians=deg*CNVDEGR;
    
    cout<<"[ Degrees, Radians,        Sine,    Cosine,    Tanget]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians<<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    deg+=5;
    radians=deg*CNVDEGR;
    
    cout<<"[ Degrees, Radians,        Sine,    Cosine,    Tanget]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians<<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    deg+=5;
    radians=deg*CNVDEGR;
    
    cout<<"[ Degrees, Radians,        Sine,    Cosine,    Tanget]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians<<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    deg+=5;
    radians=deg*CNVDEGR;
    
    cout<<"[ Degrees, Radians,        Sine,    Cosine,    Tanget]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians<<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    
    deg+=5;
    radians=deg*CNVDEGR;
    
    cout<<"[ Degrees, Radians,        Sine,    Cosine,    Tanget]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians<<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    
    
    
    
    return 0;
}

