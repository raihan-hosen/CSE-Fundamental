#include <iostream>

using namespace std;

int main()
{
    int n, m;
    if (!(cin >> n >> m))
        return 0;

    long long arr[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            cout << arr[i][j] << (j == 0 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}