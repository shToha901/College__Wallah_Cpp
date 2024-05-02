// CODE FOR: Calculating profit or loss

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking input
    float costPrice, sellingPrice;
    cout << "Enter Cost Price: ";
    cin >> costPrice;
    cout << "Enter Selling Price: ";
    cin >> sellingPrice;

    // output
    if (costPrice > sellingPrice)
        cout << "Loss = " << (costPrice - sellingPrice) << " taka" << endl;
    else if (costPrice < sellingPrice)
        cout << "Profit = " << (sellingPrice - costPrice) << " taka" << endl;
    else
        cout << "No loss, no profit" << endl;

    return 0;
}