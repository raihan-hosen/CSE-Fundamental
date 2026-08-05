#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(ll a, ll b)
{
    int floor_res = a / b;
    int ceil_res = (a + b - 1) / b;
    int round_res = (a + b / 2) / b;

    cout << "floor " << a << " / " << b << " = " << floor_res << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil_res << endl;
    cout << "round " << a << " / " << b << " = " << round_res << endl;
}

int main()
{
    ll a, b;
    cin >> a >> b;
    solve(a, b);
    return 0;
}