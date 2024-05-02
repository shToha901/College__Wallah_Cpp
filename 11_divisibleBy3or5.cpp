// CODE FOR: Checking a number is divisible by 3 or 5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking input
    int number;
    cout << "Enter the number: ";
    cin >> number;

    // output
    if (number % 3 == 0 && number % 5 == 0)
        cout << number << " is divisible both 3 and 5\n";
    else if (number % 3 == 0 && number % 5 != 0)
        cout << number << " is only divisible by 3\n";
    else if (number % 3 != 0 && number % 5 == 0)
        cout << number << " is only divisible by 5\n";
    else
        cout << number << " is not divisible by both 3 and 5\n";

    return 0;
}