#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    int freq[26] = {0};
    for (char c : s)
    {
        freq[c - 'a']++;
    }

    int odd_count = 0;
    for (int i = 0; i < 26; ++i)
    {
        if (freq[i] % 2 != 0)
        {
            odd_count++;
        }
    }

    if (odd_count <= 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << odd_count - 1 << endl;
    }
}

int main()
{
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        solve();
    }
    return 0;
}