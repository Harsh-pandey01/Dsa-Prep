// We are given an array and we have to move the zeros to end , need not to sort

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums = {1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1};

    // Appprach 1 : - sort and get which will take o(n2)
    //  sort(nums.rbegin(),nums.rend()) ;

    // Approch 2 :- We have to interect with the same elements of the integer and hence we have to try using two pointers

    int s = 0, end = nums.size() - 1;
    while (s < end)
    {
        if (nums[s] == 0 && nums[end] == 1)
        {
            // swap them
            swap(nums[s++], nums[end--]);
        }
        else if (nums[s] == 1)
            s++;
        else if (nums[end] == 0)
            end--;
    }

    for (auto i : nums)
        cout << i << " ";
    return 0;
}
