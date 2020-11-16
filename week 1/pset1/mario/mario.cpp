#include <bits/stdc++.h>

using namespace std;
int main()
{
    int height;
    do
    {
        cout << "Height: ";
        cin >> height;
    } while (!(height >= 1 && height <= 8));

    for (int row = 1; row <= height; row++)
    {
        for (int k = 1; k <= height - row; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= row; j++)
        {
            cout << "#";
        }
        cout << " ";
        cout << " ";
        for (int j = 1; j <= 1; j++)
        {
            cout << "#";
        }
    }
}