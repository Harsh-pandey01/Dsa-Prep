#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[10] = {8, 7, 9, 5, 2, 1, 4, 6, 3, 0};

    //    Insertion sort

    for (int i = 0; i < 10; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
    for (auto i : arr)
        cout << i << " ";

    return 0;
}