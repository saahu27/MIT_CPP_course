//
//  main.cpp
//  MIT
//
//  Created by sahruday  reddy patti on 23/04/21.
//

#include <iostream>
using namespace std;

    int secondsmain() {
    int x = 6;
          switch(x) {
                case 1:
                      cout << "x is 1\n" ;
                      break;
                case 2:
                case 3:
                      cout << "x is 2 or 3";
                      break;
                default:
                      cout << "x is not 1, 2, or 3";
    }
    return 0;

 }

int main() {
    cout << "Hello, World!\n";
    secondsmain() ;
    return 0;
}


