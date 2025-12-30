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

struct TreeNode {
  int val;
  TreeNode *right;
  TreeNode *left;
  TreeNode(int value = -1) {
    val = value;
    right = left = NULL;
  }
};
// traversal order- left root right
void inorder(TreeNode *node) {
  if (node == NULL)
    return;
  inorder(node->left);
  cout << node->val;
  inorder(node->right);
}
// iterative approach
void traverse(TreeNode *root) {
  stack<TreeNode *> st;
  TreeNode *node = root;
  while (node != NULL || !st.empty()) {
    if (node) {
      st.push(node);
      node = node->left;
    } else {
      node = st.top();
      st.pop();
      cout << node->val; // process node
      node = node->right;
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

  return 0;
}
