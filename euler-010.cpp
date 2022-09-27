/*
https://projecteuler.net/problem=10

Summation of primes under 2 mil

Ans: 142913828922
*/
#include <iostream>
#define ull unsigned long long

using namespace std;

ull summationOfPrimes(ull under)
{
    ull res = 2; // two is prime but skipped
    bool p[under + 1];
    memset(p, true, sizeof(p));

    for (ull i = 3; i <= under; i += 2) // skip evens
    {
        if (p[i])
        {
            res += i;
            for (ull j = 2 * i; j <= under; j += i)
                p[j] = false;
        }
    }

    return res;
}

int main()
{
    cout << summationOfPrimes(2000000) << endl;
    return 0;
}