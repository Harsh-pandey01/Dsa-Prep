// We have to find the largest element in an array

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {4, 7, 8, 5, 4, 1, 2, 4, 5, 6, 7};
    // Approach 1 :- sort and return the last element

    // Approach 2 :=
    int ans = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > ans)
            ans = arr[i];
    }

    cout << "Largest element is :- " << ans;

    return 0;
}
