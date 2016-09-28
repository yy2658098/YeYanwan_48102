/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on September 26, 2016, 8:45 PM
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare the Varaiables
    string MovName;//Give a movie name
    int adultpri = 10;//Price of an adult
    int childpri = 6;//Price of a child
    const float groprecent = 0.2;//20 Percent of the gross
    int Aduticsold,Childticsold;//Total sold in adult and children 
    float Gross,Net,AmouPai;//Get the gross, net and amout paid 
    int adult,child;//Tickets sold
    
    //Input Movie Name
    cout << "Movie Name : ";
    getline (cin , MovName);
    
    //Input the number of tickets sold in adult 
    cout << "Adult Tickets Sold : ";
    cin >> adult;
    
    //Input the number of tickets sold in children
    cout << "Child Tickets sold : ";
    cin >> child;
    
    //Calculations
    Aduticsold = adult * adultpri;
    Childticsold = child * childpri;
    Gross = Aduticsold + Childticsold;
    Net = Gross * groprecent;
    AmouPai = Gross- Net;
    
    //Output
    cout << "======================================================"<< endl;
    cout << "Movie Name:                             "<< MovName << endl;
    cout << "Adult Tickets Sold :                         "<< adult <<endl;
    cout << "Child Tickets sold :                         " <<child << endl;
    
    cout << "Gross Box Office Profit :                 " <<setprecision(2) << fixed
            << showpoint << "$"<<Gross << endl;
    cout << "Net Box Office Profit :                   " <<setprecision(2) << fixed
            << showpoint << "$"<<Net << endl;
    cout << "Amount Paid to Distributor :              " <<setprecision(2) << fixed
            << showpoint << "$"<<AmouPai << endl;
    
    
    return 0;
}

