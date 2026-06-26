#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<long long int> v1(n), v2(n), c;

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    c.reserve(v1.size() + v2.size());
    c.insert(c.end(), v2.begin(), v2.end());
    c.insert(c.end(), v1.begin(), v1.end());

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}