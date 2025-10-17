#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    int arr[3] = {10, 20, 30};

    cout << "arr:     " << arr << endl;
    cout << "&arr:    " << &arr << endl;
    cout << "&arr[0]: " << &arr[0] << endl;

    cout << "arr + 1:     " << arr + 1 << endl;  // +4 bytes
    cout << "&arr + 1:    " << &arr + 1 << endl; // +12 bytes

    return 0;
}
