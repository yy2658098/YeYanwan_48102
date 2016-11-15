/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on November 10, 2016, 12:10 AM
 */

#include <iostream>

using namespace std;

void getJudgeData(int &);
void calcScore(int, int, int, int, int);
int findLowest(int, int, int, int, int);
int findHighest(int, int, int, int, int);
/*
 * 
 */
int main(int argc, char** argv) {

    int score1;//The first score
    int score2;//The second score
    int score3;//The third score
    int score4;//The fouth score
    int score5;//The fifth score
    
    //Get five score
    getJudgeData(score1);
    getJudgeData(score2);
    getJudgeData(score3);
    getJudgeData(score4);
    getJudgeData(score5);
    
    //Display the average score
    calcScore(score1,score2,score3,score4,score5);
    
    return 0;
}

// ********************************************************
// The getJudgeData function asks the user for a judge    *
// score, stores it in a reference parameter variable,    *
// and validates it.                                      *
// ********************************************************

void getJudgeData(int &score){
    
    //Get the judge's score
    cout<<"Please enter the judge's score: ";
    cin>>score;
    
    //Valid the judge's score
    while (score<0 || score>10)
    {
        cout<<"Please enter the judge's score between 0 to 10: ";
        cin>>score;
    }
}

// ********************************************************
// The calcScore function calculates and displays the     *
// average of the three scores that remain after dropping *
// the highest and lowest scores the performer received.  *
// ********************************************************

void calcScore(int score1, int score2, int score3, int score4, int score5){
    
    //Get the lowest score
    int lowest=findLowest(score1, score2, score3, score4, score5);
    
    //Get the highest score
    int highest=findHighest(score1, score2, score3, score4, score5);
    
    //Get the total score
    int total=score1 + score2 + score3 + score4 + score5;
    
    //Get the average score
    float ave=(total-lowest-highest)/3;
    
    //Display the average score
    cout<<"The average score is: "<<ave<<endl;
}

// ********************************************************
// The findLowest function finds and returns the lowest   *
// of the five scores passed to it.                       *
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

// ********************************************************
// The findHighest function finds and returns the highest *
// of the five scores passed to it.                       *
// ********************************************************

int findHighest(int score1, int score2, int score3, int score4, int score5)
{
    int highest;//The highest score
    
    //Determine the lowest score
    if (score1 > score2 && score1 > score3 && score1 > score4 && score1 > score5)
        highest=score1;
    
    else if (score2 > score1 && score2 > score3 && score2 > score4 && score2 > score5)
        highest=score2;
    
    else if (score3 > score1 && score3 > score2 && score3 > score4 && score3 > score5)
        highest=score3;
    
    else if (score4 > score1 && score4 > score2 && score4 > score3 && score4 > score5)
        highest=score4;
    
    else
        highest=score5;
    
    return highest;
}