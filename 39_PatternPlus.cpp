// CODE FOR: Printing a plus pattern for an odd integer input

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "Odd Integer Input? ";
    int num;
    cin >> num;

    // output
    for(int i = 1; i <= num; i++)
    {
        for(int j = 1; j <= num; j++)
        {
            if( i == ((num+1)/ 2) || j == (((num+1)/ 2)))
            cout << "*";
            else
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}