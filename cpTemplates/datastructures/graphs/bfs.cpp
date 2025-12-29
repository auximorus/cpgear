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
// Time complexity of the algorithm O(n+m) n is the number of vertices, m is the
// edges implementation

void breadthfirstsearch() {
  ll n = 1e9;
  vector<ll> adj[n];
  queue<ll> q;
  bool visited[n];
  ll distance[n];
  ll x = 0;
  visited[x] = true;
  distance[x] = 0;
  q.push(x);
  while (!q.empty()) {
    ll s = q.front();
    q.pop();
    // process node s
    for (auto u : adj[s]) {
      if (visited[u])
        continue;
      visited[u] = true;
      distance[u] = distance[s] + 1;
      q.push(u);
    }
  }
}

void bfs() {
  vector<vector<ll>> adj; // adjacency list representation
  ll n;                   // number of nodes
  ll s;                   // source vertex

  queue<ll> q;
  vector<bool> used(n);
  vector<ll> d(n), p(n);

  q.push(s);
  used[s] = true;
  p[s] = -1;
  while (!q.empty()) {
    ll v = q.front();
    q.pop();
    for (ll u : adj[v]) {
      if (!used[u]) {
        used[u] = true;
        q.push(u);
        d[u] = d[v] + 1;
        p[u] = v;
      }
    }
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
}
