#include <bits/stdc++.h>
using namespace std;

int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, m;
  cin >> n >> m;

  int a[n], b[m];
  for(int i = 0; i < n; i++){cin >> a[i];}
  for(int i = 0; i < m; i++){cin >> b[i];}

  int i = 0, j = 0, cnt  = 0;
  while(j < m){
    if((a[i] < b[j]) && (i < n)){
      cnt++;
      i++;
    }
    else{
      b[j] = cnt;
      j++;
    }
  }

  for(int i = 0; i < m; i++){cout << b[i] << " ";}
  return 0;
}
