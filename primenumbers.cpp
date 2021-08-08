//
//  primenumbers.cpp
//  MIT
//
//  Created by sahruday  reddy patti on 24/04/21.
//

  #include <iostream>
  using namespace std;
  int main()
{
    int N;
    cin >> N;
    for(int i=2;N> 0; ++i)
    {
        bool isPrime= true;
        for(int j = 2; j < i; ++j)
        {
                if(i % j == 0)
                {
                    isPrime = false;
                    break;
                }
    }
        if(isPrime)
        {
            --N;
            cout << i << "\n";
        }
        }
    return 0;
    
}
