/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on November 2, 2016, 11:02 PM
 * Purpose: Display the rectangle of length, width and area.
 */

#include <iostream>
#include <iomanip>

using namespace std;
//Prototype
float getLength();
float getWidth();
float getArea(float, float);
void displayData(float, float, float);
/*
 * 
 */
int main(int argc, char** argv) {

    float length;//Length of a rectangle
    float width;//Width of a rectangle
    float area;//Area of a rectangle
    
    length = getLength();//Get the length
    
    width = getWidth();//Get the width
    
    area = getArea(length, width);//Get the area
    
    displayData(length, width, area);//Display output
    
    return 0;
}
//***************************************************************
//Definition of function getLength.                             *
//This function use a float lenth and return the that value     *
//***************************************************************
float getLength()
{
    float length;
    cout<<"Please enter a length of a rectangle: ";
    cin>>length;
    return length;
}

//***************************************************************
//Definition of function getWidth.                             *
//This function use a float width and return the that value     *
//***************************************************************
float getWidth()
{
    float width;
    cout<<"Please enter a width of a rectangle: ";
    cin>>width;
    return width;
}

//***************************************************************
//Definition of function getArea.                               *
//This function use a float lenth , a float width and return    *
//the that value                                                *
//***************************************************************
float getArea(float length, float width)
{
    return length*width;
}

//***************************************************************
//Definition of function displayDate.                           *
//This function use a float lenth, a float width, a float area  *
//and return the that value                                     *
//***************************************************************
void displayData(float length, float width, float area)
{
    cout<<"Rectangle Data\n";
    cout<<"---------------\n";
    cout<<"Length"<<setw(7)<<length<<endl;
    cout<<"Width"<<setw(7)<<width<<endl;
    cout<<"Area"<<setw(9)<<area<<endl;
}