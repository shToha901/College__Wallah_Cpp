// CODE FOR: Numerical Triangular Pattern

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
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}