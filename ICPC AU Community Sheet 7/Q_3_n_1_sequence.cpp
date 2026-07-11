#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll seq(ll n)
{
    if (n == 1)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return 1 + seq(n / 2);
    }
    else
    {
        return 1 + seq((3 * n) + 1);
    }
}

int main()
{
    ll n;
    if (cin >> n)
    {
        cout << seq(n) << "\n";
    }
    return 0;
}