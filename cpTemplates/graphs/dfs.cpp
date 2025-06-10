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
// basic implementation
// time complexity O(m+n) m is the number of edges, n is the number of nodes
vector<vector<ll>> adj; // graph represented as an adjacency list
ll n;                   // number of vertices

vector<bool> visited;

void dfs(ll v) {
  if (visited[v]) {
    return;
  }
  visited[v] = true;
  for (ll u : adj[v]) {
    if (!visited[u])
      dfs(u);
  }
}

// Better implementation

vector<vector<ll>> adj; // graph represented as an adjacency list
ll n;                   // number of vertices

vector<ll> color;

vector<ll> time_in, time_out;
ll dfs_timer = 0;

void dfs(ll v) {
  time_in[v] = dfs_timer++;
  color[v] = 1;
  for (ll u : adj[v])
    if (color[u] == 0)
      dfs(u);
  color[v] = 2;
  time_out[v] = dfs_timer++;
}
// significance of colors{0: non visited, 1: currently iterating through it's
// branches, 2: visited all the children nodes possible from that node} time_out
// - time_in gives the number of children of that node
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
