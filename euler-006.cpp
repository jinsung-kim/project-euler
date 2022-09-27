/*
https://projecteuler.net/problem=6

Sum square difference

Ans: 25164150
*/
#include <iostream>
#define ll long long
#define ull unsigned long long

using namespace std;

ll sumSquare(ll n)
{
    ll res = 0;

    for (ll i = 1; i <= n; i++)
        res += (i * i);

    return res;
}

ll squareSum(ll n)
{
    ll res = 0, sum = 0;

    for (ll i = 1; i <= n; i++)
        sum += i;

    return (sum * sum);
}

int main()
{
    cout << squareSum(100) - sumSquare(100) << endl;
    return 0;
}