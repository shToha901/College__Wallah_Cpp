// CODE FOR: Hallow Rectangular Numberical Pattern

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "Rows & Columns? ";
    int row, column;
    cin >> row >> column;

    // Output
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if ((i == 1) || (i == row) || (j == 1) || (j == column))
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}