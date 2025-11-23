// we are given an array and all element appears twice except one element , find that element

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {1, 1, 2, 4, 2, 4, 5};
    int ans = 0;
    for (auto i : arr)
        ans = ans ^ i;

    cout << "ELement which appears one's is : " << ans;
}
