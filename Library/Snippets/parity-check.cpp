// Method 1 : Shorter Method
// Time Complexity : O(1)
// Note : slightly faster in runtime than other approaches
bool isEven(long long x){
 return !(x & 1);
}

// Method 2 : Longer Method
// Time Complexity : O(1)
bool isEven(long long x){
 return !(x % 2);
}

