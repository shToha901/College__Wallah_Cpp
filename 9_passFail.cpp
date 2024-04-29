// CODE FOR: Finding pass or fail

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking input
    float number;
    cout << "Enter number: ";
    cin >> number;

    // output

    // using ternary operator
    // (number >= 33) ? (number >= 80) ? cout << "Gracefully pass!" << endl : cout << "Pass!" << endl : cout << "Fail!";

    // usinf nested if-else
    if (number >= 33)
    {
        if (number >= 80)
            cout << "Gracefully pass!" << endl;
        else
            cout << "Pass!" << endl;
    }
    else
        cout << "Fail!";

    return 0;
}