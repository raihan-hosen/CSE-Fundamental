#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<long long> a(n + 1);
    vector<long long> pre(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pre[i] = pre[i - 1] + a[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        long long rangeSum = pre[r] - pre[l - 1];
        cout << rangeSum << "\n";
    }

    return 0;
}