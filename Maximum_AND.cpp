//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      ll l, r; cin >> l >> r;
      int setbit = __builtin_popcountll(r);
      if(l == r) {
         cout << l << "\n";
      }
      else if((r - l == 1)) {
         cout << (l & r) << "\n";
      }
      else {
         cout << max(((r - 1) & (r - 2)),((r) & (r - 1))) << "\n";
      }
   }
   return 0;
}