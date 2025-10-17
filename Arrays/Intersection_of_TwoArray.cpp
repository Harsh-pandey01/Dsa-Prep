#include <bits/stdc++.h>
using namespace std;

vector<int> findIntersection(int *arr1, int *arr2, int size1, int size2)
{

    int i = 0, j = 0;
    vector<int> ans;

    while (i < size1 && j < size2)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return ans;
}

int main()
{

    int size1, size2;
    cout << "Enter size1 and size2" << endl;
    cin >> size1 >> size2;
    int *arr1 = new int[size1];
    int *arr2 = new int[size2];

    // Enter the element in the first array
    cout << "Enter the first array elements :" << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    cout << endl;
    cout << "Enter the second array elements :" << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    vector<int> ans = findIntersection(arr1, arr2, size1, size2);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}