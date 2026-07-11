#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

bool isPalindrome(const vector<ll> &a, int left, int right)
{
    if (left >= right)
    {
        return true;
    }

    if (a[left] != a[right])
    {
        return false;
    }

    return isPalindrome(a, left + 1, right - 1);
}

int main()
{
    int n;
    if (cin >> n)
    {
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (isPalindrome(a, 0, n - 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}