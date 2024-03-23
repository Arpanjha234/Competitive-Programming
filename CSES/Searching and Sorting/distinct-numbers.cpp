#include <bits/stdc++.h>
using namespace std;

int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, cnt = 1;
  cin >> n;
  
  int a[n + 10];
  for(int i = 0; i < n; i++){cin >> a[i];}
  
  sort(a, a + n);
  if(n > 1){
    for(int i = 1; i < n; i++){
      if(a[i] != a[i - 1]){cnt++;}
    }
  }

  cout << cnt << endl;
  return 0;
}
