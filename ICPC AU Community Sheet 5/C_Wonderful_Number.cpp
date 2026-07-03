#include <bits/stdc++.h>
using namespace std;

string getBinary(int n)
{
    string binary = "";
    while (n > 0)
    {
        binary += (n % 2 == 0) ? '0' : '1';
        n /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

bool isPalindrome(const string &s)
{
    int left = 0;
    int right = s.length() - 1;
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
    long long int n;
    cin >> n;
    if (n % 2 != 0 && isPalindrome(getBinary(n)))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}