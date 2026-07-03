#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        bool isGood = false;
        int n = s.length();

        if (n >= 3)
        {
            for (int i = 0; i <= n - 3; i++)
            {
                if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') ||
                    (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
                {
                    isGood = true;
                    break;
                }
            }
        }

        if (isGood)
        {
            cout << "Good" << "\n";
        }
        else
        {
            cout << "Bad" << "\n";
        }
    }

    return 0;
}