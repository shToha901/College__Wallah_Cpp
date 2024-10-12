// CODE FOR: Reversing a number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "Number to reverse? ";
    int num;
    cin >> num;

    // output
    int reversed = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        num /= 10;
        reversed = reversed * 10 + lastDigit;
    }
    cout << "Reversed Number: " << reversed << endl;

    return 0;
}