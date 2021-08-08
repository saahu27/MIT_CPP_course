//
//  factorial.cpp
//  MIT
//
//  Created by sahruday  reddy patti on 24/04/21.
//
#include "primenumbers.cpp"
#include <iostream>
using namespace std;

int factorial()
{
    cout<< "enter the number" ;
    int N;
    cin >> N ;
    int num =1;
    if(N < 0)
    {
    cout << "No negative numbers allowed!\n";
    return 1;
    }
    if(N> 20) {
    cout << "Program will not produce correct result!\n";
        
    }
    while(N>0)
    {
        
        num = num * N ;
        N = N-1 ;
    }
    
    cout << "fact is" << num ;
    return 0;
}
