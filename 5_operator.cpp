#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 9;

    // Arithmetic Operator
    cout << "Arithmetic Operator" << endl;
    cout << "a = " << a << " b = " << b << endl;
    cout << "Addition: a + b = " << a + b << endl;       // 14;
    cout << "Subtraction: a - b = " << a - b << endl;    //-4
    cout << "Multiplication: a * b = " << a * b << endl; // 45
    cout << "Division: a / b = " << a / b << endl;       // 0
    cout << "Modulus: a % b = " << a % b << endl;        // 5
    cout << "Post-increment: a++ = " << a++ << " " << "Pre-increment: ++a = " << ++a << endl; // 5 7
    cout << "Post-decrement: b-- = " << b-- << " "<< "Pre-decrement: --b = " << --b << endl << endl; // 9 7

    int c = 10, d = 15;

    // Logical Operator
    cout << "Logical Operator" << endl;
    cout << "c = " << c << " d = " << d << endl;
    cout << "Equal to: (c == d) = " << (c == d) << endl;              // false(0)
    cout << "Not equal to: (c != d) = " << (c != d) << endl;          // true(1)
    cout << "Greater than: (c > d) = " << (c > d) << endl;            // falsea(0)
    cout << "Less than: (c < d) = " << (c < d) << endl;               // true(1)
    cout << "Greater than or equal: (c >= d) = " << (c >= d) << endl; // false(0)
    cout << "Less than or equal: (c <= d) = " << (c <= d) << endl << endl; // true(1)

    int e = 6, f = 3, g = 10, h = 33, i = 9;

    // Assignment Operator
    cout << "Assignment Operator" << endl;
    cout << "e = " << e << " f = " << f << " g = " << g << " h = " << h << " i = " << i << endl;
    f = 7;                                       // assign operator
    cout << "Assign: (f = 7) f = " << f << endl; // 7
    e += 3;
    cout << "(e += 3) = " << e << endl; // 9
    f -= 3;
    cout << "(f -= 3) = " << f << endl; // 4
    g *= 3;
    cout << "(g *= 3) = " << g << endl; // 30
    h /= 3;
    cout << "(h /= 3) = " << h << endl; // 11
    i %= 4;
    cout << "(i %= 4) = " << i << endl << endl; // 1

    int x = 10, y = 20; // 1010, 10100

    // Bitwise Operator
    cout << "Bitwise Operator" << endl;
    cout << "x = " << x << " y = " << y << endl;
    cout << "Bitwise Complement: ~(x) = " << ~(x) << endl;  // 0101 = 5
    cout << "Left Shift: (x << 1) = " << (x << 1) << endl;  // 10100 = 20
    cout << "Right Shift: (x >> 1) = " << (x >> 1) << endl; // 101 = 5
    cout << "Bitwise AND: (x & y) = " << (x & y) << endl;   // 0
    cout << "Bitwise OR: (x | y) = " << (x | y) << endl;    // 11110 = 30
    cout << "Bitwise XOR: (x ^ y) = " << (x ^ y) << endl << endl; // 11110 = 30

    // Misc Operator
    cout << "Misc Operator" << endl;
    cout << "Sizeof(double) = " << sizeof(double) << endl;         // sizeof: 8
    (5 % 2 == 0) ? cout << "Even" << endl : cout << "Odd" << endl; // ternary: Odd
    float z = 3.1416;
    cout << int(z) << endl; // type-casting: 3
    cout << &z << endl;     // address: address of variable z

    return 0;
}