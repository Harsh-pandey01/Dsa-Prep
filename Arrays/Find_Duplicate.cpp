#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ i ^ arr[i];
    }

    return ans;
}

int main()
{

    int arr[5] = {1, 2, 2, 4, 3};
    cout << findDuplicate(arr, 5);

    return 0;
}