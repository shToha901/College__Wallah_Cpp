// CODE FOR: Finding even and odd number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking input
    int number;
    cout << "Enter the number: ";
    cin >> number;

    // output
    if (number % 2 == 0)
    {
        cout << "Even!" << endl;
    }
    else
    {
        cout << "Odd!" << endl;
    }

    return 0;
}