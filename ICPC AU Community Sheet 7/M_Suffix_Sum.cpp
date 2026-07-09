#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll suffixSum(const vector<ll> &a, ll index, ll m)
{
    if (m == 0)
    {
        return 0;
    }

    return a[index] + suffixSum(a, index - 1, m - 1);
}

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << suffixSum(a, n - 1, m);

    return 0;
}
