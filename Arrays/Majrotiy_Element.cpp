// We are given an array and we have to find if any element present has cout > n/2 ;

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums = {4, 4, 2, 4, 3, 4, 4, 3, 2, 4};
    // Approahc - 1:- count and store o(n) and o(n)

    // Approach using sorting and then count the patch
    // sort the array
    // Find subarray of the same element and try to find the sizes of subarrray with same element , occurance
    // check if the size > n/2

    // Approach :- 3 using count method

    int cnt = 0;
    int element = nums[0];

    for (auto i : nums)
    {
        if (cnt == 0)
        {
            cnt = 1;
            element = i;
        }
        else if (i == element)
        {
            cnt++;
        }
        else
            cnt--;
    }

    // check for the element that if it is the maximum element

    cnt = 0;
    for (auto i : nums)
    {
        if (i == element)
            cnt++;
    }

    if (cnt > nums.size() / 2)
        cout << "Majority element is " << element;
    else
        cout << "No majority element";

    return 0;
}
