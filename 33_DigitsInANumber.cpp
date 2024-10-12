// CODE FOR: Counting the number of digits in a given number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "Number? ";
    int num;
    cin >> num;

    // output
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    cout << "Number of digits: " << count << endl;

    return 0;
}