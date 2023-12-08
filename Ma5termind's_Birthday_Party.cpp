//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7 + 8;
bitset<N>f; // initially false;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   f[0] = f[1] = true; 
   for(int i = 6; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
     } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
   }
   vector<int> prime;
   for(int i = 2; i <= N; i++) {
      if(!f[i]) prime.push_back(i);
   }

   int t; cin >> t;
   while(t--) {
      int l, r; cin >> l >> r;
      int lb = lower_bound(prime.begin(), prime.end(), l) - prime.begin();
      int ub = upper_bound(prime.begin(), prime.end(), r) - prime.begin();
      int total_number = r - l + 1;
      int total_prime = (ub - lb);
      int ans = total_number - total_prime;
      cout << ans << "\n";
   }
   return 0;
}
