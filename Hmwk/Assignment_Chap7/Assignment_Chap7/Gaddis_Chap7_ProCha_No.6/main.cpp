/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on November 21, 2016, 10:24 PM
 */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int months=3;//3 months
const int days=30;//Each month of 30 days
/*
 * 
 */
int main(int argc, char** argv) {
    
    int rainy;//Rainy days
    int cloudy;//Cloudy days
    int sunny;//Sunny days
    int rainyTotal=0;//Total number of rainy days
    int cloudyTotal=0;//Total number of cloudy days 
    int sunnyTotal=0;//Total number of sunny days
    int wettestMonth;//Index of rainiest month
    int wettestMonthsRain=-1;//Number of rainy days in rainest month
    
    //Each month's name
    string name[months]={"June","July","August"};
    
    //Array for 
    char weather[months][days];
    
    //Read data from a file
    ifstream weatherData;
    
    //Open the data file
    weatherData.open ("RainOrShine.txt");
    
    //Valid the data
    if (!weatherData){
        cout<<"Error open the data file.\n";
        return 0;
    }
    
    //Read weather data into the array
    for( int i=0; i<months; i++){
        for(int j=0; j<days; j++){
            weatherData >> weather[i][j];
        }
    }
    
    //Close te file
    weatherData.close();
    
    //Display the report
    cout<<"    Summer     Weather     Report\n\n";
    cout<<"Month       Rainy       Cloudy       Sunny\n";
    cout<<"------------------------------------\n";
    
    // Accumulate and display weather statistics
    for (int i=0; i<months; i++){
        
        // Reset accumulators
        rainy=cloudy=sunny=0;
        
        // Accumulate weather statistics for current month
        for(int j=0; j<days; j++){
            if (weather[i][j] =='R')
                rainy++;
            else if (weather[i][j] =='C')
                cloudy++;
            else
                sunny++;
        }
        
        // Add monthly totals
        rainyTotal += rainy;
        cloudyTotal += cloudy;
        sunnyTotal += sunny;
        
        // Determine if this month is the rainiest
        if (rainy>wettestMonthsRain){
            wettestMonthsRain=rainy;
            wettestMonth=i;
        }
        
        cout<<name[i]<<"        "<<rainy<<"       "<<cloudy<<"        "<<sunny<<endl;
        
    }
    
    cout<<"------------------------------------\n";
    cout<<"Totals       "<<rainyTotal<<"         "<<cloudyTotal<<"         "<<sunnyTotal<<endl;
    
    
    return 0;
}














