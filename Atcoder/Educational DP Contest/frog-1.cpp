#include <bits/stdc++.h>
using namespace std;

int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;

  int h[n + 10];
  for(int i = 0; i < n; i++){cin >> h[i];}

  int dp[n + 10];
  dp[0] = 0;

  for(int i = 1; i < n; i++){
    if((i - 1) >= 0){
      // dp[i] = min cost to reach stone i
      dp[i] = dp[i - 1] + abs(h[i] - h[i - 1]);
    }
    if((i - 2) >= 0){
      // dp[i] = min cost to reach stone i
      dp[i] = min(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }
  }
  
  cout << dp[n - 1] << '\n';
  return 0;
}
