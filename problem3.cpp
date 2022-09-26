/*
https://projecteuler.net/problem=3
https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes

Ans: 6857
*/
#include <iostream>
#define ll long long
#define ull unsigned long long

using namespace std;

// Sieve of Eratosthenes approach
// Needs to be O(1) memory because space cannot be allocated on stack for input
ull largestFactor(ull n)
{
    ull i; // factor

    for (i = 2; i * i <= n; i++)
    {
        while (n % i == 0 && i != n)
            n /= i;
    }

    return n;
}

int main()
{
    cout << largestFactor(600851475143) << endl;
}