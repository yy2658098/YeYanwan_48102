/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on October 2, 2016, 4:15 PM
 * Purpose: This prigram is used to determine whether two colodrs can be mixed
 *          to another secodary or not.
 */

#include <iostream>
#include<string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const string pricol1="red";//The first primary color
    const string pricol2="blue";//The second primary color
    const string pricol3="yellow";//The third primary color
    string color1,color2;//Enter the color
    
    //Input the colors
    cout<<"Red, blue and yellow are known as the primary colors.\n";
    cout<<"Enter two primary colors\n";
    cin>>color1>>color2;
    
    //Determine the colors
    if (color1==pricol1&&color2==pricol2)
        cout<<"Red mixs blue can be purple.\n";
    else if (color1==pricol1&&color2==pricol3)
        cout<<"Red mixs yellow can be orange.\n"; 
    else if (color1==pricol2&&color2==pricol3)
        cout<<"Blue mixs yellow can be green.\n"; 
    else
        cout<<"You enter error color.\n";
    
    return 0;
}

