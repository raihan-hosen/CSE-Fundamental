// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int s, x, n, m;
//     cin >> x >> n;
//     m = n / 2;
//     s = (pow(x, 2) * (pow(x, 2 * m) - 1)) / (pow(x, 2) - 1);
//     cout << s << endl;

//     return 0;
// }

#include <iostream>

using namespace std;

// Custom function to calculate power without using built-in pow()
long long custom_pow(long long base, int exp)
{
    long long result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

// Custom function to solve the equation as required by the problem
long long calculate_series_sum(long long x, int n)
{
    long long sum = 0;

    // (X^0 - 1) is always 0, so we skip it and start the loop from i = 2
    for (int i = 2; i <= n; i += 2)
    {
        sum += custom_pow(x, i);
    }

    return sum;
}

int main()
{
    long long x;
    int n;

    if (cin >> x >> n)
    {
        // Call the user-defined function
        cout << calculate_series_sum(x, n) << endl;
    }

    return 0;
}
