#include <bits/stdc++.h>
using namespace std;

int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while(t--){
    int n, temp, x;
    cin >> n;
  
    vector<int> ans;
    temp = n;
    
    for(int i = 1; i <= n; i *= 10){
      x = (temp % 10) * i;
      if(x > 0){ans.push_back(x);}
      temp /= 10;
    }

    cout << ans.size() << '\n';
    for(int  i : ans){cout << i << " ";}
    cout << endl;
  }
  return 0;
}
