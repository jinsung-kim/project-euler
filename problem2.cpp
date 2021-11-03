/*
https://projecteuler.net/problem=2

Ans: 4613732
*/
# include <iostream>
# define ll long long

using namespace std;

ll fibSumEvens(ll n) {
    ll res = 0;
    ll prev = 1, curr = 1;

    while (curr <= 4000000) {
        if ((curr & 1) == 0) res += curr;
        ll temp = curr;
        curr = prev + curr;
        prev = temp;
    }

    return res;
}

int main() {
    cout << fibSumEvens(1000) << endl;
}