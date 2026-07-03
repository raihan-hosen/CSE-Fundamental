#include <bits/stdc++.h>
using namespace std;

void print_n_to_1(long long n)
{
    if (n < 1)
    {
        return;
    }

    cout << n;

    if (n > 1)
    {
        cout << " ";
    }
    print_n_to_1(n - 1);
}

int main()
{
    long long n;
    if (cin >> n)
    {
        print_n_to_1(n);
    }
    return 0;
}
