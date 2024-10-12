// CODE FOR:  Hallow Numerical Pyramid Pattern

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
        // printing space pattern
        for (int j = 1; j <= (size - i); j++)
        {
            cout << " ";
        }

        // printing hallow pyramid pattern
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            // hallow pattern
            if (k == 1 || k == (2 * i - 1))
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }

            // last line
            if (i == size)
            {
                for (; k <= (2 * i - 2); k++)
                {
                    cout << size;
                }
            }
        }
        cout << endl;
    }

    return 0;
}