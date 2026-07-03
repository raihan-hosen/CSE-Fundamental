#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n1, n2, index;
    cin >> n1;

    vector<long long int> v1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> v1[i];
    }

    cin >> n2;
    vector<long long int> v2(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> v2[i];
    }

    cin >> index;

    v1.insert(v1.begin() + index, v2.begin(), v2.end());

    for (int x : v1)
    {
        cout << x << " ";
    }
}