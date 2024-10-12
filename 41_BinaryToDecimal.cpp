// CODE FOR: Converting Binary to Decimal number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "Enter Binary Equivalent Number: ";
    int binary;
    cin >> binary;

    // output
    int i = 0, decimal = 0;
    while (binary > 0)
    {
        int lastDigit = (binary % 10); // finding last digits

        if (lastDigit > 1)
        {
            cout << "Please enter a correct binary number (digits are 0/1)." << endl;
            return 0;
        }
        else
        {
            decimal += (lastDigit * pow(2, i)); // last digits * 2^n-1
            binary /= 10;                       // decrease the last digits
            i++;
        }
    }

    cout << "Decimal Equivalent Number : " << decimal << endl;

    return 0;
}