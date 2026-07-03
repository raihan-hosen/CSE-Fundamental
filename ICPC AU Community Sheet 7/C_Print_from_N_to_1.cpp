#include <bits/stdc++.h>
using namespace std;
void print_to_n(long long n)
{
    if (n < 1)
    {
        return;
    }
    cout << n << " ";
    print_to_n(n - 1);
}
int main()
{
    long long n;
    cin >> n;
    print_to_n(n);
    return 0;
}