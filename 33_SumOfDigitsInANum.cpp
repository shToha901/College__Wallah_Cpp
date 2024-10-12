// CODE FOR: Finding the sum of digits in a given number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "Number? ";
    int num;
    cin >> num;

    // output
    int sum = 0;
    while (num > 0)
    {
        sum += (num % 10);
        num /= 10;
    }
    cout << "Sum of digits: " << sum << endl;

    return 0;
}