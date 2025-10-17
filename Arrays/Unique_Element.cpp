#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5] = {1, 5, 1, 2, 5};

    int ans = 0;
    for (auto i : arr)
    {
        ans = ans ^ i;
    }

    cout << "Unique element is : " << ans;

    return 0;
}
