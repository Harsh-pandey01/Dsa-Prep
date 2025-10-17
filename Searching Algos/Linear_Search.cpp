#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            return i;
    }

    return -1;
}

int main()
{

    int arr[5] = {5, 3, 8, 9, 6};
    int index = linearSearch(arr, 5, 8);

    cout << "Element is at index " << index;

    return 0;
}
