#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        long long int length = s.length();

        if (length > 10)
        {
            cout << s[0] << length - 2 << s[length - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}