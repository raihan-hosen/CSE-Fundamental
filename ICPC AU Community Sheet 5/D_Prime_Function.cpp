#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;

    if (n <= 1)
    {
        cout << "NO\n";
        return;
    }

    bool is_prime = true;

    for (long long int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
