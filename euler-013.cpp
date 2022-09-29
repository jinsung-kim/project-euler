/*
https://projecteuler.net/problem=13

Large sum

To handle overflow -> use a vector and add up each place

Ans: 5537376230
*/
#include <iostream>
#include <vector>
#include <fstream>
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

void largeSum()
{
    vector<vector<int>> nums;
    // Read in the file
    ifstream file("euler-013.txt");
    string tp;
    while (getline(file, tp))
    {
        nums.push_back(vector<int>());
        for (char c : tp)
        {
            nums.back().push_back(c - '0');
        }
    }
    file.close();
    vector<int> sum(52, 0);

    int carry = 0, curr;

    for (int i = 49; i >= 0; i--)
    {
        curr = carry;
        for (auto num : nums)
            curr += num[i];
        carry = curr / 10;
        sum[i] = curr % 10;
    }

    for (int i = 51; i >= 0; i--) // shifting overflow to extra space
        sum[i] = sum[i - 2];

    sum[0] = carry % 10;
    carry /= 10;
    sum[1] = carry % 10;

    for (int i = 0; i < 10; i++)
        cout << sum[i];

    cout << endl;
}

int main()
{
    HACK;
    BEGIN;

    largeSum();

    END;
    return 0;
}