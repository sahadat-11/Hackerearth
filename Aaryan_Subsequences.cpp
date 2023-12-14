//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int f[32];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < n; i++) {
      for(int bit = 0; bit < 32; bit++) {
         if(a[i] & (1 << bit)) {
            f[bit] = true;
         }
      }
   }
   ll ans = 0;
   for(int bit = 0; bit < 32; bit++) {
      if(f[bit]) {
         ans += (1 << bit);
      }
   }
   cout << ans << "\n";
   return 0;
}

// https://prnt.sc/8uh3Bm2r3GRP