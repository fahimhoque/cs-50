#include <bits/stdc++.h>
using namespace std;

int main()
{
    int key;
    string plaintext;
    cout << "Please enter the key: ";
    cin >> key;

    cin.ignore();
    cout << "Enter plain text: ";
    getline(cin, plaintext);
    for (int i = 0, n = plaintext.length(); i < n; i++)
    {
        if (isalpha(plaintext[i]))
        {
            int offset = 65;
            if (islower(plaintext[i]))
            {
                offset = 97;
            }
            int cipheredLetter = (((int)plaintext[i] - offset + key) % 26) + offset;
            cout << (char)cipheredLetter;
        }
        else
        {
            cout << plaintext[i];
        }
    }

    return 0;
}