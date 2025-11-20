#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number for a complement :- " << endl;
    cin >> num;

    int original = num; // store before modifying
    int ans = 0;
    int index = 0;

    while (num > 0)
    {
        int remain = num & 1; // get last bit
        remain = remain ^ 1;  // flip it

        ans = ans + (remain << index); // more efficient than pow(2, index)

        num = num >> 1; // divide by 2
        index++;
    }

    cout << "Complement of " << original << " is " << ans << endl;

    return 0;
}
