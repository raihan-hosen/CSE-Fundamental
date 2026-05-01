#include <iostream>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <utility>
#include <functional>
#include <string>
#include <cstring>
#include <cmath>
#include <complex>
#include <climits>
#include <cfloat>
#include <cstdint>
#include <bitset>
#include <random>
#include <chrono>
#include <exception>
#include <stdexcept>
#include <typeinfo>

#define for0(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i)
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define sz(a) int((a).size())

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;

// ll fibonacci(int n){
//     if(n<=2) return n-1;
//     return fibonacci(n-1) + fibonacci(n-2);
// }

long long fibonacci(int n) {
    ll a1 = 0;
    ll a2 = 1;
    if(n == 1) return a1;
    if(n == 2) return a2;
    ll res = 0;
    for(int i = 3; i <= n; i++){
        res = a1+ a2;
        a1 = a2;
        a2 = res;
    }
    return res;
}
void solve() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
}

void testCases() {
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
}

int main() {
    solve();
    return 0;
}