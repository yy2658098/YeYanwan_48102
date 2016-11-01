/* 
 * File:   main
 * Author: Yanwan Ye
 *
 * Created on October 27, 2016, 9:44 AM
 * Purpose: This is a casino game to put money and guess the win number.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
        
    int winNumber;//Win number
    int guessNumber;//Guess number
    int betMoney;//Bet money
    float totalBet=0;//Total bet money
    float balance = 0; //Account balance
    char check = 'Y';//Play another run
    float winToday;//Total win today
    int choice=0;//Choice to play or leave
    int nGuess;//Guess times
    
    //Display the menu
    cout << "Welcome to the Casino!" << endl<<endl;
    cout << "Please select an option from the following list." << endl;
    cout << "1. Play High-Low" << endl;
    cout << "2. Leave the Casino" << endl;
    cin>>choice;
    
    //Make the choice possiable
    while(choice != 1&&choice != 2)
    {
        cout<<"Bad choice! Please re-enter: ";
        cin>>choice;
    }
    cout<<endl;
    
    //Process the user's choice
    while(check =='Y'||check =='y')
    {
        //Respond to the user's menu slection
        switch (choice) 
        {
            case 1:
                cout << "Welcome to High-Low. Have fun!" << endl;
                break;
            case 2:
                cout<<"Hope to see you again, have a good day!"<<endl;
                break;
        }
        
        //Make a leave choice
        if(choice == 2)
            return 0;
        
        //Run the game
        else
        {
            //Any number become a win number
            winNumber = rand() % 100 + 1;
            cout<<"(Win number: "<<winNumber<<" )"<<endl<<endl;
            
            //Get the bet money
            cout<<"How much money you would like to put (enter an integral multiple of ten): $";
            cin>>betMoney;
            
            //Make the money is multiple of ten and less than 1000
            while (((betMoney %10) !=0) || (betMoney >1000))
            {
                cout<<"Please re-enter how much money you would like to put (enter an integral multiple of ten): $";
                cin>>betMoney;
            }

            //Get the guess times
            nGuess=betMoney/10;
            
            //Make the guess time less than 5 times
            if (nGuess <= 3)
                cout<<"You get "<<nGuess<<" times to guess. Good luck!" <<endl<<endl;
            else
                cout<<"You get 5 times to guess. Good luck!" <<endl<<endl;
            
            
            balance=balance+betMoney;//Account balance
            totalBet = totalBet + betMoney;//Total bet money
 
            
            //Make the user can guess 1 to 31 times
            if (nGuess<=3)
                for (int i=1; i<=nGuess; i++)
                {
                    
                    //Get a guess number
                    cout<<"Fun time! Enter the number you would like to guess(1 to 100): ";
                    cin>>guessNumber;

                    
                    //Display the balance and win the game
                    if(guessNumber == winNumber)
                    {
                        balance = betMoney*100 + balance;
                        cout<<"Congratulation! You win! The number is "<<winNumber<<". Your balance is $"<<balance<<". "<<endl;
                        return 0;
                    }

                    
                    //Display the user lose the betmoney
                    else
                    {
                        cout<<"Sorry, You lost $"<<betMoney<<"..."<<endl;
                        balance = balance - betMoney/nGuess;
                        cout<<"Now your balance is: "<<balance<<endl;
                        cout<<endl;

                    }

                    
                }
            
            
            //Make the user can guess 5 times
            if (nGuess>3)
                for (int i=1; i<=5; i++)
                {
                    
                    //Get a guess number
                    cout<<"Fun time! Enter the number you would like to guess(1 to 100): ";
                    cin>>guessNumber;

                    
                    //Display the balance and win the game
                    if(guessNumber == winNumber)
                    {
                        balance = betMoney*100 + balance;
                        cout<<endl;
                        cout<<"Congratulation! You win! The number is "<<winNumber<<". Your balance is $"<<balance<<". "<<endl;
                        return 0;
                    }

                    
                    //Display the user lose the betmoney
                    else
                    {
                        cout<<"Sorry, You lost $"<<betMoney<<"..."<<endl;
                        balance = balance - betMoney/nGuess;
                        cout<<"Now your balance is: "<<balance<<endl;
                        cout<<endl;
                    }

                }
        }
        
        
        //Display another run
        do
        {
            cout<<endl;
            cout<<"Would you like to play another round?(Y/N): ";
            cin>>check;
        }while(check!='N' && check!='Y' && check!='n' && check!='y');
        
    };
    
    
    //Display the balance to 0 and leave the game 
    if(balance==0)
    {
        cout<<"You balance is $0. Sorry, you lost all your money(($"<<totalBet<<"). Withdraw more money from ATM at the corner on your left and come back."<<endl;
    }
    
    
    //Display the win money today
    else if(balance-totalBet>0)
        {
            winToday=totalBet-balance;
            cout<<"Nice Job! You win $"<<winToday<<". Spend all the money and have fun!"<<endl;
        }
    
    
    //Dispaly the leave
    else
        cout<<"Hope to see you again, have a good day!"<<endl;

    
    
return 0;
}