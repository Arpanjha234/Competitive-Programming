#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
 
  int n, q;
  cin >> n >> q;
 
  int x[n + 10];
  long long pfs[n + 10];
  for(int i = 1; i <= n; i++){
    cin >> x[i];
    pfs[i] = pfs[i - 1] + x[i];
  }
 
  while(q--){
    int a, b;
    cin >> a >> b;
    long long ans = pfs[b] - pfs[a - 1];
    cout << ans << '\n';
  }
  return 0;
}
