// N = 5, array[] = {1,2,4,5} , Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array..

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {1, 6, 3, 4, 5};
    int size = 6;
    int ans = 0;

    for (auto i : arr)
        ans = ans ^ i;
    for (int i = 1; i <= size; i++)
        ans = ans ^ i;

    cout << ans << " is the missing integer";

    return 0;
}
