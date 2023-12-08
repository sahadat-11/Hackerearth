//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 8;
bitset<N>f; // initially false;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   f[0] = f[1] = true; 
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
     } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
   }
   int n; cin >> n; int a[n];
   int mx = 0, mn = INT_MAX;
   for(int i = 0; i < n; i++) {
      cin >> a[i];
      if(!f[a[i]]) {
         mx = max(mx, a[i]);
         mn = min(mn, a[i]);
      }
   }
   if(mx == 0 and mn == INT_MAX) cout << -1 << "\n";
   else cout << mx - mn << "\n";
   return 0;
}