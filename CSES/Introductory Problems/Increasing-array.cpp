#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;
 
  long long a[n];
  for(int i = 0; i < n; i++){cin >> a[i];}
 
  long long ans = 0, delta = 0;
  for(int i = 0; i < n - 1; i++){
    if(a[i] > a[i + 1]){
      delta = (a[i] - a[i + 1]);
      a[i + 1] += delta;
      ans += delta;
    }
  }
  
  cout << ans << "\n";
  return 0;
}
