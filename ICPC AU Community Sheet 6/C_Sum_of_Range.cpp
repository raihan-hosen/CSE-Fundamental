#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, sum = 0, evensum = 0, oddsum = 0;
    cin >> a >> b;

    if (a > b)
    {
        swap(a, b);
    }

    sum = ((b - a + 1) * (a + b)) / 2;

    long long int first_even = (a % 2 == 0) ? a : a + 1;
    long long int last_even = (b % 2 == 0) ? b : b - 1;

    if (first_even <= last_even)
    {
        long long int n_even = (last_even - first_even) / 2 + 1;
        evensum = (n_even * (first_even + last_even)) / 2;
    }

    oddsum = sum - evensum;

    cout << sum << "\n"
         << evensum << "\n"
         << oddsum << "\n";

    return 0;
}
