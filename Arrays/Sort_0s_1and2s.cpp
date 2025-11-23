// We are given an array with 0s 1s and 2s as eements , we want to sort it
#include <bits/stdc++.h>
using namespace std;

//  void count_Sort(vector<int> &nums)
// {

//     int one = 0, two = 0, zero = 0;

//     for (auto i : nums)
//     {
//         if (i == 1)
//             one++;
//         else if (i == 2)
//             two++;
//         else
//             zero++;
//     }

//     int index = 0;
//     while (zero)
//     {
//         nums[index++] = 0;
//         zero--;
//     }
//     while (one)
//     {
//         nums[index++] = 1;
//         one--;
//     }

//     while (two)
//     {
//         nums[index++] = 2;
//         two--;
//     }

//     for (auto i : nums)
//         cout << i << " ";
// }

int main()
{

    vector<int> nums = {1, 1, 1, 2, 2, 0, 0, 0, 1, 0, 2, 0, 2};
    // Approach 1 :- sort using sorting algorithm

    // Approach 2:- count and sort

    // count_Sort(nums);

    // Approach 3:- first sort 0s and then repeat the same with 1 and 2s ;

    // Approach 4:-using dutch flag agorithm
    // Sice we are dealing with the same elements and same array ke element k sath kuch kar rhe h toh mostly we are going to do is two pointers

    int low = 0, mid = 0, high = nums.size() - 1;

    while (mid <= high)
    {
        if (nums[mid] == 1)
            mid++;
        else if (nums[mid] == 0)
        {
            swap(nums[mid++], nums[low++]);
        }
        else
        {
            swap(nums[mid], nums[high--]);
        }
    }

    for (auto i : nums)
        cout << i << " ";

    return 0;
}
