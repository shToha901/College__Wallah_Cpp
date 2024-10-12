// CODE FOR:  Addition of two number using function.

#include <bits/stdc++.h>
using namespace std;

// same function name different funtionality according to parameter

int add(int a, int b);                // function prototype
int add(int a, int b, int c);         // function prototype
float add(float a, float b, float c); // function prototype

int main()
{
    cout << "Enter two integer: ";
    int num1, num2;
    cin >> num1 >> num2;

    cout << "Enter three float: ";
    float x, y, z;
    cin >> x >> y >> z;

    cout << "Enter three integer: ";
    int number1, number2, number3;
    cin >> number1 >> number2 >> number3;

    int sum = add(num1, num2); // function calling
    cout << endl;
    cout << "Sum of two integer = " << sum << endl;
    cout << "Sum of three float = " << add(x, y, z) << endl;                     // function calling
    cout << "Sum of three integer = " << add(number1, number2, number3) << endl; // function calling

    return 0;
}

int add(int a, int b) // function defination
{
    int sum = a + b;
    return sum;
}

int add(int a, int b, int c) // function defination
{
    return a + b + c;
}

float add(float a, float b, float c) // function defination
{
    return a + b + c;
}