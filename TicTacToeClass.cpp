//
//  TicTacToeClass.cpp
//  MIT
//
//  Created by sahruday  reddy patti on 02/05/21.
//

#include<iostream>
#include<string>
#include<cstring>
#include<stdio.h>
#include<fstream>

class Board
{

    char positionSelected [4][4];
    char winner;
    
public:

    Board() {
        
        winner = 'z';
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                positionSelected[i][j] = '-';
            }
        }
    }
    
    char *getPositions(void)
    {

        return *positionSelected;
        
    }
    
    int SetPosition(int GridNumber[], char userinput)
    {
        
        if(positionSelected[GridNumber[0]] [GridNumber[1]] == '-')
        {
            positionSelected[GridNumber[0]] [GridNumber[1]] = userinput;
        }
        
        else
        {
            return -1;
        }
        
        return 0;
    }
    
    char checkrows() {
        
        for(int i=0;i<4;i++)
        {
            int countx = 0;
            int county = 0;
            for(int j=0;j<4;j++)
            {
                if(positionSelected[i][j] == 'x')
                {
                    ++countx;
                }
               
                if(positionSelected[i][j] == 'y')
                {
                    ++county;
                }
            }
            if(countx==4)
            {
                winner = 'x';
                return 'x';
                break;
            }
            if(county==4)
            {
                winner = 'y';
                return 'y';
            }
        }
        return 'z';
        
    }
    
    char checkcolumns() {
        
        
        for(int i=0;i<4;i++)
        {
            int countx = 0;
            int county = 0;
        
        for(int j=0;j<4;j++)
        {
            if(positionSelected[j][i] == 'x')
            {
                ++countx;
            }
           
            if(positionSelected[j][i] == 'y')
            {
                ++county;
            }
        }
        if(countx==4)
        {
            winner = 'x';
        return 'x';
        }
        if(county==4)
        {
            winner = 'y';
            return 'y';
        }
    }
    return 'z';
    }
    
    
    char checkdiagonals() {
        int countx = 0;
        int county = 0;
        int countxr = 0;
        int countyr = 0;
        for (int i = 0,j = 0; i<4; ++i,++j)
        {
            if(positionSelected[i][j] == 'x')
            {
                ++countx;
            }
            if(positionSelected[i][j] == 'y')
            {
                ++county;
            }
            if(countx==4)
            {
                winner = 'x';
            return 'x';
            }
            if(county==4)
            {
                winner = 'y';
                return 'y';
            }
        }
        
        for (int i=0,j = 3; i<4 ; ++i,--j)
        {
            if(positionSelected[i][j] == 'x')
            {
                ++countxr;
            }
            if(positionSelected[i][j] == 'y')
            {
                ++countyr;
            }
            if(countxr==4)
            {
                winner = 'x';
                return 'x';
            }
            if(countyr==4)
            {
                winner = 'y';
                return 'y';
            }
        }
        return 'z';
    }
    
    char DetermineWinner()
    {
                char winner = 'z';
                winner =  checkrows();
                if(winner == 'z')
                {
                    winner = checkcolumns();
                }
                if(winner =='z')
                {
                    winner = checkdiagonals();
                }
                return winner;
            
    }
};
