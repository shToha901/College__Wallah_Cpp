// CODE FOR: Finding a letter is vowel or consonant using switch case

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking input
    char input;
    cout << "Enter the character: ";
    cin >> input;

    // output
    switch (input)
    {
    case 'a':
        cout << "Vowel" << endl;
        break;
    case 'A':
        cout << "Vowel" << endl;
        break;
    case 'e':
        cout << "Vowel" << endl;
        break;
    case 'E':
        cout << "Vowel" << endl;
        break;
    case 'i':
        cout << "Vowel" << endl;
        break;
    case 'I':
        cout << "Vowel" << endl;
        break;
    case 'o':
        cout << "Vowel" << endl;
        break;
    case 'O':
        cout << "Vowel" << endl;
        break;
    case 'u':
        cout << "Vowel" << endl;
        break;
    case 'U':
        cout << "Vowel" << endl;
        break;
    default:
        cout << "Consonant" << endl;
        break;
    }

    return 0;
}