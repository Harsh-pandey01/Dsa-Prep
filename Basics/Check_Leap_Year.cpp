#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void check(int &num)
{
    cout << &num << endl;
}

int main()
{

    int year;
    cout << "Enter the year " << endl;
    cin >> year;

    if (year % 400 == 0)
        cout << "It is a leap year";
    else if (year % 4 == 0 && year % 100 != 0)
        cout << "It is a leap year";
    else
        cout << "It is not a leap year";
    int val = 4;
    check(val);
    cout << &val;
    return 0;
}
