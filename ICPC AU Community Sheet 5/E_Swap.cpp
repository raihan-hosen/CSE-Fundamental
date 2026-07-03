#include <bits/stdc++.h>
using namespace std;

void solve(long long int x, long long int y)
{
    swap(x, y);
    cout << x << " " << y << endl;
}
int main()
{
    long long int x, y;
    cin >> x >> y;
    solve(x, y);
    return 0;
}