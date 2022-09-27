/*
https://projecteuler.net/problem=1

Multiples of 3 or 5

Ans: 233168
*/
#include <iostream>
#define ll long long

using namespace std;

ll euler1(ll n)
{
    ll res = 0;
    for (ll i = 0; i < n; ++i)
    {
        res += ((i % 5 == 0) || (i % 3 == 0)) ? i : 0;
    }

    return res;
}

int main()
{
    cout << euler1(1000) << endl;
}