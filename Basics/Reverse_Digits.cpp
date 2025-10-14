// we are given an integer and we have to reverse the digits of the integer

#include <bits/stdc++.h>
using namespace std;

int reverseDigit(int num)
{
    int res = 0;

    while (num)
    {
        int digit = num % 10;
        num /= 10;

        if (res > INT_MAX / 10 || res < INT_MIN / 10)
            return 0;

        res = res * 10 + digit;
    }
    return res;
}

int main()
{

    int num;
    cout << "Enter the number : " << endl;
    cin >> num;

    cout << reverseDigit(num);

    return 0;
}
