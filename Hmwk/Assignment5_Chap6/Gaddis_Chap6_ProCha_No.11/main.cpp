/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on November 9, 2016, 11:14 PM
 */

#include <iostream>

using namespace std;

void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);
/*
 * 
 */
int main(int argc, char** argv) {

    int score1;//The first score
    int score2;//The second score
    int score3;//The third score
    int score4;//The fouth score
    int score5;//The fifth score
    
    //Get the score
    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);
    
    //Get the average score
    calcAverage(score1, score2, score3, score4, score5);
    return 0;
}

// ********************************************************
// The getScore function asks the user for a test score,  *
// stores it in a reference parameter variable.           *
// ********************************************************

void getScore(int &score)
{
    cout<<"Please enter the test score: ";
    cin>>score;
}

// ********************************************************
// The calcAverage function calculates and displays the   *
// average of the four highest scores.                    *
// ********************************************************

void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
    int total= score1 + score2 + score3 + score4 + score5;//Get the total score
    int lowest= findLowest(score1, score2, score3, score4, score5);//Get the lowest score
    int ave=(total-lowest)/4;//Get the average score
    
    cout<<"The test average is: "<<ave<<endl;
}

// ********************************************************
// The findLowest function finds and returns the lowest.  *
// ********************************************************

int findLowest(int score1, int score2, int score3, int score4, int score5)
{
    int lowest;//The lowest score
    
    //Determine the lowest score
    if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
        lowest=score1;
    
    else if (score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5)
        lowest=score2;
    
    else if (score3 < score1 && score3 < score2 && score3 < score4 && score3 < score5)
        lowest=score3;
    
    else if (score4 < score1 && score4 < score2 && score4 < score3 && score4 < score5)
        lowest=score4;
    
    else
        lowest=score5;
    
    return lowest;
    
}