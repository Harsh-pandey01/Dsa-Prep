#include <bits/stdc++.h>
using namespace std;

void SwapAlternate(int arr[], int size)
{
    if (size == 1)
        return;
    int s = 0;
    int e = 1;

    while (e < size)
    {
        swap(arr[s], arr[e]);
        s += 2;
        e += 2;
    }
}

int main()
{

    int arr[4] = {1, 2, 3, 4};
    SwapAlternate(arr, 5);

    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}