#include <bits/stdc++.h>
using namespace std;

int findSecondLargestElement(vector<int> arr)
{
    // Approach 1 :-When no duplicates are present

    // sort(arr.begin(), arr.end());
    // return arr[arr.size() - 2];

    // Approach 2 : -With the sorting and still the largest element present
    // sort(arr.begin(), arr.end());

    // int largest = arr[arr.size() - 1];
    // int index = arr.size() - 2;

    // while (index >= 0 && arr[index] == largest)
    //     index--;

    // if (index != -1)
    //     return arr[index];
    // else
    //     return -1;

    // Approach 3 :-
    int largest = arr[0];
    int secondLargest = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest)
            secondLargest = arr[i];
    }

    return secondLargest;
}

int main()
{

    vector<int> arr = {4, 4, 9, 9, 8, 5, 4, 1, 2, 4, 5, 6};
    // Approach 1 :- sort and return the last element

    // Approach 2 :=
    int ans = findSecondLargestElement(arr);
    cout
        << "Largest element is :- " << ans;

    return 0;
}
