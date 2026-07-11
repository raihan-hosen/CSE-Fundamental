#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll get_total_sum(const vector<ll> &v, ll n)
{
    if (n == 0)
    {
        return 0;
    }
    return get_total_sum(v, n - 1) + v[n - 1];
}

int main()
{
    ll n;
    if (cin >> n)
    {
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll total_sum = get_total_sum(v, n);
        double ans = (double)total_sum / n;

        cout << fixed << setprecision(6) << ans << endl;
    }
    return 0;
}