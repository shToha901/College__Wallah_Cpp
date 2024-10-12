// CODE FOR: Triangular Pattern

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int size;
    cin >> size;

    // output
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}