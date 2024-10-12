// CODE FOR: Converting Octal to Decimal

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "Enter Octal Equivalent Number: ";
    int octal;
    cin >> octal;

    // output
    int i = 0, decimal = 0;
    while (octal > 0)
    {
        int lastDigit = octal % 10; // finding the last digit

        if (lastDigit > 7) // if number is not octal
        {
            cout << "Please enter a correct octal number (digits between 0-7)." << endl;
            return 0;
        }
        else // number is a octal
        {
            decimal += (lastDigit * pow(8, i));
            octal /= 10;
            i++;
        }
    }

    cout << "Decimal Equivalent Number: " << decimal << endl;

    return 0;
}