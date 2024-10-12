// CODE FOR: Sum of the series 1-2+3-4+5-6.....

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "n-th Position? ";
    int n;
    cin >> n;

    // output
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
        else
        {
            sum -= i;
        }
    }
    cout << "Sum of the series 1-2+3-4+5-6.... = " << sum << endl;
    return 0;
}