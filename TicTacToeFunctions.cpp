//
//  TicTacToeFunctions.cpp
//  MIT
//
//  Created by sahruday  reddy patti on 02/05/21.
//

#include <fstream>
#include<string>

using namespace std;




void getUserNames(string &, string &);
void printBlankBoard(string);
void printTheBoard(Board, string);
void printUserPrompt(string, char);
void printGameWinner(Board, string, string);
void checkResponse(Board&, char);
void writeTheBoard(Board);
int getUserResponse() ;





int num[2];

void checkResponse(Board &boardIn, char input )
{
    int status=0;
    int ppp[2];
    do
    {
        getUserResponse() ;\
        ppp[0] = num[0];
        ppp[1] = num[1];
        status = boardIn.SetPosition(ppp ,input) ;
        if(status == -1)
                {
                    cout<< "That postition is taken" ;
                }
    }while(status ==-1) ;
}


int getUserResponse()
{
    int rownumber =0;
    int columnnumber=0;
    cout<<"enter Row Number of the Input" ;
    std :: cin >> rownumber ;
    cout<<"enter column number of the Input" ;
    std :: cin >> columnnumber ;
    while((rownumber < 0 || rownumber >=4) || (columnnumber < 0 || columnnumber >=4) )
    {
        cout << "This is not a valid Position";
        cin.clear();
        cout<<"enter Row Number of the Input" ;
        std :: cin >> rownumber ;
        cout<<"enter column number of the Input" ;
        std :: cin >> columnnumber ;
    }
    num[0] = rownumber;
    num[1] = columnnumber;
    return 0;
}

void getUserNames(string &userX, string &userY)
{//get the user names
    std::cout<< "Name of user to be 'x' :";
    std::cin >>userX;
    std::cout<< "Name of user to be 'o' :";
    std::cin >>userY;
}

void printBlankBoard()
{//print a blank board, with numbered squares
    for(int i = 0; i <4; i++)
    {
        for(int j=0;j<4;j++)
        {
            if((i == 1 && j== 0) || (i==2 && j==0) || (i==3 && j==0) )
            {
                cout << "|" << "\n" ;
            }
            std::cout<<"|"<<i<<","<<j;
            if(i==3 && j==3)
            {
                cout<<"|" ;
            }
            
            
        }
    }
    cout<<"\n\n\n";
}


void printTheBoard(Board boardIn)
{//print the board with player moves
    printBlankBoard();
    char pos[4][4];
    
    for(int i=0; i<4;i++)
    {
        for(int j=0; j<4;j++)
        {
            if((i == 1 && j== 0) || (i==2 && j==0) || (i==3 && j==0) )
            {
                cout << "|" << "\n" ;
            }

            pos[i][j] = *boardIn.getPositions() ;
            cout << "|" << pos[i][j] ;
            if(i==3 && j==3)
            {
                cout<<"|" <<"\n";
            }
            
        }
    }
}

void writeTheBoard(Board boardIn) {
    //cout << "\n\n" ;
    //char pos[4][4];
    
    //for(int i=0; i<4;i++)
    //{
       // for(int j=0; j<4;j++)
        //{
          //  if((i == 1 && j== 0) || (i==2 && j==0) || (i==3 && j==0) )
            //{
              //  cout << "|" << "\n" ;
            //}
            
           // pos[i][j] = *boardIn.getPositions() ;
            //cout << "|" << pos[i][j] ;
            
        //}
    //}
    //print the board with player moves
        cout<<"\n\n";
        for(int i = 0; i <16; i++)
        {
            cout<<"|"<<boardIn.getPositions()[i];
            if(i%4 == 3)
            {
                cout<<"|\n";
            }
        }
        cout<<"\n\n\n";
    
}

void printUserPrompt(string nameIn, char letter)
{//prompt for user input
    std::cout<<nameIn<<" where would you like to place an "<<letter<<"?: ";
    cout<<"\n\n";
}

void printGameWinner(Board boardIn, string nameX, string nameO)
{//print the winner statement
    char winner;
    winner = boardIn.DetermineWinner();
    if(winner == 'x')
    {
        cout<<"Congrats "<<nameX<<" you won!\n\n";
    }
    if(winner == 'o')
    {
        cout<<"Congrats "<<nameO<<" you won!\n\n";
    }
}
