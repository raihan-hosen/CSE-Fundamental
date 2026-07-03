#include <bits/stdc++.h>
using namespace std;

long long int getfact(long long int x)
{
    long long int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    long long a, b;
    cin >> a >> b;
    long long int fact_a = getfact(a);
    long long int fact_b = getfact(b);
    long long int fact_ab = getfact(a - b);

    long long int ncr = fact_a / (fact_b * (fact_ab));
    long long int npr = fact_a / fact_ab;

    cout << ncr << " " << npr << endl;
    return 0;
}