//
//  bobdole.cpp
//  MIT
//
//  Created by sahruday  reddy patti on 24/04/21.
//

 // bob and dole are integers
#include <iostream>
using namespace std;

int main() {
    int accumulator = 0;
       int dole;
       cin >> dole;
       int bob;
       cin >> bob;
 while(true)
{
 if(dole == 0)
     break;
 accumulator += ((dole % 2 == 1) ? bob : 0);
 dole /= 2;
 bob *= 2;
}
cout << accumulator << "\n";
}
