// CODE FOR: Easy Numeric Rectangular Pattern

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "Rows & Coulmn? ";
    int row, coulmn;
    cin >> row >> coulmn;

    // output
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= coulmn; j++)
        {
            cout << j;
        }      cout << endl;
    }

    return 0;
}