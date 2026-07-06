#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;

        int check = 0;
        bool okay = false;

        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            if (c >= 3)
                okay = true;
            else if (c == 2)
                check++;
        }
        if (okay || check >= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
