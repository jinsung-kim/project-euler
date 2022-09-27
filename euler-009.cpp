/*
https://projecteuler.net/problem=9

Special Pythagorean triplet

a + (a + 1) + (a + 2) = 1000
3a + 3 = 1000 -> 997 = 3a -> approx. 333 (should be end point)

Natural numbers start at 1

Ans: 31875000
*/
#include <iostream>

using namespace std;

int pythagoreanTriplet()
{
    int c;

    for (int a = 1; a < 333; a++)
    {
        for (int b = a + 1; b < 500; b++) // guarantee that a < b
        {
            c = 1000 - a - b;
            if ((c < 0) || c <= b)
                break;
            if (((a * a) + (b * b)) == (c * c))
                return a * b * c;
        }
    }

    return -1;
}

int main()
{
    cout << pythagoreanTriplet() << endl;
    return 0;
}