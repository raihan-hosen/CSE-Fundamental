#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, x, y;
    cin >> n >> x >> y;
    long long int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        swap(arr[x - 1][i], arr[y - 1][i]);
    }

    for (int i = 0; i < n; i++)
    {
        swap(arr[i][x - 1], arr[i][y - 1]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}