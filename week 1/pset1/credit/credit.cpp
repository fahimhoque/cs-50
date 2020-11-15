#include <iostream>
#include <vector>
using namespace std;

//count size
int countDigit(long long n)
{
    if (n == 0)
        return 0;
    return 1 + countDigit(n / 10);
}

int main()
{

    long long int cc_number = 0;
    int size = 0;
    int sum = 0;

    cout << "Enter your card number: ";
    cin >> cc_number;
    size = countDigit(cc_number);

    if (size == 13 || size == 15 || size == 16)
    {

        //1st Case
        long long int working_CC = cc_number;
        while (working_CC > 0)
        {
            int lastDigit = working_CC % 10;
            sum = sum + lastDigit;
            working_CC = working_CC / 100;
        }
        //2nd Case
        working_CC = cc_number;
        working_CC = cc_number / 10;
        while (working_CC > 0)
        {
            int lastDigit = working_CC % 10;
            int doubleValue = lastDigit * 2;
            sum = sum + (doubleValue % 10) + (doubleValue / 10);
            working_CC = working_CC / 100;
        }
        //check first two/one digit
        long long int divisor = 10;
        for (int i = 0; i < size - 2; i++)
        {
            divisor = divisor * 10;
        }

        int firstTwoDigit = cc_number / (divisor / 10);

        // for VISA -> 40-49, Master -> 51-55, AMEX -> 34. 37
        if (sum % 10 == 0)
        {
            if (40 <= firstTwoDigit && firstTwoDigit <= 49)
            {
                cout << "VISA" << endl;
            }
            else if (51 <= firstTwoDigit && firstTwoDigit <= 55)
            {
                cout << "MASTER" << endl;
            }
            else if (firstTwoDigit == 34 || firstTwoDigit == 37)
            {
                cout << "AMEX" << endl;
            }
            else
            {
                cout << "INVALID" << endl;
            }
        }
        else
        {
            cout << "INVALID" << endl;
        }
    }
    else
    {
        cout << "INVALID" << endl;
    }
}