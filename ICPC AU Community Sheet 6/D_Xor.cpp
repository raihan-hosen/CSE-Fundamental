#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, q;
    cin >> a >> b >> q;

    if (q % 3 == 1)
    {
        cout << a << "\n";
    }
    else if (q % 3 == 2)
    {
        cout << b << "\n";
    }
    else
    {
        cout << (a ^ b) << "\n";
    }

    return 0;
}
