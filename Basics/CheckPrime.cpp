// Problem Statement: Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Function to check if a
// given number is prime.
bool checkPrime(int n)
{
    // Initialize a counter variable to
    // count the number of factors.
    int cnt = 0;
    // Loop through numbers from 1 to n.
    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n = 1483;
    bool isPrime = checkPrime(n);
    if (isPrime)
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
