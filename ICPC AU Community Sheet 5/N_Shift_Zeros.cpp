#include <bits/stdc++.h>
using namespace std;

void shiftZeros(vector<long long int> &v, long long int n)
{
    vector<long long int> result;

    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            result.push_back(v[i]);
        }
    }

    while (result.size() < n)
    {
        result.push_back(0);
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << "\n";
}

int main()
{
    long long int n;
    cin >> n;

    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // Call the function
    shiftZeros(v, n);

    return 0;
}