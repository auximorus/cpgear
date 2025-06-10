#ifdef USE_PRECOMPILED
#include "/home/auxi/Documents/compprog/currentproblem/precompiled_std.h"
#else
#include <bits/stdc++.h>
#endif

using namespace std;

// Compiler optimization directives (uncomment as needed)
// #pragma GCC target ("avx2")
// #pragma GCC optimization ("O3")
// #pragma GCC optimization ("unroll-loops")
// #pragma optimization_level 3
// #pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

// Type definitions
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef complex<ll> P;

// Macros
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

// Constants
const lld pi = 3.1415926535;
const ll inf = 1e17;

// Time complexity for find set is O(logn) average
// Time complexity for complete operation of union find average O(alpha(n))
ll parent[100005];
ll siz[100005];
ll rnk[100005];

ll find_set(ll v) {
  if (v == parent[v])
    return v;
  return parent[v] = find_set(parent[v]);
}
// Set union by size
void make_set(ll v) {
  parent[v] = v;
  siz[v] = 1;
}

void union_sets(ll a, ll b) {
  a = find_set(a);
  b = find_set(b);
  if (a != b) {
    if (siz[a] < siz[b])
      swap(a, b);
    parent[b] = a;
    siz[a] += siz[b];
  }
}

// Set union by rank
void make_set(ll v) {
  parent[v] = v;
  rnk[v] = 0;
}

void union_sets(ll a, ll b) {
  a = find_set(a);
  b = find_set(b);
  if (a != b) {
    if (rnk[a] < rnk[b])
      swap(a, b);
    parent[b] = a;
    if (rnk[a] == rnk[b])
      rnk[a]++;
  }
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

  return 0;
}
