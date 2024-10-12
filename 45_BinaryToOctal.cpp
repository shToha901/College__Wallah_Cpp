// CODE FOR: Converting Binary to Octal

#include <bits/stdc++.h>
using namespace std;

int BinaryToOctal(int binary);

int main()
{
    // input
    cout << "Enter Binary Equivalent Number: ";
    long long int binary;
    cin >> binary;

    // output
    cout << "Octal Equivalent Number: " << BinaryToOctal(binary) << endl;

    return 0;
}

int BinaryToOctal(int binary)
{
    // converting binary to decimal
    int i = 0, decimal = 0;
    while (binary > 0)
    {
        int lastDigit = binary % 10;

        if (lastDigit > 1)
        {
            cout << "Please Enter a correct binary number (Digits 0/1)." << endl;
            return -9999999;
        }

        decimal += (lastDigit * pow(2, i));
        binary /= 10;
        i++;
    }

    // converting decimal to octal
    int j = 0, octal = 0;
    while (decimal > 0)
    {
        int parityDigit = decimal % 8;
        octal += (parityDigit * pow(10, j));
        decimal /= 8;
        j++;
    }
    return octal;
}