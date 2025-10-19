#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5] = {5, 7, 2, 4, 6};

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }

    for (auto i : arr)
        cout << i << " ";

    return 0;
}