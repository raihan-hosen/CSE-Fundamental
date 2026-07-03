#include <iostream>
#include <string>
#include <cctype> // Required for isupper, tolower, etc.

using namespace std;

int main()
{
    string s;
    if (!(cin >> s))
        return 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        else if (islower(s[i]))
        {
            s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}