#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t != 0)
    {
        long long int a, b;
        cin >> a >> b;

        long long int m = min(a, b);
        long long int n = max(a, b);

        long long int sum_to_n = (n * (n + 1)) / 2;

        long long int sum_to_m_minus_1 = ((m - 1) * m) / 2;

        long long int total_sum = sum_to_n - sum_to_m_minus_1;

        cout << total_sum << endl;
        t--;
    }
    return 0;
}