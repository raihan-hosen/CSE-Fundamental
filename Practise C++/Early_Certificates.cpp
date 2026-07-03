#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m;
    cin >> n >> m;

    string s1, s2;
    cin >> s1 >> s2;

    int limit = min(n, m);
    string ans = "";

    for (int i = 0; i < limit; i++)
    {
        if (s1[i] == s2[i])
        {
            ans += s1[i];
        }
        else
        {
            break;
        }
    }

    cout << ans << "\n";
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
