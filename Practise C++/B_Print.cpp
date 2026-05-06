#include <iostream>
using namespace std;

void solve(long long int x)
{
    for (int i = 1; i <= x; i++)
    {
        cout << i;
        if (i < x)
        {
            cout << " ";
        }
    }
}

int main()
{
    long long int x;
    cin >> x;
    solve(x);
    return 0;
}