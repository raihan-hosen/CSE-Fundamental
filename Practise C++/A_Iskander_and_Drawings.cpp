#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int max_len = 0;
    int current_len = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '#')
        {
            current_len++;
            max_len = max(max_len, current_len);
        }
        else
        {
            current_len = 0;
        }
    }

    cout << (max_len + 1) / 2 << endl;
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