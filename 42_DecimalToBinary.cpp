// CODE FOR:  Converting decimal to Binary number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "Enter Decimal Equivalent Number: ";
    int decimal;
    cin >> decimal;

    // output
    int parityDigit, binary = 0, i = 0;
    while (decimal > 0)
    {
        parityDigit = decimal % 2;            // finding remainder
        binary += (parityDigit * pow(10, i)); // bin = remainder * power of 10
        decimal /= 2;                         // getting the quotient
        i++;                                  // increase the power of 10 by 10
    }

    cout << "Binary Equivalent Number: " << binary << endl;

    return 0;
}