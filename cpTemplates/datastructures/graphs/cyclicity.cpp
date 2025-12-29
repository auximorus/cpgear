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

// implementation for directed graph
ll n;
vector<ll> adj[1000005];
vector<char> color;
vector<ll> parent;
ll cycle_start, cycle_end;

bool dfs(ll v) {
  color[v] = 1;
  for (ll u : adj[v]) {
    if (color[u] == 0) {
      parent[u] = v;
      if (dfs(u))
        return true;
    } else if (color[u] == 1) {
      cycle_end = v;
      cycle_start = u;
      return true;
    }
  }
  color[v] = 2;
  return false;
}

void find_cycle() {
  color.assign(n, 0);
  parent.assign(n, -1);
  cycle_start = -1;

  for (ll v = 0; v < n; v++) {
    if (color[v] == 0 && dfs(v))
      break;
  }

  if (cycle_start == -1) {
    cout << "Acyclic" << endl;
  } else {
    vector<ll> cycle;
    cycle.push_back(cycle_start);
    for (ll v = cycle_end; v != cycle_start; v = parent[v])
      cycle.push_back(v);
    cycle.push_back(cycle_start);
    reverse(cycle.begin(), cycle.end());

    cout << "Cycle found: ";
    for (ll v : cycle)
      cout << v << " ";
    cout << endl;
  }
}

// for non-directed graph
ll n;
vector<ll> adj[1000005];
vector<bool> visited;
vector<ll> parent;
int cycle_start, cycle_end;

bool dfs(ll v, ll par) { // passing vertex and its parent vertex
  visited[v] = true;
  for (ll u : adj[v]) {
    if (u == par)
      continue; // skipping edge to parent vertex
    if (visited[u]) {
      cycle_end = v;
      cycle_start = u;
      return true;
    }
    parent[u] = v;
    if (dfs(u, parent[u]))
      return true;
  }
  return false;
}

void find_cycle() {
  visited.assign(n, false);
  parent.assign(n, -1);
  cycle_start = -1;

  for (ll v = 0; v < n; v++) {
    if (!visited[v] && dfs(v, parent[v]))
      break;
  }

  if (cycle_start == -1) {
    cout << "Acyclic" << endl;
  } else {
    vector<ll> cycle;
    cycle.push_back(cycle_start);
    for (ll v = cycle_end; v != cycle_start; v = parent[v])
      cycle.push_back(v);
    cycle.push_back(cycle_start);

    cout << "Cycle found: ";
    for (ll v : cycle)
      cout << v << " ";
    cout << endl;
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
