//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, q; cin >> n >> q; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int pre_xor[n];
   pre_xor[0] = a[0];
   for(int i = 1; i < n; i++) {
      pre_xor[i] = (pre_xor[i - 1] ^ a[i]);
   }
   // for(int i = 0; i < n; i++) {
   //    cout << pre_xor[i] << " ";
   // }
   // cout << "\n";
   while(q--) {
      int l, r; cin >> l >> r;
      l--; r--;
      int XOR = 0;
      // for(int i = l; i <= r; i++) {
      //    XOR ^= a[i];
      // }
      // cout << XOR << "\n";
      if(l == 0) XOR = pre_xor[r];
      else XOR = pre_xor[l - 1] ^ pre_xor[r];
      cout << XOR << "\n";
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}