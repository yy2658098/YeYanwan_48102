/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on November 17, 2016, 9:03 PM
 */

#include <iostream>
#include <string>

using namespace std;

void getTotal(int []);
void getHighest(int [],string []);
void getLowest(int [],string []);

/*
 * 
 */
int main(int argc, char** argv) {

    const int num=5;
    string salsa[num]={"mild","medium","sweet","hot","zesty"};
    int sale[num];
    
    for(int count=0; count<num; count++)
    {
        cout<<"Enter sales of "<<salsa[count]<<" :";
        cin>>sale[count];
    }
    
    cout<<"\nSalsa sale report\n";
    cout<<"Salsa\t\tSale\n";
    cout<<"------------------\n";
    for(int count=0; count<num; count++){
        cout<<salsa[count]<<"\t\t"<<sale[count]<<endl;
    }
    
    getTotal(sale);
    getHighest(sale,salsa);
    getLowest(sale,salsa);
    
    return 0;
}

void getTotal(int sale[])
{
    int total=0;
    int num=5;
    
    for(int count=0; count<num; count++)
        total += sale[count];
    
    cout<<"Total sales is "<<total<<endl;
}

void getHighest(int sale[],string salsa[]){
    int num=5;
    int highest=sale[0];
    int element=0;
    for(int count=1; count<num; count++){
        if(sale[count]>highest){
            highest=sale[count];
            element=count;
        }
    }
    cout<<"The highest is: "<<salsa[element]<<endl;
}

void getLowest(int sale[],string salsa[]){
    int num=5;
    int lowest=sale[0];
    int element=0;
    for(int count=1; count<num; count++){
        if(sale[count]<lowest){
            lowest=sale[count];
            element=count;
        }
    }
    cout<<"The lowest is: "<<salsa[element]<<endl;
}