#include <bits/stdc++.h>
using namespace std;
 
const int mod = 1e9+7;
 
int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
 
  int n, ans = 1;
  cin >> n;
 
  for(int i = 0; i < n; i++){
      ans = ((ans % mod) * 2) % mod;
  }
  
  cout << ans << '\n';
  return 0;
}
