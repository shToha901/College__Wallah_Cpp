// CODE FOR: first multiple of 5 which is also divisible by 7

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 5;
    while (true)
    {
        if (i % 7 == 0)
        {
            cout << i << endl;
            break;
        }
        i += 5;
    }

    for (int i = 5;; i += 5)
    {
        if (i % 7 == 0)
        {
            cout << i << endl;
            break;
        }
    }


    return 0;
}