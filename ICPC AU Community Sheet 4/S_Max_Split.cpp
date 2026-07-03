#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int r_count = 0;
    int l_count = 0;
    int total_balanced = 0;

    vector<string> results;
    string current_string = "";

    for (int i = 0; i < s.length(); i++)
    {
        current_string += s[i];

        if (s[i] == 'R')
        {
            r_count++;
        }
        else
        {
            l_count++;
        }

        if (r_count == l_count)
        {
            total_balanced++;
            results.push_back(current_string);

            current_string = "";
            r_count = 0;
            l_count = 0;
        }
    }

    cout << total_balanced << endl;

    for (const string &res : results)
    {
        cout << res << endl;
    }

    return 0;
}