// CODE FOR: Checking a number is even and divisible by 3 or not

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking input
    int number;
    cout << "Enter the number: ";
    cin >> number;

    // output

    // using ternary operator
    (number % 2 == 0 && number % 3 == 0) ? cout << "Number is even and divisible by 3\n" : (number % 2 == 0 && number % 3 != 0) ? cout << "Number is even and not divisible by 3\n" : cout << "Number is odd\n";

    // using nested if-else
    if (number % 2 == 0 && number % 3 == 0)
        cout << "Number is even and divisible by 3" << endl;
    else if (number % 2 == 0 && number % 3 != 0)
        cout << "Number is even and not divisible by 3" << endl;
    else
        cout << "Number is odd" << endl;

    return 0;
}