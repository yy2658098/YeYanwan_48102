/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on December 8, 2016, 5:43 PM
 * Purpose:  This program is used to play a five in row game.
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

// Constant for the array size
const int ROWS=16;
const int COLS=16;

// Function prototype
void introduce();
void getName(string &, string &);
void getChessBoard(int [][COLS]) ;
bool getPosition(int [][COLS], int, int);
bool isInChessBoard(int, int, int, int);
int getRow(int);
int getCol(int);
bool isHLine(int [][COLS], int, int, int);
bool isVLine(int [][COLS], int, int, int);
bool isTLine(int [][COLS], int, int, int);
bool isBLine(int [][COLS], int, int, int);
bool isWin(int [][COLS], int, int,int);

/*
 * 
 */
int main(int argc, char** argv) {
    
    int game[ROWS][COLS]={};                //Array of chess board
    int x, y;                               //The player put in a row and column
    int row,col;                            //Row and column
    string player1,player2;                 //Name of player1 and player2
    char ans;                               //Answer of play again
    
    introduce();                            //Introduce Function
    getName(player1,player2);               //Get the players' names Function
    getChessBoard(game);                    //Get the chess board Function
    
    ofstream outputFile;                   // File stream object
    outputFile.open("win.txt");            // Open a file named win.txt.

  
    //Play the game again
    do{
        int game[ROWS][COLS]={};
        //Player1 and player2 turn to put in pieces
        do{
            //Player 1 begine to play
            cout<<"\n"<<player1<<" move in a piece: "<<endl;

            //Check the place
            do{
                x=getRow(row);
                y=getCol(col);   
            }while(getPosition(game, x,y) || !(isInChessBoard(ROWS, COLS, x, y)));

            //Set the place
            game[x-1][y-1]=1;

            //Get the winner is Player1
            if(isWin(game, 1, x, y)){
                getChessBoard(game);
                
                cout<<"\nCongratulation! "<<player1<<" win.\n";
                
                // Write the win player to the file.
                outputFile<<"\nCongratulation! "<<player1<<" win.\n";
                
                //Close the file.
                outputFile.close();
                
                break;
            }

            //Player 1 begine to play
            cout<<"\n"<<player2<<" move in a piece: "<<endl;

            //Check the place
            do{
                x=getRow(row);
                y=getCol(col);

            }while(getPosition(game, x,y) || !(isInChessBoard(ROWS, COLS, x, y)));
            
            //Set the place
            game[x-1][y-1]=2;

            //Get the winner is Player2
            if(isWin(game, 2, x, y)){
                getChessBoard(game);
                cout<<"\nCongratulation! "<<player2<<" win.\n";
                
                // Write the win player to the file.
                outputFile<<"\nCongratulation! "<<player2<<" win.\n";
                
                //Close the file.
                outputFile.close();
                
                break;
                }

            //Display the chess board
            getChessBoard(game);

        }while((!isWin(game, 1, x, y)) && (!isWin(game, 2, x, y)));

        //Does the player want to play the game again
        cout<<"\nDo you want to play again(Y/N): ";
        cin>>ans;
        
    }while(ans == 'Y' || ans == 'y');
    
    return 0;
}

// **********************************************************
// The introduce function is used to welcome the players    *
// and introduces this game.                                *
// This function display a message.                         *
// **********************************************************

void introduce()
{
    cout<<" =====================================================\n";
    cout<<"‖       Welcome to the five in the row game!          ‖\n";
    cout<<"‖                                                     ‖\n";
    cout<<"‖       Tips: If you put 5 pieces in the              ‖\n";
    cout<<"‖       same row, you will be the winner!             ‖\n";
    cout<<"‖       else, another player will be the winner!      ‖\n";
    cout<<" =====================================================\n";
}

// **********************************************************
// The getName function is used to get the players' names.  *
// This function display a message.                         *
// **********************************************************

void getName(string &player1, string &player2)
{
    //Get play1 's name
    cout<<"\nPlease enter name of palyer 1: ";
    cin>>player1;
    
    //Let the player be looked as number 1
    cout<<"Hi, "<<player1<<" You represent number 1 .\n\n";
    
    //Get paly2's name
    cout<<"Please enter name of player 2: ";
    cin>>player2;
    
    //Let the player be looked as number 2
    cout<<"Hi, "<<player2<<" You represent number 2 .\n";
    
}

// **********************************************************
// The getChessBoard function display the chess board       *
// and put valid array inside.                              *
// **********************************************************

void getChessBoard(int game[][COLS]) 
{    
    //Display the heading
    cout<<"\n    1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16\n";
    cout<<"  ┏━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┓"<<endl;
    
    //Set the rows
    for(int i=0; i<ROWS; i++)
    {
        //Skip the first row
        if(i !=0)
            cout<<"  ┣━━━╋━━━╋━━━╋━━━╋━━━╋━━━╋━━━╋━━━╋━━━╋━━━╋━━━╋━━━╋━━━╋━━━╋━━━╋━━━┫"<<endl;
            
            //Display the row number
            cout<<left<<setw(2)<<i+1;
        
        //Set the column
        for(int j=0; j<COLS; j++){
          
            if(game[i][j]==0){
                cout<<"┃   ";
            }
            else 
                cout<<"┃ "<<game[i][j]<<" ";
        }
        cout<<"┃"<<endl;
    }
    //Set the bottom
    cout<<"  ┗━━━┻━━━┻━━━┻━━━┻━━━┻━━━┻━━━┻━━━┻━━━┻━━━┻━━━┻━━━┻━━━┻━━━┻━━━┻━━━┛"<<endl;
}

// **********************************************************
// The getPosition function determines whether this place   *
// have a piece or not.It has array istead of game array,   *
// x as the row, and y as the column.                       *
// It is a bool fuction and returns true.                   *
// **********************************************************

bool getPosition(int a[][COLS], int x, int y){
    
    bool found=false;                                //Flag to indiciate if the value was found
    
    if(a[x-1][y-1] !=0)                              //If the space is blank
        found=true;                                  //Set the flag
    
    return found;                                    //Return the found
}

// **********************************************************
// The isInChessBoard function make players enter the       *
// rows and columns are between 1~16. If the place is       *
// not valid, it will be false and the player enter the     *
// value again.It returns true.                             *
// **********************************************************

bool isInChessBoard(int row, int col, int x, int y){
    
    bool found=false;                               //Flag to indiciate if the value was found
    
    if(x>0 && x<(row+1) && y>0 && y<(col+1))        //Make enter the row and column is between 1~16
        found=true;                                 //Set the flag
    
    return found;                                   //Return the found
}

// **********************************************************
// The getRow function has an argument row as the which row *
// the player put in a piece. It returns row.               *
// **********************************************************

int getRow(int row){
    
    //Get the row
    cout<<"enter the row:";
    cin>>row;
    
    return row;
}

// **********************************************************
// The getCol function has an argument col as the which     *
// column the player put in a piece. It returns col.        *
// **********************************************************

int getCol(int col){
    
    //Get the column
    cout<<"enter the column:";
    cin>>col;
    
    return col;
}

// **********************************************************
// The isHLine function determines whether this place have  *
// a piece is five in the horizon or not.It has game array, *
// num of 1 or 2, row and column.                           *
// It is a bool fuction and returns true.                   *
// **********************************************************

bool isHLine(int game [][COLS], int num, int x, int y){
    int count = 0;                                //Set a count to 0
    bool flag=false;                              //Flag to indiciate if the value was found

    //Determine the five in horizon
    for(int i=0;i<COLS;i++){
        if(game[x-1][i] == num){
            count++;
        }else{
            count = 0;
        }
        if(count==5){
            flag=true;                            //Set the flag
        }
    }
    return flag;                                 //Return the flag
}

// **********************************************************
// The isVLine function determines whether this place have  *
// a piece is five in the vertical or not.It has game       *
// array, num of 1 or 2, row and column.                    *
// It is a bool fuction and returns true.                   *
// **********************************************************

bool isVLine(int game [][COLS], int num, int x, int y){
    int count = 0;                              //Set a count to 0
    bool flag=false;                            //Flag to indiciate if the value was found
    
    for(int i=0;i<ROWS;i++){
        if(game[i][y-1] == num){
            count++;
        }
        else{
            count = 0;
        }
        if(count==5){
            flag=true;                         //Set the flag
        }
    }
    return flag;                              //Return the flag
}

// **********************************************************
// The isTLine function determines whether this place have  *
// a piece is five from left top to right bottom or not.    *
// It has game array, num of 1 or 2, row and column.        *
// It is a bool fuction and returns true.                   *
// **********************************************************

bool isTLine(int game [][COLS], int num, int x, int y){
    
    int count = 0;                              //Set a count to 0
    bool flag=false;                            //Flag to indiciate if the value was found
    
    if(x<y){
        int i= 0,j=y-x;
        while(i<(ROWS+1) && j<(COLS+1)){
            if(game[i][j]==num){
                count++;
            }
            else{
                count = 0;
            }
            if(count == 5){
                flag=true;                     //Set the flag
            }
            i++;
            j++;
        }
        return flag;                          //Return the flag
    }
    else{
        int i= x-y,j=0;
        while(i<(ROWS+1) && j<(COLS+1)){
            if(game[i][j]==num){
                count++;
            }
            else{
                count = 0;
            }
            if(count == 5){
                flag=true;                   //Set the flag
            }
            i++;
            j++;
        }
        return flag;                        //Return the flag
    }
}
 
// **********************************************************
// The isBLine function determines whether this place have  *
// a piece is five from left bottom to right top or not.    *
// It has game array, num of 1 or 2, row and column.        *
// It is a bool fuction and returns true.                   *
// **********************************************************

bool isBLine(int game [][COLS], int num, int x, int y){

    int count = 0;                        //Set a count to 0
    bool flag=false;                      //Flag to indiciate if the value was found
    
    if(x<y){
        int i= 1,j=((x+y)-i);
        while(i<(ROWS+1) && j<(COLS+1)){
            if(game[i][j]==num){
                count++;
            }
            else{
                count = 0;
            }
            if(count == 5){
                flag=true;               //Set the flag
            }
            i++;
        }
        return flag;                    //Return the flag
    }
    else{
        int j=1,i= ((x+y)-j);
        while(i<(ROWS+1) && j<(COLS+1)){
            if(game[i][j]==num){
                count++;
            }
            else{
                count = 0;
            }
            if(count == 5){
                flag=true;             //Set the flag
            }
            j++;
        }
        return flag;                  //Return the flag
    }
}

// **********************************************************
// The isWin function determines whether one of the         *
// players is win.                                          *
// It is a bool fuction and returns true.                   *
// **********************************************************

bool isWin(int game[][COLS], int num, int x,int y){
    
    bool found=false;                 //Flag to indiciate if the value was found
    
    //Determine if one play is win when one line is in five
    if (isHLine(game,num, x, y) || isVLine(game,num, x, y) 
        ||isTLine(game,num, x, y) || isBLine(game,num, x, y) ){
        
        found=true;                  //Set the flag
    }
    return found;                    //Return the flag
}