// CODE FOR: Numeric Rectangular Pattern

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
        // first triangle
        for (int j = i; j <= size; j++)
        {
            cout << j;
        }

        // second triangle
        for (int k = 2; k <= i; k++)
        {
            cout << k - 1;
        }
        cout << endl;
    }

    return 0;
}