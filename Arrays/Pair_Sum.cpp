#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> arr, int target)
{

    // Optimised approach
    int start = 0, end = arr.size() - 1;
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    while (start <= end)
    {
        if (arr[start] + arr[end] == target)
        {
            vector<int> temp = {arr[start], arr[end]};
            ans.push_back(temp);
            int startVa = arr[start], endVal = arr[end];
            while (arr[start] == startVa && start < end)
            {
                start++;
            }
            while (arr[end] == endVal && start < end)
            {
                end--;
            }
        }
        else if (arr[start] + arr[end] > target)
            end--;
        else
            start++;
    }

    return ans;
}

int main()
{

    vector<int> arr = {4, 7, 8, 5, 4, 1, 2, 4, 5, 6, 7};

    cout << "Enter the value of target : " << endl;
    int target;
    cin >> target;

    vector<vector<int>> ans = pairSum(arr, target);

    return 0;
}
