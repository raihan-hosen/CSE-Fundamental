#include <bits/stdc++.h>
using namespace std;

long long sumDiv(long long n, long long x)
{
    long long k = n / x;
    return x * k * (k + 1) / 2;
}

int main()
{
    long long A, B, X;
    cin >> A >> B >> X;

    if (A > B)
        swap(A, B);

    cout << sumDiv(B, X) - sumDiv(A - 1, X);

    return 0;
}