#include <bits/stdc++.h>
using namespace std;

void print_digits(long long n)
{
    if (n == 0)
    {
        return;
    }
    print_digits(n / 10);
    cout << n % 10 << " ";
}

void solve()
{
    long long n;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << "\n";
        return;
    }

    print_digits(n / 10);
    cout << n % 10 << "\n";
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
