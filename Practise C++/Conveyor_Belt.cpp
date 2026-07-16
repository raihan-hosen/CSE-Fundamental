#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n, p;
    cin >> n >> p;

    string s;
    cin >> s;

    ll left = 0;
    ll right = 0;

    for (int i = 0; i < p; i++)
    {
        if (s[i] == 'R')
        {
            left++;
        }
    }

    for (int i = p - 1; i < n; i++)
    {
        if (s[i] == 'L')
        {
            right++;
        }
    }

    cout << min(left, right) << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}