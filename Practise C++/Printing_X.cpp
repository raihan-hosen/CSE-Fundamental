#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int r = 0; r < N; r++)
    {
        for (int c = 0; c < N; c++)
        {
            if (r == c && r + c == N - 1)
            {
                cout << "X";
            }
            else if (r == c)
            {
                cout << "\\";
            }
            else if (r + c == N - 1)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
