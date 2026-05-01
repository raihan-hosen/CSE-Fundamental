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

ll MinNum(ll n, vll v) {
    ll count = 0;
    while(true) {
        for0(i,n) {
            ll res;
            if(v[i]%2!=0){
                return count;
                break;
            } else {
                v[i]= v[i]/2;
            }

        }
        count++;
    }
    return count;
}

void solve() {
    ll n;
    vll v;
    cin >> n;
    for0(i,n){
        ll temp;
        cin >> temp;
        v.pb(temp);
    }
    cout << MinNum(n,v) << endl;
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