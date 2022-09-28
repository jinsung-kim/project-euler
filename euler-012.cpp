/*
https://projecteuler.net/problem=12

Highly divisible triangular number

Ans: 76576500
*/
#include <iostream>
#include <math.h>
#define ll long long
#define ull unsigned long long
#define HACK                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define BEGIN clock_t begin = clock();
#define END                \
    clock_t end = clock(); \
    cout << "Execucion time: " << (long double)(end - begin) / CLOCKS_PER_SEC << " ms\n";

using namespace std;

ull highlyDivisibleTriangularNumber()
{
    ull curr = 1, c = 2; // triangle number
    int factors;
    while (true)
    {
        curr += c;
        c++;

        factors = 0;
        for (ull i = 1; i <= sqrt(curr); i++) // TC: O(sqrt(n))
        {
            if (curr % i == 0)
            {
                if (curr / i == 0)
                    factors++;
                else
                    factors += 2;
            }

            if (factors > 500)
                break;
        }

        if (factors > 500)
            return curr;
    }

    return 0;
}

int main()
{
    HACK;
    BEGIN;

    cout << highlyDivisibleTriangularNumber() << endl;

    END;
    return 0;
}