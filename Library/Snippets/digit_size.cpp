// Method 2 : Shorter Method 
// Time Complexity : O(log n)
int dgt_sz(ll x){
  return log10(x) + 1;
}

// Method 2 : Longer Method 
// Time Complexity : O(log n)
int dgt_sz(ll x){
  int res = 0;
  while(x > 0){
    x /= 10;
  }
  return res;
}
