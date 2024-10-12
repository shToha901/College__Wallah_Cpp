// CODE FOR:  All important function of <cmath>

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Constants
    const double pi = 3.14159265358979323846;
    const double e = 2.71828182845904523536;

    // Absolute value functions
    cout << "Absolute value functions" << endl;
    cout << "abs(-3) = " << abs(-3) << endl;       // Returns the absolute value of an integer
    cout << "fabs(-3.5) = " << fabs(-3.5) << endl; // Returns the absolute value of a floating-point number
    cout << endl;

    // Rounding functions
    cout << "Rounding functions" << endl;
    cout << "ceil(3.2) = " << ceil(3.2) << endl;   // Rounds up to the nearest integer
    cout << "floor(3.8) = " << floor(3.8) << endl; // Rounds down to the nearest integer
    cout << "round(3.5) = " << round(3.5) << endl; // Rounds to the nearest integer
    cout << "trunc(3.8) = " << trunc(3.8) << endl; // Truncates the decimal part, leaving the integer part
    cout << endl;

    // Floating point remainder functions
    cout << "Floating point remainder functions" << endl;
    cout << "fmod(5.3, 2.1) = " << fmod(5.3, 2.1) << endl;           // Returns the floating-point remainder of the division
    cout << "remainder(5.3, 2.1) = " << remainder(5.3, 2.1) << endl; // Returns the remainder of the division with the same sign as the dividend
    cout << endl;

    // Exponential and logarithm functions
    cout << "Exponential and logarithm functions" << endl;
    cout << "exp(5) = " << exp(5) << endl;         // Returns e raised to the power of the argument
    cout << "log(7) = " << log(7) << endl;         // Returns the natural logarithm (base e)
    cout << "log10(100) = " << log10(100) << endl; // Returns the base-10 logarithm
    cout << "log2(8) = " << log2(8) << endl;       // Returns the base-2 logarithm
    cout << "exp2(5) = " << exp2(5) << endl;       // Returns 2 raised to the power of the argument
    cout << endl;

    // Power functions
    cout << "Power functions" << endl;
    cout << "pow(2, 3) = " << pow(2, 3) << endl;     // Returns the result of raising the first argument to the power of the second argument
    cout << "sqrt(9) = " << sqrt(9) << endl;         // Returns the square root of the argument
    cout << "cbrt(27) = " << cbrt(27) << endl;       // Returns the cube root of the argument
    cout << "hypot(3, 4) = " << hypot(3, 4) << endl; // Returns the hypotenuse of a right-angled triangle with the given legs
    cout << endl;

    // Trigonometric functions
    cout << "Trigonometric functions" << endl;
    cout << "sin(pi/2) = " << sin(pi / 2) << endl; // Returns the sine of the argument (in radians)
    cout << "cos(pi) = " << cos(pi) << endl;       // Returns the cosine of the argument (in radians)
    cout << "tan(pi/4) = " << tan(pi / 4) << endl; // Returns the tangent of the argument (in radians)
    cout << endl;

    // Minimum, maximum, difference functions
    cout << "Minimum, maximum, difference functions" << endl;
    cout << "fmin(1, 2) = " << fmin(1, 2) << endl; // Returns the smaller of the two arguments
    cout << "fmax(1, 2) = " << fmax(1, 2) << endl; // Returns the larger of the two arguments
    cout << "fdim(1, 2) = " << fdim(1, 2) << endl; // Returns the positive difference between the two arguments
    cout << endl;

    return 0;
}
