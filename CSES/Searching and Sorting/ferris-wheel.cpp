#include <bits/stdc++.h>
using namespace std;

int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, x, cnt = 0, ans = 0;
  cin >> n >> x;

  int p[n];
  for(int i = 0; i < n; i++){cin >> p[i];}

  sort(p, p + n);

  int i = 0, j = (n - 1);
  while(i < j){
    if((p[i] + p[j]) <= x){
      cnt++;
      i++;
      j--;
    }
    else{
      j--;
    }
  }

  ans = (n - cnt);

  cout << ans << endl;
  return 0;
}
