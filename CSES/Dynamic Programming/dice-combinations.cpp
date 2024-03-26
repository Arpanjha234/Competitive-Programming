#include <bits/stdc++.h>
using namespace std;

constexpr int mod = 1e9 + 7;

int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;

  int dp[n + 10] = {0};

  // base-case
  dp[0] = dp[1] = 1;

  for(int i = 2; i <= n; i++){
    for(int j = 1; j <= 6; j++){
      if((i - j) >= 0){
        // dp[i] = number of ways to construct sum n
        dp[i] = ((dp[i - j] + dp[i]) % mod);
      }
    }
  }
  cout << dp[n] << endl;
  return 0;
}
