#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    char grid[101][101];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int x, y;
    cin >> x >> y;

    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    bool allX = true;

    for (int i = 0; i < 8; i++)
    {
        int row = x + dx[i];
        int col = y + dy[i];

        if (row >= 1 && row <= n && col >= 1 && col <= m)
        {
            if (grid[row][col] != 'x')
            {
                allX = false;
                break;
            }
        }
    }

    if (allX)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}