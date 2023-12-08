//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int spf[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) spf[i] = i;
   for(int i = 2; i < N; i++) {
     if(spf[i] == i) {
        for(int j = i; j < N; j += i) {
          spf[j] = min(spf[j], i);
        }
     }
   }
   //for(int i = 1; i < 100; i++) cout << spf[i] << " ";
   int t; cin >> t;
   while(t--) {
       int l, r; cin >> l >> r;
       int cnt = 0;
       for(int i = l; i <= r; i++) {
          int x = i, distinct = 0, temp = 1;
          while(x > 1) {
            int k = spf[x];
            distinct++;
            while(x % k == 0) {
              x /= k;
            }
            temp *= k;
            //cout << k << " ";
          }
          if(distinct == 2 and temp == i) { // (1 and n so distinct == 4)
            cnt++;
            //cout << i << endl;
          }
       }
       cout << cnt << "\n";
   }
   return 0;
}
// O(r * log(r)) // 20 * 10^8 (get TLE)


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
   vector<int> prime;
   for(int i = 2; i <= N; i++) {
      if(!f[i]) prime.push_back(i);
   }
   int t; cin >> t;
   int cnt = 0;
   while(t--) {
     int l, r; cin >> l >> r;
     for(int i = 0; i < prime.size() and prime[i] <= r; i++) {
       int x = l / prime[i] + (l % prime[i] > 0);
       x = max(x, prime[i] + 1);
       int y = r / prime[i];
       if(y < x) continue;
       cnt += upper_bound(prime.begin(),prime.end(), y) - lower_bound(prime.begin(),prime.end(), x);
     }
     cout << cnt << "\n";
   }
   return 0;
}