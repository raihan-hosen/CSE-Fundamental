#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n <= 1)
    {
        cout << "Number of digits of " << n << "! is 1\n";
        return 0;
    }

    double log_sum = 0;
    for (int i = 1; i <= n; i++)
    {
        log_sum += log10(i);
    }

    long long digits = floor(log_sum) + 1;

    cout << "Number of digits of " << n << "! is " << digits << "\n";

    return 0;
}