// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long int;

// bool check(ll m, ll n, ll k)
// {
//     if (m == 0 || k == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }

// ll number(ll m, ll n, ll k)
// {
//     ll count = 0;
//     bool swap = true;
//     while (swap != false)
//     {
//         if (m >= 1 && n >= 1 && k >= 1)
//         {
//             count++;
//             m--;
//             n--;
//             k--;
//             swap = true;
//         }
//         else if (m >= 2 && k >= 1)
//         {
//             count++;
//             m = m - 2;
//             k--;
//             swap = true;
//         }
//         else
//         {
//             swap = false;
//         }
//     }

//     return count;
// }

// int main()
// {
//     ll m, n, k;
//     cin >> m >> n >> k;

//     bool make = check(m, n, k);

//     if (make == 0)
//     {
//         cout << 0 << endl;
//     }
//     else
//     {
//         cout << number(m, n, k) << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{

    ll n, m, k;
    cin >> n >> m >> k;

    ll type1 = min({n, m, k});

    n = n - type1;
    k = k - type1;

    ll type2 = min(n / 2, k);
    cout << type1 + type2 << endl;
    return 0;
}