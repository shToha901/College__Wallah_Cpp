// CODE FOR: Cross Pattern

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
        for (int j = 1; j <= size; j++)
        {
            if (i == j || i + j == size + 1)
            {
                cout << "*";
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
