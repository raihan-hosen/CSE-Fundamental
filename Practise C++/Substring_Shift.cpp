#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'z')
        {
            while (i < n && s[i] == 'z')
            {
                s[i] = 'a';
                i++;
            }
            break;
        }
    }

    cout << s << endl;
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