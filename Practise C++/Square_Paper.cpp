#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;

    long long int side = min(a, b);

    cout << side * side << endl;

    return 0;
}