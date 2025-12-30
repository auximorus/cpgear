
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
// traversal order- left right root
void postorder(TreeNode *node) {
  if (node == NULL)
    return;
  postorder(node->left);
  postorder(node->right);
  cout << node->val;
}

// using set

void traversal(TreeNode *root) {
  if (!root)
    return;

  stack<TreeNode *> st;
  set<TreeNode *> visited;

  st.push(root);

  while (!st.empty()) {
    TreeNode *node = st.top();

    if (node->left && visited.find(node->left) == visited.end()) {
      st.push(node->left);
    } else if (node->right && visited.find(node->right) == visited.end()) {
      st.push(node->right);
    } else {
      cout << node->val << " "; // process node
      visited.insert(node);
      st.pop();
    }
  }
}

// no set

void traversalnoset(TreeNode *root) {
  stack<TreeNode *> st;
  TreeNode *node = root;
  TreeNode *lastVisited = NULL;

  while (node || !st.empty()) {
    if (node) {
      st.push(node);
      node = node->left;
    } else {
      TreeNode *top = st.top();
      if (top->right && lastVisited != top->right) {
        node = top->right;
      } else {
        cout << top->val << " "; // process node
        lastVisited = top;
        st.pop();
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

  return 0;
}
