// CODE FOR: Design of a basic calculator

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking input
    int num1, num2;
    char operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Operation(+, -, *, /, %): ";
    cin >> operation;

    // output
    switch (operation)
    {
    case '+':
        cout << "Number1 + Number2 = " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Number1 - Number2 = " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Number1 * Number2 = " << num1 * num2 << endl;
        break;
    case '/':
        cout << "Number1 / Number2 = " << num1 / num2 << endl;
        break;
    case '%':
        cout << "Number1 % Number2 = " << num1 % num2 << endl;
        break;
    default:
        cout << "Enter a valid operation" << endl;
        break;
    }

    return 0;
}