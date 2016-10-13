/* 
 * File:   main
 * Author: Yanwan Ye
 *
 * Created on October 13, 2016, 11:24 AM
 * Purpose: File I/O rudimentary Display/Game Interface
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Declaration of Variables
    ifstream in;
    ofstream out;
    int rows,cols;
    string line;
    
    //Input values
    in.open("map.dat");
    in>>rows>>cols;
    cout<<"rows="<<rows<<" cols="<<cols<<endl;
            
    //Display Output / what is in the file to the output screen
    //In addition add in row numbers and column numbers for the user
    getline(in,line);
    for (int row=1;row<=rows;row++){
        getline(in,line);
        cout<<row<<" "<<line<<endl;
    }
    
    cout<<"  ";
    for (int col=1;col<=cols;col++){
        cout<<col;
    }
    cout<<endl;
    
    //Where do you want to place the player
    int prow,pcol;
    cout<<"Where to position the player in row and colum"<<endl;
    cin>>prow>>pcol;
    cout<<"Player position in Y = "<<prow<<" Player position in X = "<<pcol<<endl;
    
    //Read back in the file
    in.close();
    in.clear();
    
    //Input values
    in.open("map.dat");
    in>>rows>>cols;
    cout<<"rows="<<rows<<" cols="<<cols<<endl;
            
    //Display Output and Write to the player file
    out.open("player.dat");
    getline(in,line);
    for (int row=1;row<=rows;row++){
        getline(in,line);
        if(row==prow&&line[pcol]=='0')line[pcol]='p';
        cout<<row<<"  "<<line<<endl;
        out<<line;
    }
    //Close the file
    in.close();
    out.close();
    
    return 0;
}

