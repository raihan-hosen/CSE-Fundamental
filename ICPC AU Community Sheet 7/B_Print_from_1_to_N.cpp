#include <bits/stdc++.h>
using namespace std;
void print_to_n(long long n)
{
    if (n < 1)
    {
        return;
    }
    print_to_n(n - 1);
    cout << n << endl;
}
int main()
{
    long long a;
    cin >> a;
    print_to_n(a);
    return 0;
}