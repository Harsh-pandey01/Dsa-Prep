// We are given a number and we have to tell them where it comes as in the power of 2 or not

// Approach 1 :- Divide it and if u recieve and remainder other than 0 , them it is not a power of 2
// here the time complexity will be 0(logn)

// Approch2 :- We are having a number -> lets say 8 - 1000 , the 7 will look like 0111 , what if we do bitwise & of both then if rem == 0

#include <bits/stdc++.h>
using namespace std;

int checkIfPowerOfTwo(int num)
{
    return num & (num - 1);
}

int main()
{

    // lets accept a number
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    int isPower = checkIfPowerOfTwo(num);
    if (!isPower)
        cout << "Given number is Power of 2" << endl;
    else
        cout << "Not power Of two";

    return 0;
}
