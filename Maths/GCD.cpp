// We are given to integers and we have to find the gcd of two numbers

#include <bits/stdc++.h>
using namespace std;

int FindGCD(int a, int b)
{
    while (a && b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    if (!a)
        return b;

    return a;
}

int main()
{

    int a, b;

    cout << "Enter the Numbers : " << endl;
    cin >> a;
    cin >> b;

    cout << FindGCD(a, b);
}
