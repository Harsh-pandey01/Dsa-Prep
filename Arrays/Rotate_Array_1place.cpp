// We are given an array and we have to reverse the array either to left or right by 1 place

#include <bits/stdc++.h>
using namespace std;

void left_Rotate(vector<int> &nums, int count)
{
    reverse(nums.begin(), nums.begin() + count);
    reverse(nums.begin() + count, nums.end());

    reverse(nums.begin(), nums.end());
}

void right_Rotate(vector<int> &nums, int k)
{
    reverse(nums.begin(), nums.begin() + nums.size() - k);
    reverse(nums.begin() + nums.size() - k, nums.end());

    reverse(nums.begin(), nums.end());
}

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> sec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    left_Rotate(nums, 3);
    right_Rotate(sec, 4);

    for (auto i : nums)
        cout << i << " ";

    for (auto i : sec)
        cout << i << " ";

    return 0;
}