#include <bits/stdc++.h>
using namespace std;

// Aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using str = string;

// Constants
constexpr ld eps = 1e-9;
constexpr ll mod = 1e9+7;
constexpr ll inf = 2e9;

// Macros
#define all(x) x.begin(),x.end()
#define emplace_back eb
#define push_back pb
#define endl "\n"

// Functions 
void setIO(str file) {
  // Fast-IO
  ios::sync_with_stdio(0);
  cin.tie(0);

  // File-IO
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
    return 0;
}
