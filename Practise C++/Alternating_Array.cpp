#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;

    long long int pattern1 = 0;
    long long int pattern2 = 0;

    for (int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;

        if (a % 2 != i % 2)
        {
            pattern1++;
        }

        if (a % 2 != (i + 1) % 2)
        {
            pattern2++;
        }
    }

    cout << min(pattern1, pattern2) << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}