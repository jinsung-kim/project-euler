/*
https://projecteuler.net/problem=15

Lattice paths

Ans: 137846528820
*/
#include <iostream>
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

ull latticePaths()
{
    ull i = 1;
    ull grid[21][21];

    for (int i = 0; i < 21; i++)
    {
        grid[i][0] = 1;
        grid[0][i] = 1;
    }

    for (int i = 1; i < 21; i++)
        for (int j = 1; j < 21; j++)
            grid[i][j] = grid[i][j - 1] + grid[i - 1][j];

    return grid[20][20];
}

int main()
{
    HACK;
    BEGIN;

    cout << latticePaths() << endl;

    END;
    return 0;
}