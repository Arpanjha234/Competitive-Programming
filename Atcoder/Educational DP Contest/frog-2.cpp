#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9;

int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, k;
  cin >> n >> k;

  int h[n + 10];
  for(int i = 0; i < n; i++){cin >> h[i];}

  int dp[n + 10];
  dp[0] = 0;
  fill(dp + 1, dp + n, inf);

  for(int i = 1; i < n; i++){
    for(int j = 1; j <= k; j++){
      if((i - j) >= 0){
        dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
      }
    }
  }
  
  cout << dp[n - 1] << endl;
  return 0;
}
