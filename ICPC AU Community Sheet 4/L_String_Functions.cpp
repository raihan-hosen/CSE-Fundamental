#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    while (q--)
    {
        string query;
        cin >> query;

        if (query == "pop_back")
        {
            s.pop_back();
        }
        else if (query == "front")
        {
            cout << s.front() << "\n";
        }
        else if (query == "back")
        {
            cout << s.back() << "\n";
        }
        else if (query == "sort")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            sort(s.begin() + (l - 1), s.begin() + r);
        }
        else if (query == "reverse")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            reverse(s.begin() + (l - 1), s.begin() + r);
        }
        else if (query == "print")
        {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << "\n";
        }
        else if (query == "substr")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            int len = r - l + 1;
            cout << s.substr(l - 1, len) << "\n";
        }
        else if (query == "push_back")
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }

    return 0;
}
