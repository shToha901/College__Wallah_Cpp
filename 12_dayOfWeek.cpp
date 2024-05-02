// CODE FOR: Prnting week day against number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking input
    int number;
    cout << "Enter the number: ";
    cin >> number;

    // output
    switch (number)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Please enter a valid number" << endl;
        break;
    }

    return 0;
}