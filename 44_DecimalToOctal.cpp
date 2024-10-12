// CODE FOR: Converting Decimal to Octal

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "Enter Decimal Equivalent Number: ";
    int decimal;
    cin >> decimal;

    // output
    int i = 0, octal = 0;
    while (decimal > 0)
    {
        int piratyDigit = decimal % 8;       // finding last digit
        octal += (piratyDigit * pow(10, i)); // calculating octal
        decimal /= 8;                        // storing quotient
        i++;
    }

    cout << "Octal Equivalent Number: " << octal << endl;

    return 0;
}