/*
https://projecteuler.net/problem=7

10001st prime

Ans: 104743
*/
#include <iostream>
#include <vector>

using namespace std;

int findPrime()
{
    vector<unsigned int> primes;
    primes.reserve(10001);
    primes.push_back(2);

    for (unsigned int i = 3; primes.size() <= 10000; i++)
    {
        bool isPrime = true;
        for (auto p : primes)
        {
            if (i % p == 0)
            {
                isPrime = false;
                break;
            }

            if (p * p > i)
                break;
        }

        if (isPrime)
            primes.push_back(i);
    }

    return primes.back();
}

int main()
{
    cout << findPrime() << endl;
    return 0;
}