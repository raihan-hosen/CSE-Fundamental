#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll sum(ll n)
{

    if (n <= 0)
    {
        return 0;
    }
    ll a, result = 0;
    cin >> a;
    result += a;
    return result + sum(n - 1);
}
int main()
{
    ll n;
    cin >> n;
    cout << sum(n);
    return 0;
}