#include <iostream>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;

    ll current = 0;
    bool check = true;

    for (int i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;

        current += a;

        ll required = (ll)i * (i + 1) / 2;

        if (current < required)
        {
            check = false;
        }
    }

    if (check)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }

    return 0;
}