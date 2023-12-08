//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 8;
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

   int t; cin >> t;
   while(t--) {
      int n; cin >> n; int a[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      int one = 0, prime = 0;
      for(int i = 0; i < n; i++) {
         if(a[i] == 1) one++;
         if(!f[a[i]]) prime++;
      }
      //cout << one << " " << prime << "\n";
      ll ans = 1ll * one * (one - 1) / 2 * prime;
      cout << ans << "\n";
   }
   return 0;
}