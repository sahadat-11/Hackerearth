// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N = 1e7 + 8;
// bitset<N>f; // initially false;
// int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int n; cin >> n; int a[n];
//    for(int i = 0; i < n; i++) cin >> a[i];
//    int t; cin >> t;
//    while(t--) {
//       int p, q; cin >> p >> q;
//       int x = 0, y = 0, z = 0;
//       for(int i = 0; i < n; i++) {
//          if(a[i] % p == 0) x++;
//          if(a[i] % q == 0) y++;
//          if(a[i] % p == 0 and a[i] % q == 0) z++;
//       }
//       cout << x + y - z << "\n";
//    }
//    return 0;
// }
// // O(t * n);


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 8;
int cnt[N];
int mul_cnt[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) {
      cin >> a[i];
      cnt[a[i]]++;
   }
   for(int i = 1; i < N; i++) {
      for(int j = i; j < N; j += i) {
         mul_cnt[i] += cnt[j];
      }
   }
   //(O(N * log(N))) precalculate

   int t; cin >> t;
   while(t--) {
      int p, q; cin >> p >> q;
      ll ans = 0;
      ans += mul_cnt[p];
      ans += mul_cnt[q];

      ll lcm = 1ll * p / (__gcd(p, q)) * q;
      if(lcm < N) {
         ans -= mul_cnt[lcm];
      }
      cout << ans << "\n";
   }
   return 0;
}
// O(t);


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7, M = 1e6;
int cnt[N];
int mul_cnt[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) {
      cin >> a[i];
      cnt[a[i]]++;
   }
   for(int i = 1; i < N; i++) {
      for(int j = i; j < N; j += i) {
         mul_cnt[i] += cnt[j];
      }
   }
   //(O(N * log(N))) precalculate

   for(int i = 1; i <= M; i++) cout << mul_cnt[i] << "\n";
   return 0;
}
// O(M);
//https://prnt.sc/PJEv5dFPOA9N