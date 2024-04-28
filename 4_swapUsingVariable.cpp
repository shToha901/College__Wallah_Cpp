#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;  // Declearing variable
    // Taking input of a & b
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    // Swaping using third variale
    temp = a;
    a = b;
    b = temp;
    // Printing swaped number
    cout << "a: " << a << endl << "b: " << b << endl;
    return 0;
}