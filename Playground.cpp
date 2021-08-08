
#include <iostream>

/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array
**and a vector of size 4.
**Use the dot product to multiply the array by the vector.
**Print the resulting vector.
*/

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
