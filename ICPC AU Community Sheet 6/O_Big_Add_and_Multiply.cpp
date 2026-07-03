#include <bits/stdc++.h>
using namespace std;

string add(string n)
{
    string res = "";
    int carry = 9999;
    int i = n.length() - 1;

    while (i >= 0 || carry > 0)
    {
        if (i >= 0)
        {
            carry += (n[i] - '0');
            i--;
        }
        res += to_string(carry % 10);
        carry /= 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

string multiply(string n)
{
    string res = "";
    long long carry = 0;
    int i = n.length() - 1;

    while (i >= 0 || carry > 0)
    {
        if (i >= 0)
        {
            carry += (long long)(n[i] - '0') * 9999;
            i--;
        }
        res += to_string(carry % 10);
        carry /= 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    string n;
    if (cin >> n)
    {
        cout << add(n) << "\n";
        cout << multiply(n) << "\n";
    }
    return 0;
}