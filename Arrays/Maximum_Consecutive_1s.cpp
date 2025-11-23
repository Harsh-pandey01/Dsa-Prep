// We are given an integer array and we have to find maximum consequtive integers having ones , or say subarray having maximum 1s

#include <bits/stdc++.h>
using namespace std;

int maxCount(vector<int> &nums)
{
    int ans = 0;
    int ptr = -1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == 1)
        {
            if (ptr == -1)
            {
                ptr = i;
            }
            ans = max(ans, i - ptr + 1);
        }
        else
        {
            if (ptr != -1)
                ptr = -1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {7, 3, 4, 1, 3, 2, 1, 1, 1};

    int maxCountOne = maxCount(nums);
    cout << "Maximum count is : " << maxCountOne;
}