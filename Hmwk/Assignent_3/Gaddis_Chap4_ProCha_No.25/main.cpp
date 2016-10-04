/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on October 2, 2016, 5:45 PM
 * Purpose: This program is used to help a person who buy a mobil phone 
 *          service with different packages.
 */

#include <iostream>
#include<iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const float PacACha=39.99;//Package A is 39.99 per month 
    const float PacBCha=59.99;//Package B is 59.99 per month
    const float PacCCha=69.99;//Package C is 69.99 per month
    const float PacA_per_min=0.45;//Package A is 0.45 per minute for additional minutes
    const float PacB_per_min=0.40;//Package B is 0.40 per minute for additional minutes
    int PacA_min=450;//Package A has 450 minutes
    int PacB_min=900;//Package B has 900 minutes
    float total1,total2,total3,total4,total5;
    
    char Package;//Choose a package
    int Mintues;//How many minutes have used
    
    //Input a package 
    cout<<"Which package you chose among A, B, or C?\n";
    cin>>Package;
    
    //Input minutes
    cout<<"How many minutes you used?\n";
    cin>>Mintues;
            
    switch (Package)
    {
        case 'a':
        case 'A':
            if(Mintues>450)
                {
                    total1=PacA_min*PacACha+(Mintues-PacA_min)*PacA_per_min;
                    cout<<"Total amount is $ "<<total1<<endl;
                }
            else
                {
                    total2=Mintues*PacACha;
                    cout<<"Total amount is $ "<<total2<<endl;
                }
            break;
        
        case 'b':
        case 'B':
            if (Mintues>900)
                {
                    total3=PacB_min*PacBCha+(Mintues-PacB_min)*PacB_per_min;
                    cout<<"Total amount is $"<<total3<<endl;
                }
            else
                {
                    total4=Mintues*PacBCha;
                }
            break;
             
        case 'c':
        case 'C':
            total5=Mintues*PacCCha;
            cout<<"Total amount is $ "<<total5<<endl;
            break;
            
        default:
            cout<<"You enter a wrong character, please choose one of them and "
                    <<"run the Program again."<<endl;
    }
    return 0;
}

