#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string s;
  cin >> s;
 
  int cnt[26] = {0};
  for(char c : s){cnt[c - 'A']++;}
  
  bool flag = false;
  int temp_cnt = 0;
  for(int i = 0; i < 26; i++){
    if(cnt[i] & 1){temp_cnt++;}
  }
  if(temp_cnt > 1){flag = true;}
 
  if(flag){
    cout << "NO SOLUTION" << endl;
  }
  else{
    string a, b, c;
    for(int i = 0; i < 26; i++){
      if(!(cnt[i] & 1)){
        while(cnt[i] > 0){
        a.push_back(char('A' + i));
        c.push_back(char('A' + i));
        cnt[i] -= 2;
        }
      }
      else{
        while(cnt[i] > 0){
          b.push_back(char('A' + i));
          cnt[i]--;
        }
      }
    }
    reverse(c.begin(), c.end());
 
    cout << a << b << c << endl;
  }
  return 0;
}
