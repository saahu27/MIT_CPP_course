//
//  ArrayinsideanArray.cpp
//  MIT
//
//  Created by sahruday  reddy patti on 16/05/21.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned n,q;
    cout<<"enter number of arrays and queries";
    cin >> n >> q;
    int **p = new int*[n];
    for(int i = 0; i < n; ++i) {
        int k;
        cout<<"Enter the length of input array";
        cin >> k;
        p[i] = new int[k];
        cout<<"Enter the array";
        for(int j = 0; j < k; ++j)
            cin >> p[i][j];
    }
    for(int i = 0; i < q; ++i) {
        unsigned a, b;
        cout<<"Enter the index";
        cin >> a >> b;
        cout << p[a][b] << endl;
    }
    return 0;
}
