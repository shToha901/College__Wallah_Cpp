// CODE FOR: Two Case Rectangular Numerical Pattern

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "Rows & Column? ";
    int row, column;
    cin >> row >> column;

    // output
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            ((i + j) % 2 == 0) ? cout << "1" : cout << "2";
        }
        cout << endl;
    }

    return 0;
}