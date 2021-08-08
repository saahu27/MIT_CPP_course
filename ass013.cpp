//
//  ass013.cpp
//  MIT
//
//  Created by sahruday  reddy patti on 24/04/21.
//

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "enter number of numbers" ;
    cin >> N;
    int acc = 0;

    cin >> acc;
    int minval = acc;
    int maxval = acc;
    
    for(int i=1;i<N;++i)
    {
        int a;
        cin >> a;
        acc += a;
        if (a<minval)
        {
            minval = a;
        }
        if(a>maxval)
        {
            maxval = a;
        }
    }

    cout << "mean" << (double)acc/N << "\n" ;
    cout << "max:" << maxval << "\n";
    cout << "min" << minval << "\n";
    cout << "range" << maxval - minval << "\n";


}
