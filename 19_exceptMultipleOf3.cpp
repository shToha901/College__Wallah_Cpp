// CODE FOR: Prrint number from 1 to 50 except the multiple of 3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == 0)
            continue;
        else
            cout << i << " ";
    }

    return 0;
}