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

int main()
{

    int num;
    cout << "Enter the Number" << endl;
    cin >> num;

    cout << findDigits(num);

    return 0;
}
