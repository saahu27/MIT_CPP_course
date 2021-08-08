//
//  arrays.cpp
//  MIT
//
//  Created by sahruday  reddy patti on 25/04/21.
//

#include <iostream>
using namespace std;

void printarray(int num[], int len)
{
    for(int i =0 ; i<len ; ++i)
    {
        cout << num[i] ;
        if(i < len-1)
        {
            cout << ",";
        }
    }
    
}

void reverse(int numbers[], const int numbersLen)
{
    for(int i = 0; i < numbersLen / 2; ++i)
    {
        int tmp = numbers[i];
        int indexFromEnd = numbersLen - i - 1;
        numbers[i] = numbers[indexFromEnd];
        numbers[indexFromEnd] = tmp;
    }
}

void transpose(const int input[][LENGTH], int output[][WIDTH])
{
    for(int i = 0; i < WIDTH; ++i)
    {
        for(int j = 0; j < LENGTH; ++j)
        {
            output[j][i] = input[i][j];
        }
    }
}

void reverseusingpointer(int numbers[], const int numbersLen)
    {
        for(int i = 0; i < numbersLen / 2; ++i)
            {
                int tmp = *( numbers + i);
                int indexFromEnd = numbersLen - i - 1;
                *(numbers + i) = *(numbers + indexFromEnd);
                *(numbers + indexFromEnd) = tmp;
            }
    }

int main()
{
    int num[5] = {1,2,3,4,5} ;
    reverse(num,5);
    for(int j =0;j < 5 ; ++j)
    {
        cout << num[j] ;
    }
    return 0;
}
