#include <bits/stdc++.h>
using namespace std;

long long getGCD(long long int a, long long int b)
{
    while (b != 0)
    {
        long long int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    long long int a, b;
    cin >> a >> b;

    long long int gcd = getGCD(a, b);

    long long int lcm = (a / gcd) * b;

    cout << gcd << " " << lcm << "\n";

    return 0;
}
