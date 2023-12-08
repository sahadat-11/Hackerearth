//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7 + 8;
bitset<N>f; // initially false;
int pre[N], good[N], final[N];
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
   
   for(int i = 1; i < N; i++) { // 1 to i prime numbers count
      pre[i] = pre[i - 1] + !f[i];
   }
   for(int i = 1; i < N; i++) {
      if(!f[pre[i]]) { // it is count or not
         good[i] = true;
      }
   }
   for(int i = 1; i < N; i++) {
      final[i] = final[i - 1] + good[i];
   }
   int t; cin >> t;
   while(t--) {
      int l, r; cin >> l >> r;
      cout << final[r] - final[l - 1] << "\n";
   }
   return 0;
}


//To determine if a number X is a "Prime Prime," you need to count the number of prime numbers 
//from 1 to X (inclusive) and check if that count is itself a prime number