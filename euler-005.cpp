/*
https://projecteuler.net/problem=5

Smallest multiple

Ans: 232792560
*/
#include <iostream>
#define ull unsigned long long

using namespace std;

ull smallestMultiple()
{
    ull i = 20;
    bool n;
    while (true)
    {
        i++;
        n = false;
        for (ull fac = 1; fac <= 20; fac++)
        {
            if (i % fac)
            {
                n = true;
                break;
            }
        }

        if (n == false) // all divisible
            return i;
    }
    return 0;
}

int main()
{
    cout << smallestMultiple() << endl;
    return 0;
}