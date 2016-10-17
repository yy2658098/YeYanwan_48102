/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on October 15, 2016, 1:30 PM
 * Purpose: Hotel Occpancy
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int floors;//How many floors
    int rooms;//How many rooms
    int occup_rooms;//How many occupied rooms
    int total_rooms=0;
    int total_occupied=0;
    int total_empty=0;
    int empty;
    float per_occu_room;
    
    //Get the floors
    cout<<"How many floors the hotel has? ";
    cin>>floors;
    
    //Display each floor
    for (int floor = 1; floor <= floors; floor++)
    {
        
        //Get a positive floors
        if (floors < 1)
        cout<<"Please enter the number bigger \n";
        else if (floors==13)
            continue;
        
        //Get the room for each floor
        cout<<"\nHow many rooms in floor "<<floor<<" ?";
        cin>>rooms;
    
        //Get a positive rooms
        while (rooms < 10)
        {
        cout<<"Please enter the number bigger than 10\n";
        }
    
        //Get the occupied rooms
        cout<<"How many rooms are occupied in floor "<<floor<<" ?";
        cin>>occup_rooms;
        
        // Calculate the number of total rooms on this floor.
        total_rooms += rooms;
    
        // Calculate the number of total occupied on this floor.
        total_occupied += occup_rooms;
    
        // Calculate the number of empty rooms on this floor.
        empty = rooms - occup_rooms;
    
        // Calculate the number of total empty on this floor.
        total_empty += empty; 
    }

    cout<<"---------------------------------------\n";
    cout<<"\nThe hotel has total rooms "<<total_rooms<<" ."<<endl;
    
    cout<<"\nThe hotel has total occupied rooms "<<total_occupied<<" ."<<endl;
    
    cout<<"\nThe hotal has total unoccupied rooms "<<total_empty<<" ."<<endl;
    
    per_occu_room= static_cast<float>(total_occupied) / total_rooms;
    
    cout<<"\nThe percentage of rooms are occupied is "<< (per_occu_room * 100) <<"%"<<" ."<<endl;
    
    
    
    
    return 0;
}

