/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on November 7, 2016, 11:42 PM
 * Purpose: This program used to calculate the kinetic energy.
 */

#include <iostream>
#include <iomanip>

using namespace std;

float kineticEnergy(float, float);

/*
 * 
 */
int main(int argc, char** argv) {

    float mass;//mass
    float vel;//velocity
    
    //Get the mass
    cout<<"Please enter the mass: ";
    cin>>mass;
    
    //Get the velocity
    cout<<"Please enter the velocity: ";
    cin>>vel;
    
    //Display the output
    cout<<"Mass\tVelocity\tKE\n";
    cout<<"===========================\n";
    
    //Set the numeric output
    cout<<setprecision(2)<<fixed<<showpoint;
    
    cout<<setw(3)<<right<<mass
            <<setw(10)<<right<<vel
            <<setw(13)<<right<<kineticEnergy(mass, vel)<<endl;
    
    return 0;
}

//***************************************************************************
//Definition of function kineticEnergy.The function get kinetic energy      *
//when the object in diferent mass and velocity.This function return to KE  *
//***************************************************************************

float kineticEnergy(float mass, float vel)
{
    float KE;//The kinetic energy
    KE=0.5*mass*vel;
    return KE;
}