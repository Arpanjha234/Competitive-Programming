#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

// pragmas for optimization
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx,avx2,bmi,bmi2,popcnt,lzcnt")

// namespaces
using namespace std;
using namespace __gnu_pbds;

// aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using str = string;
using indexed_set = tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> ;

// constants
constexpr ld eps = 1e-9;
constexpr ll mod = 1e9+7;
constexpr ll inf = 2e9;

// macros
#define all(x) x.begin(),x.end()
#define eb emplace_back
#define endl "\n"

// functions 
void setIO(str file) {
  // fast-IO
  ios::sync_with_stdio(0);
  cin.tie(0);

  // file-IO
  if(file.size() > 0){
    freopen((file + ".in").c_str(), "r", stdin);
    freopen((file + ".out").c_str(), "w", stdout);
  }
}

void solve() {

}

int main() {
    setIO("");
    int t;
    cin >> t;
    while(t--){
      solve();
    }
    // solve();
    return 0;
}
