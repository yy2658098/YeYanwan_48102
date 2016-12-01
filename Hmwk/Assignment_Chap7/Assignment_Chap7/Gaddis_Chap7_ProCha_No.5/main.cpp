/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on November 17, 2016, 11:44 PM
 */

#include <iostream>

const int monkeys=3;
const int days=5;

using namespace std;
void getAverage(float[][days]);
void getLeast(float[][days]);
void getGreatest(float[][days]);
/*
 * 
 */
int main(int argc, char** argv) {

    float pounds[monkeys][days];
    
    for(int i=0; i<monkeys; i++){
        for(int j=0; j<days; j++){
            cout<<(i+1)<<" Monkey "<<(j+1)<<" Day: ";
            cin>>pounds[i][j];
        }
        cout<<endl;
    }

    getAverage(pounds);
    getLeast(pounds);
    getGreatest(pounds);
    
    return 0;
}

void getAverage(float pounds[][days]){
    
    float total=0.0;
    float average;
    int element;
    
    for(int j=0; j<days; j++){
        for(int i=0; i<monkeys; i++){
            total += pounds[i][j];
            element=i;
        }
        average=total/element;
        cout<<"Day "<<(j+1)<<" Monkeys eat average: "<<average<<endl;
    }
}

void getLeast(float pounds[][days]){
    float least=pounds[0][0];
    int leastMonkey;
    
    for(int i=0; i<monkeys; i++){
        for(int j=0; j<days; j++){
            if(pounds[i][j]<pounds[0][0]){
                least=pounds[i][j];
                leastMonkey=i+1;
            }
        }
    }
    cout<<"# "<<leastMonkey<<" Monkey eats the least food during week: "<<least<<endl;
}

void getGreatest(float pounds[][days]){
    float greatest=pounds[0][0];
    int greatestMonkey;
    
    for(int i=0; i<monkeys; i++){
        for(int j=0; j<days; j++){
            if(pounds[i][j]>pounds[0][0]){
                greatest=pounds[i][j];
                greatestMonkey=i+1;
            }
        }
    }
    cout<<"# "<<greatestMonkey<<" Monkey eats the greatest food during week "<<greatest<<endl;
}









