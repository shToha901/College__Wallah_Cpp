// CODE FOR: Devide people upon their ages

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking input
    int age;
    cout << "Enter the age: ";
    cin >> age;

    // output
    if (age >= 0 && age < 12)
    {
        cout << "Child" << endl;
    }
    else if (age >= 12 && age <= 18)
    {
        cout << "Teenager" << endl;
    }
    else if (age > 18 && age < 60)
    {
        cout << "Adult" << endl;
    }
    else if (age >= 60)
    {
        cout << "Senior Citizen" << endl;
    }
    else
    {
        cout << "Enter a valid age" << endl;
    }

    return 0;
}