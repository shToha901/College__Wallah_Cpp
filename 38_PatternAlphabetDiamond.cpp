// CODE FOR: Alphhabetical Diamond Pattern

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "Size? ";
    int size;
    cin >> size;

    // output

    // for upper triangle
    for (int i = 1; i <= size; i++)
    {
        // for upper trangular space
        for (int j = 1; j <= (size - i); j++)
        {
            cout << " ";
        }

        // for upper triangle
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << char(64 + k);
        }

        cout << endl;
    }

    // for lower triangle
    for (int a = 1; a <= (size - 1); a++)
    {
        // for lower triangular space
        for (int b = 1; b <= a; b++)
        {
            cout << " ";
        }

        // for lower triangle
        for (int c = 1; c <= ((size * 2) - (a * 2) - 1); c++)
        {
            if (a == (size - 1))
            {
                cout << char(65);
            }
            else
            {
                cout << char(64 + c);
            }
        }
        cout << endl;
    }

    return 0;
}