#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  long long n, sum = 0;
  cin >> n;
 
  sum = (n * (n + 1) / 2);
  if(sum & 1){
    cout << "NO" << endl;
  }
  else{
    int num[n + 5];
    vector<int>s1;
    vector<int>s2;
    for(long long i = 1; i <= n; i++){num[i] = i;}
    
    long long target = (sum / 2);
    long long curr_sum = 0;
    for(long long i = n; i >= 1; i--){
      if(curr_sum + num[i] <= target){
        curr_sum += num[i];
        s1.emplace_back(num[i]);
      }
      else{
        s2.emplace_back(num[i]);
      }
    }
 
    cout << "YES" << endl;
    cout << s1.size() << "\n";
    for(int i : s1){cout << i << " ";}
    cout << "\n";
 
    cout << s2.size() << endl;
    for(int i : s2){cout << i << " ";}
    cout << "\n";
  }
  return 0;
}
