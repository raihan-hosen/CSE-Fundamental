#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count[26] = {0};

    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        count[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (count[i] > 0)
        {
            cout << (char)(i + 'a');
            count[i]--;
        }
    }

    return 0;
}
