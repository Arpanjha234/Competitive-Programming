// Time Complexity : O(1)
string to_bits(long long x){
  bitset<64> a(x);
  return a.to_string();
}
