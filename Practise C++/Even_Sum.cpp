#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, temp, sum = 0;
    cin >> n;
    bool flag = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ((sum - v[i]) % 2 == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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