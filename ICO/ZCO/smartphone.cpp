// @author : Arpan Jha
// @date : 31 March, 2024
// Time complexity : O((2*n) + (n*(log n)))
// Space complexity : O(n)

#include <bits/stdc++.h>
using namespace std;

int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;

  long long budgets[n];
  for(int i = 0; i < n; i++){cin >> budgets[i];}
  
  sort(budgets, budgets + n);

  long long max_profit = 0;
  for(int i = 0; i < n; i++){
    long long profit = (budgets[i] * (n - i));
    max_profit = max(max_profit, profit);
  }

  cout << max_profit << endl;
  return 0;
}
