#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp = 0;
    cin >> n;
    vector<int> nums(n), sum;

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        temp += nums[i];

        sum.push_back(temp);
    }

    cout << sum[0];
    for (int i = 1; i < n; i++)
    {
        cout << " " << sum[i];
    }

    return 0;
}
