// CODE FOR: Rectangular Pattern

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int row, column;
    cin >> row >> column;

    // output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}