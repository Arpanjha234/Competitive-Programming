#include <bits/stdc++.h>
using namespace std;

int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, temp;
  cin >> n;
  
  vector<int> ans;
  temp = n;
  for(int i = 1; i <= n; i *= 10){
    ans.push_back((temp % 10) * i);
    temp /= 10;
  }

  for(int  i : ans){cout << i << " ";}
  return 0;
}
