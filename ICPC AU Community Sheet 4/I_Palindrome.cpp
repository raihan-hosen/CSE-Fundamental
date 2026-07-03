#include <iostream>
using namespace std;

bool ispalindrome(string s, long long int n)
{
    long long int left = 0, right = n - 1;
    while (left < right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    long long int n = s.length();
    bool chk = ispalindrome(s, n);

    if (chk == false)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}