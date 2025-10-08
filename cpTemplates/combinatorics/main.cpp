#include <bits/stdc++.h>
using namespace std;

// #pragma GCC target ("avx2")
// #pragma GCC optimization ("O3")
// #pragma GCC optimization ("unroll-loops")
// #pragma optimization_level 3
// #pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef complex<ll> P;

#define X real()
#define Y imag()
#define fl(i, b) for (ll i = 0; i < b; i++)
#define ain(a, lb, rb)                                                         \
  for (ll ele = lb; ele < rb; ele++)                                           \
    cin >> a[ele];
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define mt make_tuple
#define endl "\n"

lld const pi = 3.1415926535;
// To calculate Combination(nCk) O(k+k)
int C(int n, int k) {
  double res = 1;
  for (int i = 1; i <= k; ++i)
    res = res * (n - k + i) / i;
  return (int)(res + 0.01);
}
// function to find the factorial of a number(change mod accordingly),
// factorial%mod
ll factorial(ll n) {
  ll result = 1;
  ll const mod = 1e17;
  for (ll i = 2; i <= n; i++) {
    result *= i;
    result = result % mod;
  }
  return result % mod;
}

void solve() {}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  ll t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
}
