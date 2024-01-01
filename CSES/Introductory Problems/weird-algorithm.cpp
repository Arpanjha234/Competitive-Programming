#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    long long n;
    cin >> n;
    cout << n << " ";
    for(long long i = n; i != 1;){
        if(i & 1){
            i *= 3;
            i += 1;
        }
        else{
            i /= 2;
        }
        cout << i << " ";
    }
}
