// CODE FOR: Numerical Pyramid Pattern

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "Size? ";
    int size;
    cin >> size;

    // output
    for (int i = 1; i <= size; i++)
    {
        // for space
        for (int j = 1; j <= (size - i); j++)
        {
            cout << " ";
        }

        // for asccending pattern
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }

        // for decending pattern
        for (int l = (i - 1); l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
    }

    return 0;
}