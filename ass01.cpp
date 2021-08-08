//
//  ass01.hpp
//  MIT
//
//  Created by sahruday  reddy patti on 23/04/21.
//


#include <iostream>
using namespace std;

int main()
{
    cout << "enter how many times" ;
    int c ;
    cin >> c ;
    for(int q = 0; q < c;)
        {
            for(int i = 1;i<5;i++)
            {
                cout << "HI" ;
            }
         cout << q++ << "\n";
        }
    int j = 1 ;
    do {
        
        cout << "hello  do while world\n" << j;
        j++;
    } while(j<=c) ;
        
    int z = 1 ;
    while(z<=c) {
        z++;
        cout << "hello while world \n" << z;
    }

}

