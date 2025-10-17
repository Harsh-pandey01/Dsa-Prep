#include <bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int size)
{

    int s = 0;
    int e = size - 1;

    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    reverseArr(arr, 5);

    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}