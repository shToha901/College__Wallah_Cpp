// CODE FOR: Finding the first n factorial

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "n? ";
    int n;
    cin >> n;

    // output
    cout << "First n factoral:" << endl;
    for (int i = 0; i <= n; i++)
    {
        int factorial;
        if (i == 0)
        {
            factorial = 1;
        }
        else
        {
            factorial *= i;
        }
        cout << i << "! = " << factorial << endl;
    }

    return 0;
}