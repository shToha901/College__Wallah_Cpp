// CODE FOR: All the function avaliable in <iostream>

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. cout
    cout << "This is a message printed with cout." << endl; // Used for outputting to the console.

    // 2. cin
    int number;
    cout << "Enter a number: ";
    cin >> number; // Used for inputting from the console.
    cout << "You entered: " << number << endl;

    // Manipulating the output format

    // 3. ws.
    cout << "Enter a string with leading spaces: ";
    string input;
    cin >> ws; // Consumes the leading whitespace after enter the integer number above
    getline(cin, input);
    cout << "You entered: \"" << input << "\"" << endl;

    // 4. endl
    cout << "This is line one." << endl; // Inserts a newline character and flushes the stream.
    cout << "This is line two." << endl; // Inserts a newline character and flushes the stream.

    // 5. setw
    cin >> ws;
    string input2;
    cin >> setw(10) >> input2; // Sets the width for the next input/output field.
    cout << "setw(10) with input: " << input2 << endl;

    // 6. setfill
    cout << setfill('-') << setw(10) << "Hello" << endl; // Sets the fill character for padding.

    // 7. hex, dec, and oct
    int num = 255;
    cout << hex << uppercase << "Uppercase Hex: " << num << endl;   // Sets the base for integer output uppercase hexadecimal.
    cout << hex << nouppercase << "Lowercase Hex: " << num << endl; // Sets the base for integer output lowercase hexadecimal.
    cout << dec << "Dec: " << num << endl;                          // Sets the base for integer output decimal.
    cout << oct << "Oct: " << num << endl;                          // Sets the base for integer output octal.

    // 8. fixed and scientific
    // Sets the floating-point output format.
    double pi = 3.141592653589793;
    cout << fixed << "Fixed: " << pi << endl;           // This line outputs the value of pi in fixed-point notation
    cout << scientific << "Scientific: " << pi << endl; // This line outputs the value of pi in scientific notation

    // 9. setprecision
    cout << setprecision(4) << fixed << "Precision 4: " << pi << endl; // Sets the precision for floating-point output.

    return 0;
}