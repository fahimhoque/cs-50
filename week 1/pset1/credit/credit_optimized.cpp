#include <bits/stdc++.h>
using namespace std;

int countDigit(long long int n)
{
    int count = floor(log10(n) + 1);
    return count;
}

bool checkValid(long long int cc_number, int size)
{
    int cc_number_array[size] = {0};
    for (int i = size - 1; i >= 0; i--)
    {
        cc_number_array[i] = cc_number % 10;
        cc_number /= 10;
    }

    //First case:
    int singleSum = 0;
    for (int i = size - 1; i >= 0; i = i - 2)
    {
        singleSum = singleSum + cc_number_array[i];
    }

    //Second Case
    int doubleSum = 0;
    int temp = 0;
    for (int i = size - 2; i >= 0; i = i - 2)
    {
        temp = 2 * cc_number_array[i];
        if (temp >= 10)
        {
            doubleSum += temp % 10; //12
            temp = temp / 10;
            doubleSum = doubleSum + temp;
        }
        else
        {
            doubleSum += temp;
        }
    }

    int totalSum = singleSum + doubleSum;
    int firstTwoDigits = (cc_number_array[0] * 10) + cc_number_array[1];
    if ((size == 13 || size == 16) && (40 <= firstTwoDigits && firstTwoDigits <= 49))
    {
        cout << "VISA" << endl;
    }
    else if ((size == 16) && (51 <= firstTwoDigits && firstTwoDigits <= 55))
    {
        cout << "MASTER" << endl;
    }
    else if ((size == 15) && (firstTwoDigits == 34 || firstTwoDigits == 37))
    {
        cout << "AMEX" << endl;
    }
    else
    {
        cout << "INVALID" << endl;
    }
}

int main()
{
    long long int cc_number;
    cout << "Enter credit card number: ";
    cin >> cc_number;
    int size = countDigit(cc_number);
    checkValid(cc_number, size);
}