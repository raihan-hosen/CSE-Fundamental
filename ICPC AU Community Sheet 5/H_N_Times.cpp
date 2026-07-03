#include <bits/stdc++.h>
using namespace std;

void print(long long int n, char c)
{
    cout << c;
    for (int i = 0; i < n - 1; i++)
    {
        cout << " " << c;
    }
}
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        char c;
        long long int n;
        cin >> n >> c;
        print(n, c);
        cout << endl;
    }

    return 0;
}