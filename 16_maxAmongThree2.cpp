// CODE FOR: Finding maximum among three number using nested if-else

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking input
    int num1, num2, num3;
    cout << "Enter three number: ";
    cin >> num1 >> num2 >> num3;

    // output
    if (num1 > num2)
    {
        if (num1 > num3)
            cout << num1 << " is maximum\n";
        else
            cout << num3 << " is maximum\n";
    }
    else
    {
        if (num2 > num3)
            cout << num2 << " is maximum\n";
        else if (num3 > num2)
            cout << num3 << " is maximum\n";
        else
            cout << "Numbers are equal\n";
    }

    return 0;
}