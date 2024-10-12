// CODE FOR: Inverted Trianular Pattern

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "Size? ";
    int size;
    cin >> size;

    // Output
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= (size - i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}