/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on November 28, 2016, 12:11 AM
 */

#include <iostream>

using namespace std;

const int array_size=20;
int correct=0;//Number of correct answer
int incorrect=0;//Number of incorrect answer

void getAns(char [], int);
void getRes(char [], char [], int , int &, int &);
/*
 * 
 */
int main(int argc, char** argv) {

    char corAns[array_size]={'A','B','A','C','D','A','C','C','B','B','D','A',
                                            'B','C','B','D','C','D','D','B'};
    char ans[array_size];
    
    getAns(ans, array_size);
    getRes(corAns, ans, array_size, correct, incorrect);
    
    cout<<"\nThere are "<<correct<< " correct answer.\n";
    cout<<"There are "<<incorrect<< " incorrect answer.\n";
    
    cout<<"The incorrecr answer: \n";
    
    for(int i=0; i<array_size; i++)
    {
        if(corAns[i]!=ans[i])
            cout<<(i+1)<<endl;
    }
    
    return 0;
}

void getAns(char ans[], int array_size)
{
    for(int count=0; count<array_size; count++)
    {
        cout<<"Answer #"<<(count+1)<<" : ";
        cin>>ans[count];
    }
}

void getRes(char corAns[], char ans[], int array_size, int &correct, int &incorrect)
{
    bool isValid;
    
    for(int count=0; count<array_size; count++)
    {
        if(corAns[count]==ans[count])
            correct++;
        else
            incorrect++;
    }
    
}