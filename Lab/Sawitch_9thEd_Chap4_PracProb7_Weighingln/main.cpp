/* 
 * File:   main
 * Author: Yanwan Ye
 *
 * Created on October 6, 2016, 11:53 AM
 * Purpose: Calculate your Weight
 */

#include <iostream>

using namespace std;

float GRAVITY=6.673e-8f;   //Universal Gravity Constant cm^3/g/sec^2
float CNKGGRM=1000;       //Conversion from KG to Grams
float CNSGGRM=14593.9;    //Conversion from Slugs to Grams
float CNKMMET=1000;       //Conversion from Km to Meters
float CNMETCM=100;        //Conversion from Meters to Centimeters
float CNDYNLB=2.24809e-6f;//Conversion from Dynes to Pounds
float CNSGLBS=32.174f;    //Conversion from slugs to lbs which oddly acceleration 
/*
 * 
 */
int main(int argc, char** argv) {

    //Declaration of Variables
    float msEarth=5.972e24;   //Google lookup ->Kilograms
    float msMark=6.0f;        //Mass of Mark -> Slug
    float rdEarth=6371.0f;    //Google radius of the earth
    float weight;             //Force of attraction from Physics
    
    //Conversion of inputs
    msEarth*=CNKGGRM;            //Convert mass of the earth to grams
    msMark*=CNSGGRM;             //Convert mass of mark to grams
    rdEarth*=CNKMMET*CNMETCM;    //Convert the radius of th earth to centimeters
    
    //Process values -> Map inputs to Outputs
    weight=GRAVITY*msMark*msEarth/rdEarth/rdEarth;//Weak force attraction due to Gravity
    weight*=CNDYNLB;                             //Convert dynes to pounds
    
    //Display output
    cout<<"According to the Weak Force of Gravity Mark WEIGHTS = "<<weight<<"lbs"<<endl;
    cout<<"As a check Mark weights = "<<6*CNSGLBS<<"lbs"<<endl;
    cout<<"The percentage error in the Radius of Earth = +-"<<100.0f*18/6371<<"%"<<endl;
    cout<<"The margin of error for the weight = "<<(weight-6*CNSGLBS)/weight*100.0f<<"%"<<endl;
    
    return 0;
}

