#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 4, 5, 6, 7, 8, 9};
    int element;
    cout << "Enter the element :" << " ";
    cin >> element;

    int s = 0, e = arr.size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == element)
        {
            cout << "Got the element";
            break;
        }
        else if (arr[mid] > element)
            e = mid - 1;
        else
            s = mid + 1;
    }

    return 0;
}