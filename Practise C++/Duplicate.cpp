#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;

    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bool flag = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}