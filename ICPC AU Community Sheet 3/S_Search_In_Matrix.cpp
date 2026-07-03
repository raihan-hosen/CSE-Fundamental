#include <iostream>
using namespace std;

void solve(int m, int n)
{
    long long int arr[m][n], x;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> x;
    bool res = false;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == x)
            {
                res = true;
                break;
            }
        }
    }

    if (res == true)
    {
        cout << "will not take number" << endl;
    }
    else
        cout << "will take number" << endl;
}

int main()
{
    int m, n;
    cin >> m >> n;
    solve(m, n);
    return 0;
}