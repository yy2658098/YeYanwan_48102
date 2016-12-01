/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on November 28, 2016, 11:27 PM
 */

#include <iostream>
#include <fstream>

using namespace std;

void readFile(char[], char [], int);
void compAns(char [], char [], int, int &);
void result(int &);

const int array_size=20;
/*
 * 
 */
int main(int argc, char** argv) {

    int miss;//Number of missed answer
    
    char corAns[array_size];//Correct answer
    char stuAns[array_size];//Student answer
    
    readFile("CorrectAnswers.txt", corAns, array_size);
    readFile("StudentAnswers.txt", stuAns, array_size);
    compAns(corAns, stuAns, array_size, miss);
    result(miss);
    
    return 0;
}

void readFile(char filename[], char values[], int array_size)
{
    int count=0;
    
    ifstream inFile;
    
    inFile.open(filename);
    
    while(count<array_size && inFile >> values[count])
    {
        count++;
    }
    
    inFile.close();
}

void compAns(char corAns[], char stuAns[], int array_size, int &miss)
{
    miss=0;
    
    for(int index=0; index<array_size; index++)
    {
        if(corAns[index] != stuAns[index])
        {
            miss++;
            
            cout<<"Missed answer # "<<(index+1)<<endl;
            cout<<"Student answer: "<<stuAns[index]<<endl;
            cout<<"Correct answer: "<<corAns[index]<<endl<<endl;
        }
    }
    cout<<"Total missed: "<<miss<<endl;
}

void result(int &miss)
{
    float per;//The percentage
    int que=20;//20 questions
    int correctAns=que-miss;//Correct answers
    
    per=static_cast<float>(correctAns)/que;//The pass percentage
    
    cout<<"The pass percentage is:  "<<(per*100)<<" %."<<endl;
    
    if(per>=0.7)
        cout<<"Pass the exam.\n";
    else
        cout<<"Faile the exam.\n";
    
}