// CODE FOR: Pyramid Pattern

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
        // printing space
        for (int j = 1; j <= (size - i); j++)
        {
            cout << " ";
        }

        // printing star
        for (int k = 1; k <= (2 * i) - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}