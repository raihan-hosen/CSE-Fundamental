#include <bits/stdc++.h>
using namespace std;

void solve(int n, string s)
{
    int count = 0, flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count = 0;
            flag = 0;
        }
        else
        {
            count++;
        }

        if (count == 4)
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
        int n;
        string s;

        cin >> n >> s;
        solve(n, s);
    }

    return 0;
}