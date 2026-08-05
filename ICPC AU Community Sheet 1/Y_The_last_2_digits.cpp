#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(ll a, ll b, ll c, ll d)
{
    ll n = (a % 100) * (b % 100) * (c % 100) * (d % 100);
    n %= 100;

    if (n < 10)
    {
        cout << "0" << n << endl;
    }
    else
    {
        cout << n << endl;
    }
}

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    solve(a, b, c, d);
    return 0;
}
