#include <bits/stdc++.h>
using namespace std;

void convert_binary(long long n)
{
    if (n == 0)
    {
        return;
    }
    convert_binary(n / 2);
    cout << n % 2;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        convert_binary(n);
        cout << endl;
    }
    return 0;
}