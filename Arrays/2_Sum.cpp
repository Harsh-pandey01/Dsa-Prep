// We are given an array and we have to find the pairs of intgers which are in should be in sorted order and we have to return the pairs having the sum equal to that

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int target)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end())
        {
            return "YES";
        }
        mpp[num] = i;
    }
    return "NO";
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}