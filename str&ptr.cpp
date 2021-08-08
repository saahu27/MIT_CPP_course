//
//  str&ptr.cpp
//  MIT
//
//  Created by sahruday  reddy patti on 25/04/21.
//

#include <iostream>
using namespace std;

int stringlength(const char *str = "sahruday")
{
    int length=0;
    while(*(str + length) != 0)
    {
        ++length;
    }
    cout << length ;
    return length;
}



void swapusingreference(int &x, int &y)
{
    int temp = x ;
    x=y;
    y=temp;
}

void swapusingpointers(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;

}

void swapingpointers(int **x, int **y)
{
    int *temp = *x;
    *x = *y;
    *y = temp;
    
}
 int main()
{
 //int x = 5;
 //int y = 6;
 //int *ptr1 = &x;
 //int *ptr2 = &y;
 /* swapingpointers(&ptr1, &ptr2); */
 //cout << *ptr1 << " " << *ptr2; // Prints "6 5"
 char *oddOrEven = "Never odd or even";
    char *nthCharPtr = &oddOrEven[5]; //pointer pointing to 6th char of oddoreven
    nthCharPtr -= 2; //pointer airthmatic to pint to 4th char of odd or even
    nthCharPtr = oddOrEven + 3; //similar as above step just another notation
    cout << *nthCharPtr << "\n" ; //priting the current value  pointed by nthCharPtr
    char **pointerPtr = &nthCharPtr;  /* #**pointerPtr=pointer to a pointer i.e pointerPtr is a pointer which points to the  nthCharPtr pointer */
    cout << pointerPtr << "\n"; //priting the value stored in pointerPtr
    cout << **pointerPtr << "\n"; /* priting the value pointed by the pointer pointerPtr i.e adress of the pointer nthcharptr*/
    
    nthCharPtr++; //to point to the next character in oddOrEven (i.e. one character past the location it currently points to)
    cout << nthCharPtr - oddOrEven << "\n" ; //how far away from the character currently pointed to by nthCharPtr is from the start of the string.

}

