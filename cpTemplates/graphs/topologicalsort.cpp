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
ll n;                    // number of vertices
vector<ll> adj[1000005]; // adjacency list of graph
vector<bool> visited;
vector<ll> ans;

void dfs(ll v) {
  visited[v] = true;
  for (ll u : adj[v]) {
    if (!visited[u]) {
      dfs(u);
    }
  }
  ans.push_back(v);
}

void topological_sort() {
  visited.assign(n, false);
  ans.clear();
  for (ll i = 0; i < n; ++i) {
    if (!visited[i]) {
      dfs(i);
    }
  }
  reverse(ans.begin(), ans.end());
}

// using bfs

vector<ll> adj[100005];
ll indegree[100005];
void topsort() {
  ll n, m;
  n = 100005;
  vector<ll> sortedarr;
  memset(indegree, 0, n);

  queue<ll> q;
  ll cnt = 0;
  for (ll i = 0; i < n; i++) {
    if (indegree[i] == 0) {
      q.push(i);
    }
  }
  while (!q.empty()) {
    ++cnt;
    ll x = q.front();
    q.pop();
    sortedarr.pb(x);
    for (ll u : adj[x]) {
      --indegree[u];
      if (indegree[u] == 0) {
        q.push(u);
      }
    }
  }
  if (cnt < n) {
    cout << "Graph is cyclic";
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
