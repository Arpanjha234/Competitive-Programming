#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, x;
  cin >> n >> x;
 
  pair<int, int> a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i].first;
    a[i].second = (i + 1);
  }
 
  sort(a, a + n);
 
  int i = 0, j = (n - 1);
 
  while(i < j){
    // case-1 : (a[i] + a[j] < x) then i++
    if((a[i].first + a[j].first) < x){i++;}
 
    // case-2 : (a[i] + a[j] > x) then j--
    else if((a[i].first + a[j].first) > x){j--;}
 
    // case-3 : (a[i] + a[j] == x) then return ans
    else{
      cout << a[j].second << " " << a[i].second << endl;
      return 0;
    }
  }
 
  cout << "IMPOSSIBLE" << endl;
  return 0;
}
