// CODE FOR: Converting Octal to Binary

#include <bits/stdc++.h>
using namespace std;

int OctalToBinary(int octal);

int main()
{
    // input
    cout << "Enter Octal Equivalent Number: ";
    int octal;
    cin >> octal;

    // output
    cout << "Binary Equivalent Number: " << OctalToBinary(octal) << endl;

    return 0;
}

int OctalToBinary(int octal)
{
    // converting octal to decimal
    int i = 0, decimal = 0;
    while (octal > 0)
    {
        int lastDigit = octal % 10;
        if (lastDigit > 7)
        {
            cout << "Please enter correct octal number (digits between 0-7)." << endl;
            return -999999;
        }
        else // number is a octal
        {
            decimal += (lastDigit * pow(8, i));
            octal /= 10;
            i++;
        }
    }

    // converting decimal to binary
    int parityDigit, binary = 0, i = 0;
    while (decimal > 0)
    {
        parityDigit = decimal % 2;            // finding remainder
        binary += (parityDigit * pow(10, i)); // bin = remainder * power of 10
        decimal /= 2;                         // getting the quotient
        i++;                                  // increase the power of 10 by 10
    }

    return binary;
}