// We are given a number and we have to find whether a number is armstrong number or not
// Armstrong number is the number whose sum of digits to the power of length is equal to the number
// 371 = 33 + 73 + 13 -> powers are there

#include <bits/stdc++.h>
using namespace std;

int findDigits(int num)
{
    int digits = 0;

    while (num)
    {
        num /= 10;
        digits += 1;
    }

    return digits;
}

void checkArmsStrong(int num, int digit)
{
    int initaial = num;

    int res = 0;

    while (num)
    {
        int unit = num % 10;
        num /= 10;
        res = res + pow(unit, digit);
    }

    if (res == initaial)
        cout << "It is an armstrong Number";
    else
        cout << "It is not";
}

int main()
{

    cout << "Enter the number :" << endl;
    int num;
    cin >> num;

    // Approach 1 :- find the number of digits and then find if it is a armstrong number or not

    int digits = findDigits(num);

    checkArmsStrong(num, digits);

    return 0;
}
