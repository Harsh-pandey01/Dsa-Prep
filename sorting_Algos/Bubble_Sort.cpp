#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[6] = {8, 5, 1, 2, 3, 4};

    //   Approach 1 : NO capturing of rounds

    // for (int rounds = 1; rounds <= 5; rounds++)
    // {
    //     for (int y = 0; y < 5; y++)
    //     {
    //         if (arr[y] > arr[y + 1])
    //             swap(arr[y], arr[y + 1]);
    //     }
    // }

    // for (int rounds = 1; rounds <= 5; rounds++)
    // {
    //     for (int y = 0; y < 6 - rounds; y++)
    //     {
    //         if (arr[y] > arr[y + 1])
    //             swap(arr[y], arr[y + 1]);
    //     }
    // }

    for (int rounds = 1; rounds <= 5; rounds++)
    {

        bool isSwapped = false;

        for (int y = 0; y < 5; y++)
        {
            if (arr[y] > arr[y + 1])
            {
                isSwapped = true;
                swap(arr[y], arr[y + 1]);
            }
        }
        if (!isSwapped)
            break;
    }

    for (auto i : arr)
        cout << i << " ";

    return 0;
}