//
//  calculatingPI.cpp
//  MIT
//
//  Created by sahruday  reddy patti on 25/04/21.
//

#include <iostream>
#include <cmath>
using namespace std;


    double compute(const int n)
    {
    srand(time(0));
    int dartsInCircle = 0;
    for(int i = 0; i < n; ++i)
    {
    double x = rand() / (double)RAND_MAX ;
    double y = rand() / (double)RAND_MAX ;
    if(sqrt(x*x + y*y) < 1)
    {
        dartsInCircle +=1;
    }
    }
// r^2 is 1, and a/4 = dartsInCircle/n, yielding this for pi:
return (dartsInCircle / static_cast <double>(n)) * 4;
    }
    
int main()
{
    cout << compute(2000000) ;
}

