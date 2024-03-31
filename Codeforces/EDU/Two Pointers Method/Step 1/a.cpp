#include <bits/stdc++.h>
using namespace std;

int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, m;
  cin >> n >> m;

  int a[n], b[m], c[n + m];
  for(int i = 0; i < n; i++){cin >> a[i];}
  for(int i = 0; i < m; i++){cin >> b[i];}

  int i = 0, j = 0;
  while((i < n) || (j < m)){
    if(((a[i] > b[j]) && (j < m)) || (i == n)){
      c[i + j] = b[j];
      j++;
    }
    else{
      c[i + j] = a[i];
      i++;
    }
  }

  for(int i = 0; i < (n + m); i++){cout << c[i] << " ";}
  return 0;
}
