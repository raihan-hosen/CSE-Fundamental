#include <bits/stdc++.h>
using namespace std;

void recursion(long long n)
{
    if (n == 0)
    {
        return;
    }
    cout << "I love Recursion" << endl;
    recursion(n - 1);
}

int main()
{
    long long n;
    cin >> n;
    recursion(n);
    return 0;
}