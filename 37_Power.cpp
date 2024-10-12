// CODE FOR: Diven number a & b, finding a^b

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "Base & Power? ";
    int base, power;
    cin >> base >> power;

    // output
    int answer = 1;
    for (int i = 1; i <= power; i++)
    {
        answer *= base;
    }
    cout << "Base^Power = " << answer << endl;

    return 0;
}