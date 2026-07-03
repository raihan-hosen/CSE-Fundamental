#include <bits/stdc++.h>
using namespace std;
void print_to_n(long long a)
{
    if (a < 1)
    {
        return;
    }
    cout << a << " ";
    print_to_n(a - 1);
}
int main()
{
    long long n;
    cin >> n;
    print_to_n(n);
    return 0;
}