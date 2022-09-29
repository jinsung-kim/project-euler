/*
https://projecteuler.net/problem=14

Longest Collatz Sequence under 1 million
n → n/2 (n is even)
n → 3n + 1 (n is odd)

Ans: 837799 (produces 525)
*/
#include <iostream>
#include <unordered_map>
#define ll long long
#define ull unsigned long long
#define HACK                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define BEGIN clock_t begin = clock();
#define END                \
    clock_t end = clock(); \
    cout << "Execution time: " << (long double)(end - begin) / CLOCKS_PER_SEC << " ms\n";

using namespace std;

ull collatz(ull n)
{
    ull len = 1;

    while (n != 1)
    {
        if (n & 1)
            n = 3 * n + 1;
        else
            n /= 2;
        len++;
    }

    return len;
}

ull longestCollatz()
{
    ull longest = 0, curr, res = 0;

    for (ull i = 13; i < 1000000; i++)
    {
        curr = collatz(i);
        if (curr > longest)
            res = i, longest = curr;
    }

    return res;
}

int main()
{
    HACK;
    BEGIN;
    cout << longestCollatz() << endl;
    END;
    return 0;
}