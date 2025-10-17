//  We are given a number and we have to find the number of zeros in the last of factorial of n ;

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "Enter the number " << endl;
    cin >> num;

    int ans = 0;

    while (num >= 5)
    {
        ans += num / 5;
        num /= 5;
    }

    cout << "Trailing Zeros are : " << ans << endl;

    return 0;
}
