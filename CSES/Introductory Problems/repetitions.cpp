#include <bits/stdc++.h>
using namespace std;

int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string s;
  cin >> s;
  
  int ans = 0, cnt = 1;
  for(int i = 0; i < int(s.size()); i++){
    if(s[i] == s[i + 1]){cnt++;}
    else{
      ans = max(ans, cnt);
      cnt = 1;
    }
  }

  cout << ans << endl;
  return 0;
}
