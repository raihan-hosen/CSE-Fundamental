#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    long long int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (s[i] != '\\')
        {
            cout << s[i];
        }
        else
        {
            break;
        }
    }

    return 0;
}