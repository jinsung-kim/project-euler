/*
https://projecteuler.net/problem=4

Largest palindrome product

Ans: 906609
*/
#include <iostream>

using namespace std;

bool palindromeNumber(int n)
{
    int rev = 0, num = n;
    do
    {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    } while (n > 0);
    return num == rev;
}

int largestPalindromeProduct(int m, int n)
{
    int curr, res = 0;

    for (int i = m; i > 0; i--)
    {
        for (int j = n; j > 0; j--)
        {
            curr = i * j;
            if (palindromeNumber(curr))
                res = max(curr, res);
        }
    }

    return res;
}

int main()
{
    cout << largestPalindromeProduct(999, 999) << endl;
    return 0;
}