#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long long> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        // If the current element in A matches the one we need in B
        if (j < m && a[i] == b[j])
        {
            j++;
        }
    }

    // If j reached m, we found all elements of B in the correct order
    if (j == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}