//
//  pointer.cpp
//  MIT
//
//  Created by sahruday  reddy patti on 25/04/21.
//

#include <iostream>

void doubleNumber(int *num)
{
    *num = *num * 2;
}

int main()
{
int num = 35;
doubleNumber(&num);
std::cout << num; // Should print 70 return 0;
}
