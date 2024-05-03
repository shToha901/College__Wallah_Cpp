// CODE FOR: Sum of N numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking input
    int num;
    cin >> num;

    // output

    // using while loop
    int i = 0, Wsum = 0; // loop variable
    while (i <= num)     // condition
    {
        Wsum += i;
        i++; // increment
    }
    cout << "Sum of first " << num << " numbers: " << Wsum << endl;

    // using for loop
    int Fsum = 0;
    for (int i = 0; i <= num; i++)
    {
        Fsum += i;
    }
    cout << "Sum of first " << num << " numbers: " << Fsum << endl;

    // using do-while loop
    int j = 0, Dsum = 0;
    do
    {
        Dsum += j;
        j++;
    } while (j <= num);
        cout << "Sum of first " << num << " numbers: " << Dsum << endl;

    return 0;
}