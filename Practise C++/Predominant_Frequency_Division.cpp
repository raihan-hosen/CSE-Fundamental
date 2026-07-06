#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> p1(n), p2(n);
    int current1 = 0, current2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            current1 += 1;
            current2 += 1;
        }
        else if (a[i] == 2)
        {
            current1 -= 1;
            current2 += 1;
        }
        else
        {
            current1 -= 1;
            current2 -= 1;
        }
        p1[i] = current1;
        p2[i] = current2;
    }

    vector<int> max_p2(n, -1e9);
    max_p2[n - 2] = p2[n - 2];
    for (int k = n - 3; k >= 0; k--)
    {
        max_p2[k] = max(p2[k], max_p2[k + 1]);
    }

    for (int i = 0; i < n - 2; i++)
    {
        if (p1[i] >= 0)
        {
            if (max_p2[i + 1] >= p2[i])
            {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
